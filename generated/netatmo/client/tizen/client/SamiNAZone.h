/*
 * SamiNAZone.h
 * 
 * 
 */

#ifndef SamiNAZone_H_
#define SamiNAZone_H_

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

class SamiNAZone: public SamiObject {
public:
    SamiNAZone();
    SamiNAZone(String* json);
    virtual ~SamiNAZone();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAZone* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    Integer* getPType();
    void setPType(Integer* pType);
    
    String* getPName();
    void setPName(String* pName);
    
    Float* getPTemp();
    void setPTemp(Float* pTemp);
    

private:
    Integer* pId;
    Integer* pType;
    String* pName;
    Float* pTemp;
    
};

} /* namespace Swagger */

#endif /* SamiNAZone_H_ */
