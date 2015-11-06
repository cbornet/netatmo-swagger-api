#ifndef SamiOauthApi_H_
#define SamiOauthApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiAccessToken.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiOauthApi {
public:
  SamiOauthApi();
  virtual ~SamiOauthApi();

  
  SamiAccessToken* 
  getTokenWithCompletion(String* grantType, String* clientId, String* clientSecret, String* scope, String* username, String* password, String* code, String* redirectUri, String* refreshToken, void (* handler)(SamiAccessToken*, SamiError*));
  
  static String getBasePath() {
    return L"https://api.netatmo.net/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOauthApi_H_ */
