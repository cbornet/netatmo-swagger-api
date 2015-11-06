/*
 * SamiNAUserAdministrative.h
 * 
 * 
 */

#ifndef SamiNAUserAdministrative_H_
#define SamiNAUserAdministrative_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiNAUserAdministrative: public SamiObject {
public:
    SamiNAUserAdministrative();
    SamiNAUserAdministrative(String* json);
    virtual ~SamiNAUserAdministrative();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAUserAdministrative* fromJson(String* obj);

    
    String* getPCountry();
    void setPCountry(String* pCountry);
    
    String* getPLang();
    void setPLang(String* pLang);
    
    String* getPRegLocale();
    void setPRegLocale(String* pReg_locale);
    
    String* getPUnit();
    void setPUnit(String* pUnit);
    
    String* getPWindunit();
    void setPWindunit(String* pWindunit);
    
    String* getPPressureunit();
    void setPPressureunit(String* pPressureunit);
    
    String* getPFeelLikeAlgo();
    void setPFeelLikeAlgo(String* pFeel_like_algo);
    

private:
    String* pCountry;
    String* pLang;
    String* pReg_locale;
    String* pUnit;
    String* pWindunit;
    String* pPressureunit;
    String* pFeel_like_algo;
    
};

} /* namespace Swagger */

#endif /* SamiNAUserAdministrative_H_ */
