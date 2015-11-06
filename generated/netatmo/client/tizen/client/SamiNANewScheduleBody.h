/*
 * SamiNANewScheduleBody.h
 * 
 * 
 */

#ifndef SamiNANewScheduleBody_H_
#define SamiNANewScheduleBody_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiNANewScheduleBody: public SamiObject {
public:
    SamiNANewScheduleBody();
    SamiNANewScheduleBody(String* json);
    virtual ~SamiNANewScheduleBody();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNANewScheduleBody* fromJson(String* obj);

    
    String* getPScheduleId();
    void setPScheduleId(String* pSchedule_id);
    

private:
    String* pSchedule_id;
    
};

} /* namespace Swagger */

#endif /* SamiNANewScheduleBody_H_ */
