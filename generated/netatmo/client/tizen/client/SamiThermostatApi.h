#ifndef SamiThermostatApi_H_
#define SamiThermostatApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiNANewScheduleResponse.h"
using Tizen::Base::String;
#include "SamiNAThermProgram.h"
using Tizen::Base::Boolean;
#include "SamiNADeviceListResponse.h"
using Tizen::Base::Integer;
#include "SamiNAMeasureResponse.h"
#include "SamiNAThermStateResponse.h"
#include "SamiNAUserResponse.h"
using Tizen::Base::Float;
#include "SamiNAOkResponse.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiThermostatApi {
public:
  SamiThermostatApi();
  virtual ~SamiThermostatApi();

  
  SamiNANewScheduleResponse* 
  createnewscheduleWithCompletion(String* accessToken, String* deviceId, String* moduleId, SamiNAThermProgram* thermProgram, void (* handler)(SamiNANewScheduleResponse*, SamiError*));
  
  SamiNADeviceListResponse* 
  devicelistWithCompletion(String* accessToken, String* appType, String* deviceId, Boolean* getFavorites, void (* handler)(SamiNADeviceListResponse*, SamiError*));
  
  SamiNAMeasureResponse* 
  getmeasureWithCompletion(String* accessToken, String* deviceId, String* scale, IList* type, String* moduleId, Integer* dateBegin, Integer* dateEnd, Integer* limit, Boolean* optimize, Boolean* realTime, void (* handler)(SamiNAMeasureResponse*, SamiError*));
  
  SamiNAThermStateResponse* 
  getthermstateWithCompletion(String* accessToken, String* deviceId, String* moduleId, void (* handler)(SamiNAThermStateResponse*, SamiError*));
  
  SamiNAUserResponse* 
  getuserWithCompletion(String* accessToken, void (* handler)(SamiNAUserResponse*, SamiError*));
  
  SamiNAOkResponse* 
  setthermpointWithCompletion(String* accessToken, String* deviceId, String* moduleId, String* setpointMode, Integer* setpointEndtime, Float* setpointTemp, void (* handler)(SamiNAOkResponse*, SamiError*));
  
  SamiNAOkResponse* 
  switchscheduleWithCompletion(String* accessToken, String* deviceId, String* moduleId, String* scheduleId, void (* handler)(SamiNAOkResponse*, SamiError*));
  
  SamiNAOkResponse* 
  syncscheduleWithCompletion(String* accessToken, String* deviceId, String* moduleId, SamiNAThermProgram* thermProgram, void (* handler)(SamiNAOkResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://api.netatmo.net/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiThermostatApi_H_ */
