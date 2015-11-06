/*
 * SamiNADeviceListResponse.h
 * 
 * 
 */

#ifndef SamiNADeviceListResponse_H_
#define SamiNADeviceListResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNADeviceListBody.h"
#include "SamiNAResponse.h"


namespace Swagger {

class SamiNADeviceListResponse: public SamiObject {
public:
    SamiNADeviceListResponse();
    SamiNADeviceListResponse(String* json);
    virtual ~SamiNADeviceListResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNADeviceListResponse* fromJson(String* obj);

    
    SamiNADeviceListBody* getPBody();
    void setPBody(SamiNADeviceListBody* pBody);
    

private:
    SamiNADeviceListBody* pBody;
    
};

} /* namespace Swagger */

#endif /* SamiNADeviceListResponse_H_ */
