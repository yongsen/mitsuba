#include <mitsuba/render/bsdf.h>
#include <mitsuba/hw/basicshader.h>
#include <mitsuba/core/warp.h>

MTS_NAMESPACE_BEGIN

class MicroFacet : public BSDF {
public:
	MicroFacet(const Properties &props)
		: BSDF(props) { 
	    m_diffuseReflectance = props.getSpectrum("diffuseReflectance", Spectrum(0.02f));
	    m_A = props.getSpectrum("A", Spectrum(10.0f));
	    m_B = props.getFloat("B", 10.0f);
	    m_C = props.getFloat("C", 0.5f);
	    m_F0 = props.getFloat("F0", 1.0f);
	}

	MicroFacet(Stream *stream, InstanceManager *manager)
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
		m_usesRayDifferentials  = false;

		//m_F0 /= 10.0f;

		BSDF::configure();

		std::cout << toString();
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

		/* eval spec */
		Spectrum result(0.0f);
	        Vector H = normalize(bRec.wo+bRec.wi);
	        const Float cosThetaH = Frame::cosTheta(H);
		if(cosThetaH > 0.0f)
		{
		  // compute the S(f) function
		  const Float f2 = 1.0f-cosThetaH;
		  const Spectrum S = sFunc(f2);

		  // compute shadowing and masking
		  const Float Hwi = dot(bRec.wi, H);
		  const Float Hwo = dot(bRec.wo, H);
		  const Float G = std::min(1.0f, std::min( 
					   2.0f * cosThetaH * Frame::cosTheta(bRec.wi) / Hwi, 
					   2.0f * cosThetaH * Frame::cosTheta(bRec.wo) / Hwo));

		  // compute Fresnel
		  const Float F = fresnel(m_F0, cosThetaH);

		  // evaluate the MicroFacet model
		  result += S * G * F / (Frame::cosTheta(bRec.wi));
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

		Float specProb = 0.0f;
		Vector H = bRec.wo+bRec.wi;   Float Hlen = H.length();
		if(Hlen == 0.0f) specProb = 0.0f;
		else
		{
		  H /= Hlen;
		  /* normalization constant: Mh*A */
		  Float MhA = 0.0f;
		  if (m_C == 1.0f)
			MhA = m_B/(2.0f*M_PI*log10(1.0f+m_B));
		  else
			MhA = m_B*(m_C-1.0f)/(2.0f*M_PI*(1.0f-pow(1.0f+m_B, 1.0f-m_C)));

		  /* proposal densify function of the incident direction*/
		  const Float f2 = 1.0f-Frame::cosTheta(H);
		  specProb = (MhA / pow(1.0f+m_B*f2, m_C)) / (4.0f * absDot(bRec.wo, H));
		}
		return specProb;
	}

	Spectrum sample(BSDFSamplingRecord &bRec, Float &pdf, const Point2 &_sample) const {
	        Point2 sample(_sample);
		/* sample specular */
	        // compute theta
		Float cosThetaM = 0.0f;
		if (m_C == 1.0f)
		  cosThetaM = (1.0f + m_B - math::fastexp(sample.x*log10(1.0f+m_B)))/m_B;
		else
		  cosThetaM = (1.0f + m_B - pow(1.0f+sample.x*(std::pow(1.0f+m_B, 1.0f-m_C) - 1.0f), -1.0f/(m_C-1.0f)))/m_B;
		const Float sinThetaM = std::sqrt(std::max((Float) 0.0f, 1.0f - cosThetaM*cosThetaM));

		// compute phi
		Float phiM = (2.0f * M_PI) * sample.y;
		Float sinPhiM, cosPhiM;
		math::sincos(phiM, &sinPhiM, &cosPhiM);

		const Normal m = Vector(sinThetaM * cosPhiM,sinThetaM * sinPhiM,cosThetaM);

		// Perfect specular reflection based on the microsurface normal
		bRec.wo = 2.0f * dot(bRec.wi, m) * Vector(m) - bRec.wi;
		bRec.sampledComponent = 0;
		bRec.sampledType = EGlossyReflection;

		bRec.eta = 1.0f;

		pdf = MicroFacet::pdf(bRec, ESolidAngle);

		/* unoptimized evaluation, explicit division of evaluation / pdf. */
		if (pdf == 0 || Frame::cosTheta(bRec.wo) <= 0)
			return Spectrum(0.0f);
		else
			return eval(bRec, ESolidAngle)/pdf;
	}

	Spectrum sample(BSDFSamplingRecord &bRec, const Point2 &sample) const {
    	        Float pdf;
		return MicroFacet::sample(bRec, pdf, sample);
	}

	void serialize(Stream *stream, InstanceManager *manager) const {
		BSDF::serialize(stream, manager);

		m_diffuseReflectance.serialize(stream);
		m_A.serialize(stream);
		stream->writeFloat( m_B );
		stream->writeFloat( m_C );
		stream->writeFloat( m_F0 );
	}

	std::string toString() const {
       std::ostringstream oss;
	   oss << "MicroFacet[" << endl
           << " id = \"" << getID() << "\"," << endl
	   << " diffuseReflectance = " << indent(m_diffuseReflectance.toString()) << ", " << endl
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

        // compute the S function
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
};

// ================ Hardware shader implementation ================

/* MicroFacet shader-- render as a 'black box' */
class MicroFacetShader : public Shader {
public:
	MicroFacetShader(Renderer *renderer) :
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

Shader *MicroFacet::createShader(Renderer *renderer) const {
	return new MicroFacetShader(renderer);
}

MTS_IMPLEMENT_CLASS(MicroFacetShader, false, Shader)
MTS_IMPLEMENT_CLASS_S(MicroFacet, false, BSDF)
MTS_EXPORT_PLUGIN(MicroFacet, "MicroFacet BSDF");
MTS_NAMESPACE_END
