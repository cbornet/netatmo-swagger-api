#ifndef SamiStationApi_H_
#define SamiStationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
using Tizen::Base::Boolean;
#include "SamiNADeviceListResponse.h"
using Tizen::Base::Integer;
#include "SamiNAMeasureResponse.h"
#include "SamiNAUserResponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStationApi {
public:
  SamiStationApi();
  virtual ~SamiStationApi();

  
  SamiNADeviceListResponse* 
  devicelistWithCompletion(String* accessToken, String* appType, String* deviceId, Boolean* getFavorites, void (* handler)(SamiNADeviceListResponse*, SamiError*));
  
  SamiNAMeasureResponse* 
  getmeasureWithCompletion(String* accessToken, String* deviceId, String* scale, IList* type, String* moduleId, Integer* dateBegin, Integer* dateEnd, Integer* limit, Boolean* optimize, Boolean* realTime, void (* handler)(SamiNAMeasureResponse*, SamiError*));
  
  SamiNAUserResponse* 
  getuserWithCompletion(String* accessToken, void (* handler)(SamiNAUserResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://api.netatmo.net/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStationApi_H_ */
