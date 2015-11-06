/*
 * SamiNAThermStateResponse.h
 * 
 * 
 */

#ifndef SamiNAThermStateResponse_H_
#define SamiNAThermStateResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNAThermStateBody.h"
#include "SamiNAResponse.h"


namespace Swagger {

class SamiNAThermStateResponse: public SamiObject {
public:
    SamiNAThermStateResponse();
    SamiNAThermStateResponse(String* json);
    virtual ~SamiNAThermStateResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAThermStateResponse* fromJson(String* obj);

    
    SamiNAThermStateBody* getPBody();
    void setPBody(SamiNAThermStateBody* pBody);
    

private:
    SamiNAThermStateBody* pBody;
    
};

} /* namespace Swagger */

#endif /* SamiNAThermStateResponse_H_ */
