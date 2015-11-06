/*
 * SamiNAObject.h
 * 
 * 
 */

#ifndef SamiNAObject_H_
#define SamiNAObject_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiNAObject: public SamiObject {
public:
    SamiNAObject();
    SamiNAObject(String* json);
    virtual ~SamiNAObject();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAObject* fromJson(String* obj);

    
    String* getPId();
    void setPId(String* pId);
    

private:
    String* pId;
    
};

} /* namespace Swagger */

#endif /* SamiNAObject_H_ */
