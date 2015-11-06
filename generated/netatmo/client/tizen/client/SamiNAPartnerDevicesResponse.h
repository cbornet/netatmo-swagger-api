/*
 * SamiNAPartnerDevicesResponse.h
 * 
 * 
 */

#ifndef SamiNAPartnerDevicesResponse_H_
#define SamiNAPartnerDevicesResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
#include "SamiNAResponse.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAPartnerDevicesResponse: public SamiObject {
public:
    SamiNAPartnerDevicesResponse();
    SamiNAPartnerDevicesResponse(String* json);
    virtual ~SamiNAPartnerDevicesResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAPartnerDevicesResponse* fromJson(String* obj);

    
    IList* getPBody();
    void setPBody(IList* pBody);
    

private:
    IList* pBody;
    
};

} /* namespace Swagger */

#endif /* SamiNAPartnerDevicesResponse_H_ */
