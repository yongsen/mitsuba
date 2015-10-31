#include <mitsuba/render/bsdf.h>
#include <mitsuba/hw/basicshader.h>
#include "MERL_BRDF.h"

MTS_NAMESPACE_BEGIN

class MERL : public BSDF {
public:
	MERL(const Properties &props)
		: BSDF(props) { 
	  m_importance = NULL;
	  m_name = props.getString("binary", "blue-acrylic.binary");
	}

	MERL(Stream *stream, InstanceManager *manager)
		: BSDF(stream, manager) {
	        m_name = stream->readString();
		m_importance = static_cast<BSDF *>(manager->getInstance(stream));
	        m_importance->incRef();
		configure();
	}

        virtual ~MERL() {
	  m_importance->decRef();
        }

	void serialize(Stream *stream, InstanceManager *manager) const {
		BSDF::serialize(stream, manager);

		stream->writeString(m_name);
		manager->serialize(stream, m_importance);
	}

	void configure() {
		m_components.clear();
		m_components.push_back(EGlossyReflection | EFrontSide );
		m_components.push_back(EDiffuseReflection | EFrontSide );
		m_usesRayDifferentials = false;

		// check if importance sampling-guide as been specified
		if(m_importance == NULL)
		  Log(EError, "You must specify a BSDF to guide importance sampling MERL BRDF \"%s\".", m_name.c_str());
		
		// try to load the MERL BRDF data
		if(!read_brdf(m_name.c_str(), m_data))
		  Log(EError, "Unable to find \"%s\".", m_name.c_str());
		
		BSDF::configure();
	}

	Spectrum eval(const BSDFSamplingRecord &bRec, EMeasure measure) const {

	  if(m_importance == NULL)
	    Log(EError, "Unexpected");

	  // handle diffuse and specular by weighting the evaluation proportional to the relative diffuse and specular component of the importance sampling
	  bool hasSpecular = (bRec.typeMask & EGlossyReflection)
	    && (bRec.component == -1 || bRec.component == 0);
	  bool hasDiffuse  = (bRec.typeMask & EDiffuseReflection)
	    && (bRec.component == -1 || bRec.component == 1);

	  // quick bail out
	  if((!hasDiffuse && !hasSpecular) || Frame::cosTheta(bRec.wo) <= 0.0f)
	    return Spectrum(0.0f);

	  // eval
	  double r,g,b;
	  double twi = acos(bRec.wi.z);
	  double two = acos(bRec.wo.z);
	  double pwi = atan2(bRec.wi.y, bRec.wi.x);
	  double pwo = atan2(bRec.wo.y, bRec.wo.x);

	  lookup_brdf_val(m_data, twi, pwi, two, pwo, r, g, b);

	  Spectrum result(0.0f);
	  result.fromLinearRGB(r, g, b);

	  // subtract diffuse if requested
	  if(!hasDiffuse || !hasSpecular)
	  {
	    BSDFSamplingRecord tRec = bRec;

	    tRec.typeMask |= EDiffuseReflection;
	    tRec.typeMask &= ~EGlossyReflection;
	    Spectrum d = m_importance->eval(tRec, measure);

	    // compute specular and diffuse component
	    Spectrum s(0.0f);
	    for(int i = 0; i < Spectrum::dim; i++)
	    {
	      Float diff = result[i] - d[i];
	      if(diff > 0.0f)
		s[i] = diff;
	      else // s[i] = 0.0f
		d[i] = result[i];
	    }

	    // copy
	    if(hasDiffuse) result = d;
	    else result = s;
	  }
	  
	  // Done
	  return result * Frame::cosTheta(bRec.wo);	  
	}

	Float pdf(const BSDFSamplingRecord &bRec, EMeasure measure) const {
	  return m_importance->pdf(bRec, measure);
	}

	Spectrum sample(BSDFSamplingRecord &bRec, Float &pdf, const Point2 &sample) const {
	  m_importance->sample(bRec, pdf, sample);
	  if (pdf == 0 || Frame::cosTheta(bRec.wo) <= 0)
	    return Spectrum(0.0f);
	  else
	    return eval(bRec, ESolidAngle) / pdf;
	}


	Spectrum sample(BSDFSamplingRecord &bRec, const Point2 &sample) const {
	  Float pdf;
	  return MERL::sample(bRec, pdf, sample);
	}

	Float getRoughness(const Intersection &its, int component) const {
	  return m_importance->getRoughness(its, component);
	}

	void addChild(const std::string &name, ConfigurableObject *child) {
		if (child->getClass()->derivesFrom(MTS_CLASS(BSDF))) {
			m_importance = static_cast<BSDF *>(child);
			m_importance->incRef();
		} else {
			BSDF::addChild(name, child);
		}
	}

	std::string toString() const {
	  std::ostringstream oss;
	  oss << "MERL[" << endl;
	  oss << "id = \"" << getID() << "\"," << endl;
	  oss << "binary = \"" << indent(m_name) << "\"," << endl;
	  if(m_importance != NULL) 
	    oss << "importance = " << indent(m_importance->toString()) << endl;
	  else
	    oss << "importance = <not yet initialized>" << endl;
	  oss << "]";
	  return oss.str();
	}

	Shader *createShader(Renderer *renderer) const;

	MTS_DECLARE_CLASS()
private:
	BSDF *  m_importance;
        std::vector<double> m_data;
        std::string m_name;
};

// ================ Hardware shader implementation ================

/* MERL shader-- render as a 'black box' */
class MERLShader : public Shader {
public:
	MERLShader(Renderer *renderer) :
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

Shader *MERL::createShader(Renderer *renderer) const {
	return new MERLShader(renderer);
}

MTS_IMPLEMENT_CLASS(MERLShader, false, Shader)
MTS_IMPLEMENT_CLASS_S(MERL, false, BSDF)
MTS_EXPORT_PLUGIN(MERL, "MERL BSDF");
MTS_NAMESPACE_END
