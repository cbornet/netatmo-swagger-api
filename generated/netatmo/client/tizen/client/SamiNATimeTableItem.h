/*
 * SamiNATimeTableItem.h
 * 
 * 
 */

#ifndef SamiNATimeTableItem_H_
#define SamiNATimeTableItem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiNATimeTableItem: public SamiObject {
public:
    SamiNATimeTableItem();
    SamiNATimeTableItem(String* json);
    virtual ~SamiNATimeTableItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNATimeTableItem* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    Integer* getPMOffset();
    void setPMOffset(Integer* pM_offset);
    

private:
    Integer* pId;
    Integer* pM_offset;
    
};

} /* namespace Swagger */

#endif /* SamiNATimeTableItem_H_ */
