#ifndef SamiPartnerApi_H_
#define SamiPartnerApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
using Tizen::Base::Boolean;
#include "SamiNADeviceListResponse.h"
using Tizen::Base::Integer;
#include "SamiNAMeasureResponse.h"
#include "SamiNAThermStateResponse.h"
#include "SamiNAPartnerDevicesResponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPartnerApi {
public:
  SamiPartnerApi();
  virtual ~SamiPartnerApi();

  
  SamiNADeviceListResponse* 
  devicelistWithCompletion(String* accessToken, String* appType, String* deviceId, Boolean* getFavorites, void (* handler)(SamiNADeviceListResponse*, SamiError*));
  
  SamiNAMeasureResponse* 
  getmeasureWithCompletion(String* accessToken, String* deviceId, String* scale, IList* type, String* moduleId, Integer* dateBegin, Integer* dateEnd, Integer* limit, Boolean* optimize, Boolean* realTime, void (* handler)(SamiNAMeasureResponse*, SamiError*));
  
  SamiNAThermStateResponse* 
  getthermstateWithCompletion(String* accessToken, String* deviceId, String* moduleId, void (* handler)(SamiNAThermStateResponse*, SamiError*));
  
  SamiNAPartnerDevicesResponse* 
  partnerdevicesWithCompletion(String* accessToken, void (* handler)(SamiNAPartnerDevicesResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://api.netatmo.net/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPartnerApi_H_ */
