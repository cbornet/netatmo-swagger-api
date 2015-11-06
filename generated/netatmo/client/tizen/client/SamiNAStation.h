/*
 * SamiNAStation.h
 * 
 * 
 */

#ifndef SamiNAStation_H_
#define SamiNAStation_H_

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

class SamiNAStation: public SamiObject {
public:
    SamiNAStation();
    SamiNAStation(String* json);
    virtual ~SamiNAStation();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAStation* fromJson(String* obj);

    
    Integer* getPLagDown();
    void setPLagDown(Integer* pLag_down);
    
    Integer* getPLagUp();
    void setPLagUp(Integer* pLag_up);
    
    Float* getPOffOvershoot();
    void setPOffOvershoot(Float* pOff_overshoot);
    
    Float* getPOnOvershoot();
    void setPOnOvershoot(Float* pOn_overshoot);
    
    Integer* getPPk();
    void setPPk(Integer* pPk);
    
    Integer* getPTau();
    void setPTau(Integer* pTau);
    

private:
    Integer* pLag_down;
    Integer* pLag_up;
    Float* pOff_overshoot;
    Float* pOn_overshoot;
    Integer* pPk;
    Integer* pTau;
    
};

} /* namespace Swagger */

#endif /* SamiNAStation_H_ */
