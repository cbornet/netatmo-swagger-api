/*
 * SamiNASetpoint.h
 * 
 * 
 */

#ifndef SamiNASetpoint_H_
#define SamiNASetpoint_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Float;
using Tizen::Base::String;


namespace Swagger {

class SamiNASetpoint: public SamiObject {
public:
    SamiNASetpoint();
    SamiNASetpoint(String* json);
    virtual ~SamiNASetpoint();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNASetpoint* fromJson(String* obj);

    
    Float* getPSetpointTemp();
    void setPSetpointTemp(Float* pSetpoint_temp);
    
    Integer* getPSetpointEndtime();
    void setPSetpointEndtime(Integer* pSetpoint_endtime);
    
    String* getPSetpointMode();
    void setPSetpointMode(String* pSetpoint_mode);
    

private:
    Float* pSetpoint_temp;
    Integer* pSetpoint_endtime;
    String* pSetpoint_mode;
    
};

} /* namespace Swagger */

#endif /* SamiNASetpoint_H_ */
