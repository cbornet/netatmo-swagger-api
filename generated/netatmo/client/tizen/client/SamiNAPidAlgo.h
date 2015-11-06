/*
 * SamiNAPidAlgo.h
 * 
 * 
 */

#ifndef SamiNAPidAlgo_H_
#define SamiNAPidAlgo_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiNAPidAlgo: public SamiObject {
public:
    SamiNAPidAlgo();
    SamiNAPidAlgo(String* json);
    virtual ~SamiNAPidAlgo();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAPidAlgo* fromJson(String* obj);

    
    Integer* getPGain();
    void setPGain(Integer* pGain);
    
    Integer* getPPeriod();
    void setPPeriod(Integer* pPeriod);
    
    Integer* getPTd();
    void setPTd(Integer* pTd);
    
    Integer* getPTi();
    void setPTi(Integer* pTi);
    

private:
    Integer* pGain;
    Integer* pPeriod;
    Integer* pTd;
    Integer* pTi;
    
};

} /* namespace Swagger */

#endif /* SamiNAPidAlgo_H_ */
