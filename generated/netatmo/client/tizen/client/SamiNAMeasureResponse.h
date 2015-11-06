/*
 * SamiNAMeasureResponse.h
 * 
 * 
 */

#ifndef SamiNAMeasureResponse_H_
#define SamiNAMeasureResponse_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNAMeasureBodyElem.h"
#include "SamiNAResponse.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAMeasureResponse: public SamiObject {
public:
    SamiNAMeasureResponse();
    SamiNAMeasureResponse(String* json);
    virtual ~SamiNAMeasureResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAMeasureResponse* fromJson(String* obj);

    
    IList* getPBody();
    void setPBody(IList* pBody);
    

private:
    IList* pBody;
    
};

} /* namespace Swagger */

#endif /* SamiNAMeasureResponse_H_ */
