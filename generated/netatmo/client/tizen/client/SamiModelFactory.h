#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiAccessToken.h"
#include "SamiNAResponse.h"
#include "SamiNAOkResponse.h"
#include "SamiNAUserResponse.h"
#include "SamiNADeviceListResponse.h"
#include "SamiNAMeasureResponse.h"
#include "SamiNAThermStateResponse.h"
#include "SamiNANewScheduleResponse.h"
#include "SamiNAPartnerDevicesResponse.h"
#include "SamiNAUserBody.h"
#include "SamiNADeviceListBody.h"
#include "SamiNAMeasureBodyElem.h"
#include "SamiNAThermStateBody.h"
#include "SamiNANewScheduleBody.h"
#include "SamiNAUserAdministrative.h"
#include "SamiNADate.h"
#include "SamiNADevice.h"
#include "SamiNAModule.h"
#include "SamiNAHouseModel.h"
#include "SamiNAHouseModelCa.h"
#include "SamiNAStation.h"
#include "SamiNALinkStation.h"
#include "SamiNAPidAlgo.h"
#include "SamiNAPlace.h"
#include "SamiNASetpoint.h"
#include "SamiNAThermProgram.h"
#include "SamiNAZone.h"
#include "SamiNATimeTableItem.h"
#include "SamiNAHeatingSystem.h"
#include "SamiNASimpleAlgo.h"
#include "SamiNADashboardData.h"
#include "SamiNAThermMeasure.h"
#include "SamiNAObject.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiAccessToken", true)) {
      return new SamiAccessToken();
    }
    if(type.Equals(L"SamiNAResponse", true)) {
      return new SamiNAResponse();
    }
    if(type.Equals(L"SamiNAOkResponse", true)) {
      return new SamiNAOkResponse();
    }
    if(type.Equals(L"SamiNAUserResponse", true)) {
      return new SamiNAUserResponse();
    }
    if(type.Equals(L"SamiNADeviceListResponse", true)) {
      return new SamiNADeviceListResponse();
    }
    if(type.Equals(L"SamiNAMeasureResponse", true)) {
      return new SamiNAMeasureResponse();
    }
    if(type.Equals(L"SamiNAThermStateResponse", true)) {
      return new SamiNAThermStateResponse();
    }
    if(type.Equals(L"SamiNANewScheduleResponse", true)) {
      return new SamiNANewScheduleResponse();
    }
    if(type.Equals(L"SamiNAPartnerDevicesResponse", true)) {
      return new SamiNAPartnerDevicesResponse();
    }
    if(type.Equals(L"SamiNAUserBody", true)) {
      return new SamiNAUserBody();
    }
    if(type.Equals(L"SamiNADeviceListBody", true)) {
      return new SamiNADeviceListBody();
    }
    if(type.Equals(L"SamiNAMeasureBodyElem", true)) {
      return new SamiNAMeasureBodyElem();
    }
    if(type.Equals(L"SamiNAThermStateBody", true)) {
      return new SamiNAThermStateBody();
    }
    if(type.Equals(L"SamiNANewScheduleBody", true)) {
      return new SamiNANewScheduleBody();
    }
    if(type.Equals(L"SamiNAUserAdministrative", true)) {
      return new SamiNAUserAdministrative();
    }
    if(type.Equals(L"SamiNADate", true)) {
      return new SamiNADate();
    }
    if(type.Equals(L"SamiNADevice", true)) {
      return new SamiNADevice();
    }
    if(type.Equals(L"SamiNAModule", true)) {
      return new SamiNAModule();
    }
    if(type.Equals(L"SamiNAHouseModel", true)) {
      return new SamiNAHouseModel();
    }
    if(type.Equals(L"SamiNAHouseModelCa", true)) {
      return new SamiNAHouseModelCa();
    }
    if(type.Equals(L"SamiNAStation", true)) {
      return new SamiNAStation();
    }
    if(type.Equals(L"SamiNALinkStation", true)) {
      return new SamiNALinkStation();
    }
    if(type.Equals(L"SamiNAPidAlgo", true)) {
      return new SamiNAPidAlgo();
    }
    if(type.Equals(L"SamiNAPlace", true)) {
      return new SamiNAPlace();
    }
    if(type.Equals(L"SamiNASetpoint", true)) {
      return new SamiNASetpoint();
    }
    if(type.Equals(L"SamiNAThermProgram", true)) {
      return new SamiNAThermProgram();
    }
    if(type.Equals(L"SamiNAZone", true)) {
      return new SamiNAZone();
    }
    if(type.Equals(L"SamiNATimeTableItem", true)) {
      return new SamiNATimeTableItem();
    }
    if(type.Equals(L"SamiNAHeatingSystem", true)) {
      return new SamiNAHeatingSystem();
    }
    if(type.Equals(L"SamiNASimpleAlgo", true)) {
      return new SamiNASimpleAlgo();
    }
    if(type.Equals(L"SamiNADashboardData", true)) {
      return new SamiNADashboardData();
    }
    if(type.Equals(L"SamiNAThermMeasure", true)) {
      return new SamiNAThermMeasure();
    }
    if(type.Equals(L"SamiNAObject", true)) {
      return new SamiNAObject();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
