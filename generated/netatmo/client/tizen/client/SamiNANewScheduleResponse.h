/*
 * SamiNANewScheduleResponse.h
 * 
 * 
 */

#ifndef SamiNANewScheduleResponse_H_
#define SamiNANewScheduleResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNANewScheduleBody.h"
#include "SamiNAResponse.h"


namespace Swagger {

class SamiNANewScheduleResponse: public SamiObject {
public:
    SamiNANewScheduleResponse();
    SamiNANewScheduleResponse(String* json);
    virtual ~SamiNANewScheduleResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNANewScheduleResponse* fromJson(String* obj);

    
    SamiNANewScheduleBody* getPBody();
    void setPBody(SamiNANewScheduleBody* pBody);
    

private:
    SamiNANewScheduleBody* pBody;
    
};

} /* namespace Swagger */

#endif /* SamiNANewScheduleResponse_H_ */
