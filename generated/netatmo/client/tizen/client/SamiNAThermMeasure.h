/*
 * SamiNAThermMeasure.h
 * 
 * 
 */

#ifndef SamiNAThermMeasure_H_
#define SamiNAThermMeasure_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Float;


namespace Swagger {

class SamiNAThermMeasure: public SamiObject {
public:
    SamiNAThermMeasure();
    SamiNAThermMeasure(String* json);
    virtual ~SamiNAThermMeasure();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAThermMeasure* fromJson(String* obj);

    
    Integer* getPTime();
    void setPTime(Integer* pTime);
    
    Float* getPTemperature();
    void setPTemperature(Float* pTemperature);
    
    Float* getPSetpointTemp();
    void setPSetpointTemp(Float* pSetpoint_temp);
    

private:
    Integer* pTime;
    Float* pTemperature;
    Float* pSetpoint_temp;
    
};

} /* namespace Swagger */

#endif /* SamiNAThermMeasure_H_ */
