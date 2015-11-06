/*
 * SamiNAMeasureBodyElem.h
 * 
 * 
 */

#ifndef SamiNAMeasureBodyElem_H_
#define SamiNAMeasureBodyElem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAMeasureBodyElem: public SamiObject {
public:
    SamiNAMeasureBodyElem();
    SamiNAMeasureBodyElem(String* json);
    virtual ~SamiNAMeasureBodyElem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAMeasureBodyElem* fromJson(String* obj);

    
    Integer* getPBegTime();
    void setPBegTime(Integer* pBeg_time);
    
    Integer* getPStepTime();
    void setPStepTime(Integer* pStep_time);
    
    IList* getPValue();
    void setPValue(IList* pValue);
    

private:
    Integer* pBeg_time;
    Integer* pStep_time;
    IList* pValue;
    
};

} /* namespace Swagger */

#endif /* SamiNAMeasureBodyElem_H_ */
