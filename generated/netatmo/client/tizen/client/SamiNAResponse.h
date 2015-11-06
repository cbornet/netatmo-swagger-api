/*
 * SamiNAResponse.h
 * 
 * 
 */

#ifndef SamiNAResponse_H_
#define SamiNAResponse_H_

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

class SamiNAResponse: public SamiObject {
public:
    SamiNAResponse();
    SamiNAResponse(String* json);
    virtual ~SamiNAResponse();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAResponse* fromJson(String* obj);

    
    String* getPStatus();
    void setPStatus(String* pStatus);
    
    Double* getPTimeExec();
    void setPTimeExec(Double* pTime_exec);
    
    Integer* getPTimeServer();
    void setPTimeServer(Integer* pTime_server);
    

private:
    String* pStatus;
    Double* pTime_exec;
    Integer* pTime_server;
    
};

} /* namespace Swagger */

#endif /* SamiNAResponse_H_ */
