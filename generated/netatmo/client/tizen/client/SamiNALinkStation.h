/*
 * SamiNALinkStation.h
 * 
 * 
 */

#ifndef SamiNALinkStation_H_
#define SamiNALinkStation_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Float;
using Tizen::Base::String;


namespace Swagger {

class SamiNALinkStation: public SamiObject {
public:
    SamiNALinkStation();
    SamiNALinkStation(String* json);
    virtual ~SamiNALinkStation();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNALinkStation* fromJson(String* obj);

    
    String* getPMac();
    void setPMac(String* pMac);
    
    String* getPExt();
    void setPExt(String* pExt);
    
    Float* getPTemperature();
    void setPTemperature(Float* pTemperature);
    

private:
    String* pMac;
    String* pExt;
    Float* pTemperature;
    
};

} /* namespace Swagger */

#endif /* SamiNALinkStation_H_ */
