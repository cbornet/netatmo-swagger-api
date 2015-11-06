/*
 * SamiNADeviceListBody.h
 * 
 * 
 */

#ifndef SamiNADeviceListBody_H_
#define SamiNADeviceListBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNAModule.h"
#include "SamiNADevice.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNADeviceListBody: public SamiObject {
public:
    SamiNADeviceListBody();
    SamiNADeviceListBody(String* json);
    virtual ~SamiNADeviceListBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNADeviceListBody* fromJson(String* obj);

    
    IList* getPDevices();
    void setPDevices(IList* pDevices);
    
    IList* getPModules();
    void setPModules(IList* pModules);
    

private:
    IList* pDevices;
    IList* pModules;
    
};

} /* namespace Swagger */

#endif /* SamiNADeviceListBody_H_ */
