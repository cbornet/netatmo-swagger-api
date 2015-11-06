/*
 * SamiNASimpleAlgo.h
 * 
 * 
 */

#ifndef SamiNASimpleAlgo_H_
#define SamiNASimpleAlgo_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiNASimpleAlgo: public SamiObject {
public:
    SamiNASimpleAlgo();
    SamiNASimpleAlgo(String* json);
    virtual ~SamiNASimpleAlgo();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNASimpleAlgo* fromJson(String* obj);

    
    Integer* getPHighDeadband();
    void setPHighDeadband(Integer* pHigh_deadband);
    

private:
    Integer* pHigh_deadband;
    
};

} /* namespace Swagger */

#endif /* SamiNASimpleAlgo_H_ */
