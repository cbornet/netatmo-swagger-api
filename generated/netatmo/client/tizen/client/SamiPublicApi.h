#ifndef SamiPublicApi_H_
#define SamiPublicApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiNAMeasureResponse.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPublicApi {
public:
  SamiPublicApi();
  virtual ~SamiPublicApi();

  
  SamiNAMeasureResponse* 
  getmeasureWithCompletion(String* accessToken, String* deviceId, String* scale, IList* type, String* moduleId, Integer* dateBegin, Integer* dateEnd, Integer* limit, Boolean* optimize, Boolean* realTime, void (* handler)(SamiNAMeasureResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://api.netatmo.net/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPublicApi_H_ */
