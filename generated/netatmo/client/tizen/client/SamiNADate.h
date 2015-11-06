/*
 * SamiNADate.h
 * 
 * 
 */

#ifndef SamiNADate_H_
#define SamiNADate_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiNADate: public SamiObject {
public:
    SamiNADate();
    SamiNADate(String* json);
    virtual ~SamiNADate();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNADate* fromJson(String* obj);

    
    Integer* getPSec();
    void setPSec(Integer* pSec);
    
    Integer* getPUsec();
    void setPUsec(Integer* pUsec);
    

private:
    Integer* pSec;
    Integer* pUsec;
    
};

} /* namespace Swagger */

#endif /* SamiNADate_H_ */
