/*
 * SamiNAHouseModelCa.h
 * 
 * 
 */

#ifndef SamiNAHouseModelCa_H_
#define SamiNAHouseModelCa_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;
using Tizen::Base::Double;


namespace Swagger {

class SamiNAHouseModelCa: public SamiObject {
public:
    SamiNAHouseModelCa();
    SamiNAHouseModelCa(String* json);
    virtual ~SamiNAHouseModelCa();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAHouseModelCa* fromJson(String* obj);

    
    Double* getPTe();
    void setPTe(Double* pTe);
    
    Integer* getPTi();
    void setPTi(Integer* pTi);
    
    String* getPSo();
    void setPSo(String* pSo);
    

private:
    Double* pTe;
    Integer* pTi;
    String* pSo;
    
};

} /* namespace Swagger */

#endif /* SamiNAHouseModelCa_H_ */
