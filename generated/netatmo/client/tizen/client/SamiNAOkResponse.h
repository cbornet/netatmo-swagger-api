/*
 * SamiNAOkResponse.h
 * 
 * 
 */

#ifndef SamiNAOkResponse_H_
#define SamiNAOkResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
#include "SamiNAResponse.h"


namespace Swagger {

class SamiNAOkResponse: public SamiObject {
public:
    SamiNAOkResponse();
    SamiNAOkResponse(String* json);
    virtual ~SamiNAOkResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAOkResponse* fromJson(String* obj);

    
    String* getPBody();
    void setPBody(String* pBody);
    

private:
    String* pBody;
    
};

} /* namespace Swagger */

#endif /* SamiNAOkResponse_H_ */
