#include <mitsuba/render/bsdf.h>
#include <mitsuba/hw/basicshader.h>
#include <mitsuba/core/warp.h>

MTS_NAMESPACE_BEGIN

class SmoothSurface : public BSDF {
public:
	SmoothSurface(const Properties &props)
		: BSDF(props) { 
	    m_diffuseReflectance = props.getSpectrum("diffuseReflectance", Spectrum(0.1f));
	    m_A = props.getSpectrum("A", Spectrum(10.0f));
	    m_B = props.getFloat("B", 10.0f);
	    m_C = props.getFloat("C", 0.5f);
	    m_F0 = props.getFloat("F0", 0.5f);
	}

	SmoothSurface(Stream *stream, InstanceManager *manager)
		: BSDF(stream, manager) {
	    m_diffuseReflectance = Spectrum(stream);
	    m_A = Spectrum(stream);
	    m_B = stream->readFloat();
	    m_C = stream->readFloat();
	    m_F0 = stream->readFloat();

	    configure();
	}

	void configure() {
		m_components.clear();
		m_components.push_back(EGlossyReflection | EFrontSide );
		m_components.push_back(EDiffuseReflection | EFrontSide );
		m_usesRayDifferentials = false;

                // approximation of specular reflectance
		m_specularReflectance = Spectrum(1.0f) - m_diffuseReflectance;

		Float dAvg = m_diffuseReflectance.getLuminance(),
		      sAvg = m_specularReflectance.getLuminance();
		m_specularSamplingWeight = sAvg / (dAvg + sAvg);

                m_F0 *= 2.0f;

		BSDF::configure();

		std::cout << toString() << endl;
	}

	Spectrum eval(const BSDFSamplingRecord &bRec, EMeasure measure) const {
	    /* sanity check */
	    if(measure != ESolidAngle || 
	       Frame::cosTheta(bRec.wi) <= 0 ||
	       Frame::cosTheta(bRec.wo) <= 0)
	      return Spectrum(0.0f);

  	    /* which components to eval */
	    bool hasDiffuse  = (bRec.typeMask & EDiffuseReflection)
				&& (bRec.component == -1 || bRec.component == 1);
            bool hasSpecular = (bRec.typeMask & EGlossyReflection)
				&& (bRec.component == -1 || bRec.component == 0);

		/* eval spec */
		Spectrum result(0.0f);
		if (hasSpecular) {
		    Vector H = normalize(bRec.wo+bRec.wi);
		    Float cosThetaH = Frame::cosTheta(H);
			if(cosThetaH > 0.0f)
			{
			  // compute the S function
			  // compute the square of the length of Dp
			  const Float ri = Frame::sinTheta(bRec.wo);
			  const Float ro = Frame::sinTheta(bRec.wi);
			  const Float cosPhiD = Frame::cosPhi(bRec.wi)*Frame::cosPhi(bRec.wo) + Frame::sinPhi(bRec.wi)*Frame::sinPhi(bRec.wo);
			  const Float dP2 = ri*ri + 2.0f*ri*ro*cosPhiD + ro*ro;

			  const Spectrum S = sFunc(dP2);

			  // compute shadowing and masking
			  const Float G = 1.0f;

			  // compute Fresnel
			  // sinThetaD = ||Lp-Vp||/2
			  const Float sinThetaD2 = (ri*ri - 2.0f*ri*ro*cosPhiD + ro*ro)/4.0f;
			  const Float cosThetaD = std::sqrt(std::max((Float) 0.0f, 1.0f - sinThetaD2));
			  const Float Q = fresnel(m_F0, cosThetaD);

			  // evaluate the microfacet model
			  result += S * G * Q * Frame::cosTheta(bRec.wo);
			}
		}

		/* eval diffuse */
		if (hasDiffuse)
		  result += m_diffuseReflectance * INV_PI * Frame::cosTheta(bRec.wo);

		// Done.
		return result;
	}

	Float pdf(const BSDFSamplingRecord &bRec, EMeasure measure) const {
	    if (measure != ESolidAngle ||
			Frame::cosTheta(bRec.wi) <= 0 ||
			Frame::cosTheta(bRec.wo) <= 0)
		    return 0.0f;

		bool hasSpecular = (bRec.typeMask & EGlossyReflection)
				&& (bRec.component == -1 || bRec.component == 0);
		bool hasDiffuse  = (bRec.typeMask & EDiffuseReflection)
				&& (bRec.component == -1 || bRec.component == 1);

		Float diffuseProb = 0.0f, specProb = 0.0f;

		//* diffuse pdf */
		if (hasDiffuse)
			diffuseProb = warp::squareToCosineHemispherePdf(bRec.wo);

		/* specular pdf */
		if (hasSpecular) {
			Vector H = bRec.wo+bRec.wi;   Float Hlen = H.length();
			if(Hlen == 0.0f) specProb = 0.0f;
			else
			{
		  	  H /= Hlen;

		  	  // compute the square of the length of Dp
			  const Float ri = Frame::sinTheta(bRec.wo);
			  const Float ro = Frame::sinTheta(bRec.wi);
			  const Float cosPhiD = Frame::cosPhi(bRec.wi)*Frame::cosPhi(bRec.wo) + Frame::sinPhi(bRec.wi)*Frame::sinPhi(bRec.wo);
			  const Float dP2 = ri*ri + 2.0f*ri*ro*cosPhiD + ro*ro;

			  // compute Md*A
			  const Float MdTail = std::sqrt(1.0f + 2.0f*m_B*(1.0f+ro*ro) + m_B*m_B*(1.0f-ro*ro)*(1.0f-ro*ro));
			  const Float MdA = m_B * INV_PI / (-log10(2.0f) + log10(1.0f+m_B-m_B*ro*ro+MdTail));

			  // compute pdf
			  specProb = Frame::cosTheta(bRec.wo) * MdA / (1.0f + m_B*dP2);
			}
		}

		if (hasDiffuse && hasSpecular)
			return m_specularSamplingWeight * specProb + (1.0f-m_specularSamplingWeight) * diffuseProb;
		else if (hasDiffuse)
			return diffuseProb;
		else if (hasSpecular)
			return specProb;
		else
			return 0.0f;
			
		return specProb;
	}

	Spectrum sample(BSDFSamplingRecord &bRec, Float &pdf, const Point2 &_sample) const {
	        Point2 sample(_sample);

		bool hasSpecular = (bRec.typeMask & EGlossyReflection)
				&& (bRec.component == -1 || bRec.component == 0);
		bool hasDiffuse  = (bRec.typeMask & EDiffuseReflection)
				&& (bRec.component == -1 || bRec.component == 1);

		if (!hasSpecular && !hasDiffuse)
			return Spectrum(0.0f);

		// determine which component to sample
		bool choseSpecular = hasSpecular;
		if (hasDiffuse && hasSpecular) {
			if (sample.x <= m_specularSamplingWeight) {
				sample.x /= m_specularSamplingWeight;
			} else {
				sample.x = (sample.x - m_specularSamplingWeight)
					/ (1.0f-m_specularSamplingWeight);
				choseSpecular = false;
			}
		}

		/* sample specular */
		if (choseSpecular) {
			// compute theta based on sample x and bRec
			const Float sinThetaM = sampleToSinTheta(bRec, sample.x);
			const Float cosThetaM = std::sqrt(std::max((Float) 0.0f, 1.0f - sinThetaM*sinThetaM));

			// compute phi based on sample y and bRec
			const Float cosPhiM = sampleToCosPhi(bRec, sample.y);
			const Float sinPhiM = std::sqrt(std::max((Float) 0.0f, 1.0f - cosPhiM*cosPhiM));
			
			// compute normal based on theta and phi
			const Normal m = Vector(sinThetaM * cosPhiM, sinThetaM * sinPhiM, cosThetaM);

			// Perfect specular reflection based on the microsurface normal
			bRec.wo = 2.0f * dot(bRec.wi, m) * Vector(m) - bRec.wi;
			bRec.sampledComponent = 0;
			bRec.sampledType = EGlossyReflection;

	        /* sample diffuse */
		} else {
	   	    bRec.wo = warp::squareToCosineHemisphere(sample);
		    bRec.sampledComponent = 1;
		    bRec.sampledType = EDiffuseReflection;
		}
		bRec.eta = 1.0f;

		pdf = SmoothSurface::pdf(bRec, ESolidAngle);
		/* unoptimized evaluation, explicit division of evaluation / pdf. */
		if (pdf == 0 || Frame::cosTheta(bRec.wo) <= 0)
			return Spectrum(0.0f);
		else
			return eval(bRec, ESolidAngle) / pdf;
	}

	Spectrum sample(BSDFSamplingRecord &bRec, const Point2 &sample) const {
    	        Float pdf;
		return SmoothSurface::sample(bRec, pdf, sample);
	}

	void serialize(Stream *stream, InstanceManager *manager) const {
		BSDF::serialize(stream, manager);

		m_diffuseReflectance.serialize(stream);
		m_specularReflectance.serialize(stream);
		m_A.serialize(stream);
		stream->writeFloat( m_B );
		stream->writeFloat( m_C );
		stream->writeFloat( m_F0 );
	}

	Float sampleToSinTheta(const BSDFSamplingRecord& bRec, const Float& x) const {
		const Float ro = Frame::sinTheta(bRec.wi);
		const Float MdTail = std::sqrt(1.0f + 2.0f * m_B *(1.0f+ro*ro) + m_B*m_B*(1.0f-ro*ro)*(1.0f-ro*ro));
		const Float MdA = m_B * INV_PI / (-log10(2.0f) + log10(1.0f+m_B-m_B*ro*ro+MdTail));
		const Float E = math::fastexp(x*m_B*INV_PI/MdA + log10(2.0f));

		const Float sinThetaM = std::sqrt(std::max((Float) 0.0f, (E-2.0f)*(E+2.0f*m_B*ro*ro)/(2.0f*E*m_B)));

		return sinThetaM;
	}

	Float sampleToCosPhi(const BSDFSamplingRecord& bRec, const Float& y) const {
		const Float ri = Frame::sinTheta(bRec.wo);
		const Float ro = Frame::sinTheta(bRec.wi);
		const Float tanPhiT = std::tan(y*M_PI)*std::sqrt((1.0f+m_B*(ri+ro)*(ri+ro))/(1.0f+m_B*(ri-ro)*(ri-ro)));
		const Float tan2PhiT = 2.0f*tanPhiT/(1.0f-tanPhiT*tanPhiT);
		const Float tanPhiO = Frame::sinPhi(bRec.wi)/Frame::cosPhi(bRec.wi);

		const Float tanPhiM = (tan2PhiT+tanPhiO)/(1.0f-tan2PhiT*tanPhiO);
		const Float cosPhiM = 1.0f / std::sqrt(1.0f + tanPhiM*tanPhiM);

		return cosPhiM;
	}

	std::string toString() const {
	       std::ostringstream oss;
 	       oss << "Smooth Surface[" << endl
	           << " id = \"" << getID() << "\"," << endl
		   << " diffuseReflectance = " << indent(m_diffuseReflectance.toString()) << ", " << endl
                   << " specularReflectance = " << indent(m_specularReflectance.toString()) << ", " << endl
		   << " A = " << indent(m_A.toString()) << ", " << endl
		   << " B = " << m_B << ", " << endl
		   << " C = " << m_C << ", " << endl		   
		   << " F0 = " << m_F0 << ", " << endl
		   << "]";
	       return oss.str();
	}

	Shader *createShader(Renderer *renderer) const;

	MTS_DECLARE_CLASS()
private:
	// helper method
	inline Float fresnel(const Float& F0, const Float& c) const
        {
	  return F0 + (1.0f - F0)*pow(1.0-c, 5.0f);
	}

	inline Spectrum sFunc(const Float& fSquare) const
	{
	  return  m_A/(pow(1.0f+m_B*fSquare, m_C));
	}

	// attribtues
    Float m_F0;
    Float m_C;
    Float m_B;
    Spectrum m_A;
    Spectrum m_diffuseReflectance;
    Spectrum m_specularReflectance;

    Float m_specularSamplingWeight;
};

// ================ Hardware shader implementation ================

/* SmoothSurface shader-- render as a 'black box' */
class SmoothSurfaceShader : public Shader {
public:
	SmoothSurfaceShader(Renderer *renderer) :
		Shader(renderer, EBSDFShader) {
		m_flags = ETransparent;
	}

	void generateCode(std::ostringstream &oss,
			const std::string &evalName,
			const std::vector<std::string> &depNames) const {
		oss << "vec3 " << evalName << "(vec2 uv, vec3 wi, vec3 wo) {" << endl
			<< "    return vec3(0.0);" << endl
			<< "}" << endl;
		oss << "vec3 " << evalName << "_diffuse(vec2 uv, vec3 wi, vec3 wo) {" << endl
			<< "    return vec3(0.0);" << endl
			<< "}" << endl;
	}
	MTS_DECLARE_CLASS()
};

Shader *SmoothSurface::createShader(Renderer *renderer) const {
	return new SmoothSurfaceShader(renderer);
}

MTS_IMPLEMENT_CLASS(SmoothSurfaceShader, false, Shader)
MTS_IMPLEMENT_CLASS_S(SmoothSurface, false, BSDF)
MTS_EXPORT_PLUGIN(SmoothSurface, "SmoothSurface BSDF");
MTS_NAMESPACE_END
