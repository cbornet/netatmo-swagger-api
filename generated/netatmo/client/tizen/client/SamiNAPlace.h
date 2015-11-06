/*
 * SamiNAPlace.h
 * 
 * 
 */

#ifndef SamiNAPlace_H_
#define SamiNAPlace_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Float;
using Tizen::Base::String;
using Tizen::Base::Boolean;
using Tizen::Base::Double;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAPlace: public SamiObject {
public:
    SamiNAPlace();
    SamiNAPlace(String* json);
    virtual ~SamiNAPlace();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAPlace* fromJson(String* obj);

    
    String* getPCity();
    void setPCity(String* pCity);
    
    Float* getPAltitude();
    void setPAltitude(Float* pAltitude);
    
    String* getPCountry();
    void setPCountry(String* pCountry);
    
    Boolean* getPFromIp();
    void setPFromIp(Boolean* pFrom_ip);
    
    Boolean* getPImproveLocProposed();
    void setPImproveLocProposed(Boolean* pImproveLocProposed);
    
    IList* getPLocation();
    void setPLocation(IList* pLocation);
    
    String* getPTimezone();
    void setPTimezone(String* pTimezone);
    
    Boolean* getPTrustLocation();
    void setPTrustLocation(Boolean* pTrust_location);
    

private:
    String* pCity;
    Float* pAltitude;
    String* pCountry;
    Boolean* pFrom_ip;
    Boolean* pImproveLocProposed;
    IList* pLocation;
    String* pTimezone;
    Boolean* pTrust_location;
    
};

} /* namespace Swagger */

#endif /* SamiNAPlace_H_ */
