/*
 * SamiNAUserResponse.h
 * 
 * 
 */

#ifndef SamiNAUserResponse_H_
#define SamiNAUserResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNAUserBody.h"
#include "SamiNAResponse.h"


namespace Swagger {

class SamiNAUserResponse: public SamiObject {
public:
    SamiNAUserResponse();
    SamiNAUserResponse(String* json);
    virtual ~SamiNAUserResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAUserResponse* fromJson(String* obj);

    
    SamiNAUserBody* getPBody();
    void setPBody(SamiNAUserBody* pBody);
    

private:
    SamiNAUserBody* pBody;
    
};

} /* namespace Swagger */

#endif /* SamiNAUserResponse_H_ */
