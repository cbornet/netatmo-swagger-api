/*
 * SamiNAHeatingSystem.h
 * 
 * 
 */

#ifndef SamiNAHeatingSystem_H_
#define SamiNAHeatingSystem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiNAHeatingSystem: public SamiObject {
public:
    SamiNAHeatingSystem();
    SamiNAHeatingSystem(String* json);
    virtual ~SamiNAHeatingSystem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAHeatingSystem* fromJson(String* obj);

    
    String* getPHeatingEnergy();
    void setPHeatingEnergy(String* pHeating_energy);
    
    Boolean* getPHeatingSystemWindowSeen();
    void setPHeatingSystemWindowSeen(Boolean* pHeating_system_window_seen);
    

private:
    String* pHeating_energy;
    Boolean* pHeating_system_window_seen;
    
};

} /* namespace Swagger */

#endif /* SamiNAHeatingSystem_H_ */
