#include <mitsuba/render/bsdf.h>
#include <mitsuba/hw/basicshader.h>
#include <mitsuba/core/warp.h>

MTS_NAMESPACE_BEGIN

class Smooth : public BSDF {
public:
	Smooth(const Properties &props)
		: BSDF(props) { 
	    m_diffuseReflectance = props.getSpectrum("diffuseReflectance", Spectrum(0.02f));
	    m_specularReflectance = props.getSpectrum("specularReflectance", Spectrum(0.02f));
	    m_A = props.getSpectrum("A", Spectrum(40.0f));
	    m_B = props.getFloat("B", 10482.133785f);
        m_C = props.getFloat("C", 0.816737f);
	    m_roughness = props.getFloat("roughness", 0.1f);
	    m_F0 = props.getFloat("F0", 2.36565f);
	}

	Smooth(Stream *stream, InstanceManager *manager)
		: BSDF(stream, manager) {
	    m_diffuseReflectance = Spectrum(stream);
	    m_specularReflectance = Spectrum(stream);
	    m_A = Spectrum(stream);
	    m_B = stream->readFloat();
	    m_C = stream->readFloat();
	    m_roughness = stream->readFloat();
	    m_F0 = stream->readFloat();

	    configure();
	}


	void configure() {
		m_components.clear();
		m_components.push_back(EGlossyReflection | EFrontSide );
		m_components.push_back(EDiffuseReflection | EFrontSide );
		m_usesRayDifferentials = false;

		Float dAvg = m_diffuseReflectance.getLuminance(),
		      sAvg = m_specularReflectance.getLuminance();
		m_specularSamplingWeight = sAvg / (dAvg + sAvg);

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
		bool hasSpecular = (bRec.typeMask & EGlossyReflection)
				&& (bRec.component == -1 || bRec.component == 0);
		bool hasDiffuse  = (bRec.typeMask & EDiffuseReflection)
				&& (bRec.component == -1 || bRec.component == 1);

		/* eval spec */
		Spectrum result(0.0f);
		if (hasSpecular) {
		    Vector H = normalize(bRec.wo+bRec.wi);
			if(Frame::cosTheta(H) > 0.0f)
			{
			  // evaluate NDF
			  const Float ri = Frame::sinTheta(bRec.wo);
			  const Float ro = Frame::sinTheta(bRec.wi);
			  const Float cosPhiD = Frame::cosPhi(bRec.wi)*Frame::cosPhi(bRec.wo) + Frame::sinPhi(bRec.wi)*Frame::sinPhi(bRec.wo);
			  const Float dP2 = ri*ri + 2.0f*ri*ro*cosPhiD + ro*ro;

			  const Spectrum S = m_A/(pow(1.0f+m_B*dP2, m_C));

			  // compute shadowing and masking
			  const Float G = 1.0f;

			  // compute Fresnel
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
			Frame::cosTheta(bRec.wo) <= 0 ||
			((bRec.component != -1 && bRec.component != 0) ||
			!(bRec.typeMask & EGlossyReflection)))
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
			  
			  const Float roughness2 = m_roughness*m_roughness;
			  const Float cosTheta2 = Frame::cosTheta2(H);
			  specProb = INV_PI * Frame::cosTheta(H) * math::fastexp(-Frame::tanTheta2(H)/roughness2) / (roughness2 * cosTheta2*cosTheta2) / (4.0f * absDot(bRec.wo, H));
			  
			  /*
			  const Float ri = Frame::sinTheta(bRec.wo);
			  const Float ro = Frame::sinTheta(bRec.wi);
			  const Float cosPhiD = Frame::cosPhi(bRec.wi)*Frame::cosPhi(bRec.wo) + Frame::sinPhi(bRec.wi)*Frame::sinPhi(bRec.wo);
			  const Float dP2 = ri*ri + 2.0f*ri*ro*cosPhiD + ro*ro;
			  const Float MdTail = std::sqrt(1.0f + 2.0f * m_B *(1.0f+ro*ro) + m_B*m_B*(1.0f-ro*ro)*(1.0f-ro*ro));
			  const Float MdA = m_B * INV_PI / (-math::fastlog(2.0f) + math::fastlog(1.0f+m_B-m_B*ro*ro+MdTail));
			  specProb = Frame::cosTheta(bRec.wo) * MdA / (1.0f + m_B*dP2);
			  */
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
/*
			Float cosThetaM = 0.0f, phiM = (2.0f * M_PI) * sample.y;
			Float tanThetaMSqr = -m_roughness*m_roughness * math::fastlog(1.0f - sample.x);
			cosThetaM = 1.0f / std::sqrt(1.0f + tanThetaMSqr);
			const Float sinThetaM = std::sqrt(std::max((Float) 0.0f, 1.0f - cosThetaM*cosThetaM));
			Float sinPhiM, cosPhiM;
			math::sincos(phiM, &sinPhiM, &cosPhiM);
*/

			const Float ri = Frame::sinTheta(bRec.wo);
			const Float ro = Frame::sinTheta(bRec.wi);
			const Float MdTail = std::sqrt(1.0f + 2.0f * m_B *(1.0f+ro*ro) + m_B*m_B*(1.0f-ro*ro)*(1.0f-ro*ro));
			const Float MdA = m_B * INV_PI / (-math::fastlog(2.0f) + math::fastlog(1.0f+m_B-m_B*ro*ro+MdTail));
			const Float E = math::fastexp(sample.x*m_B*INV_PI/MdA + math::fastlog(2.0f));
			const Float sinThetaM = std::sqrt(std::max((Float) 0.0f, (E-2.0f)*(E+2.0f*m_B*ro*ro)/(2.0f*E*m_B)));
			Float cosThetaM = std::sqrt(std::max((Float) 0.0f, 1.0f - sinThetaM*sinThetaM));

			const Float tanPhiT = std::tan(sample.y*M_PI)*std::sqrt((1.0f+m_B*(ri+ro)*(ri+ro))/(1.0f+m_B*(ri-ro)*(ri-ro)));
			const Float tan2PhiT = 2.0f*tanPhiT/(1.0f-tanPhiT*tanPhiT);
			const Float tanPhiO = Frame::sinPhi(bRec.wi)/Frame::cosPhi(bRec.wi);
			const Float tanPhiM = (tan2PhiT+tanPhiO)/(1.0f-tan2PhiT*tanPhiO);
			const Float cosPhiM = 1.0f / std::sqrt(1.0f + tanPhiM);
			const Float sinPhiM = std::sqrt(std::max((Float) 0.0f, 1.0f - cosPhiM*cosPhiM));


			const Normal m = Vector(sinThetaM * cosPhiM,sinThetaM * sinPhiM,cosThetaM);

			// Perfect specular reflection based on the microsurface normal
			bRec.wo = 2.0f * dot(bRec.wi, m) * Vector(m) - bRec.wi;
			//bRec.wo = m;
			bRec.sampledComponent = 0;
			bRec.sampledType = EGlossyReflection;

	        /* sample diffuse */
		} else {
	   	    bRec.wo = warp::squareToCosineHemisphere(sample);
			bRec.sampledComponent = 1;
			bRec.sampledType = EDiffuseReflection;
		}
		bRec.eta = 1.0f;

		pdf = Smooth::pdf(bRec, ESolidAngle);

		/* unoptimized evaluation, explicit division of evaluation / pdf. */
		if (pdf == 0 || Frame::cosTheta(bRec.wo) <= 0)
			return Spectrum(0.0f);
		else
			return eval(bRec, ESolidAngle) / pdf;
	}

	Spectrum sample(BSDFSamplingRecord &bRec, const Point2 &sample) const {
    	        Float pdf;
		return Smooth::sample(bRec, pdf, sample);
	}

	void serialize(Stream *stream, InstanceManager *manager) const {
		BSDF::serialize(stream, manager);

		m_diffuseReflectance.serialize(stream);
		m_specularReflectance.serialize(stream);
		stream->writeFloat( m_roughness );
		stream->writeFloat( m_F0 );
	}

	Float getRoughness(const Intersection &its, int component) const {
	       return m_roughness;
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
		   << " roughness = " << m_roughness << endl
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

	// attribtues
        Float m_F0;
        Float m_roughness;
        Float m_C;
        Float m_B;
        Spectrum m_A;
        Spectrum m_diffuseReflectance;
        Spectrum m_specularReflectance;

        Float m_specularSamplingWeight;
};

// ================ Hardware shader implementation ================

/* Smooth shader-- render as a 'black box' */
class SmoothShader : public Shader {
public:
	SmoothShader(Renderer *renderer) :
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

Shader *Smooth::createShader(Renderer *renderer) const {
	return new SmoothShader(renderer);
}

MTS_IMPLEMENT_CLASS(SmoothShader, false, Shader)
MTS_IMPLEMENT_CLASS_S(Smooth, false, BSDF)
MTS_EXPORT_PLUGIN(Smooth, "Smooth BSDF");
MTS_NAMESPACE_END