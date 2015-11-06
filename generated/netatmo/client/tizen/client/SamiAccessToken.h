/*
 * SamiAccessToken.h
 * 
 * 
 */

#ifndef SamiAccessToken_H_
#define SamiAccessToken_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiAccessToken: public SamiObject {
public:
    SamiAccessToken();
    SamiAccessToken(String* json);
    virtual ~SamiAccessToken();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAccessToken* fromJson(String* obj);

    
    String* getPAccessToken();
    void setPAccessToken(String* pAccess_token);
    
    String* getPRefreshToken();
    void setPRefreshToken(String* pRefresh_token);
    
    Integer* getPExpireIn();
    void setPExpireIn(Integer* pExpire_in);
    
    Integer* getPExpiresIn();
    void setPExpiresIn(Integer* pExpires_in);
    
    IList* getPScope();
    void setPScope(IList* pScope);
    

private:
    String* pAccess_token;
    String* pRefresh_token;
    Integer* pExpire_in;
    Integer* pExpires_in;
    IList* pScope;
    
};

} /* namespace Swagger */

#endif /* SamiAccessToken_H_ */
