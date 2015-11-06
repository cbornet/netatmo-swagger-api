#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGAccessToken.h"
#include "SWGNAResponse.h"
#include "SWGNAOkResponse.h"
#include "SWGNAUserResponse.h"
#include "SWGNADeviceListResponse.h"
#include "SWGNAMeasureResponse.h"
#include "SWGNAThermStateResponse.h"
#include "SWGNANewScheduleResponse.h"
#include "SWGNAPartnerDevicesResponse.h"
#include "SWGNAUserBody.h"
#include "SWGNADeviceListBody.h"
#include "SWGNAMeasureBodyElem.h"
#include "SWGNAThermStateBody.h"
#include "SWGNANewScheduleBody.h"
#include "SWGNAUserAdministrative.h"
#include "SWGNADate.h"
#include "SWGNADevice.h"
#include "SWGNAModule.h"
#include "SWGNAHouseModel.h"
#include "SWGNAHouseModelCa.h"
#include "SWGNAStation.h"
#include "SWGNALinkStation.h"
#include "SWGNAPidAlgo.h"
#include "SWGNAPlace.h"
#include "SWGNASetpoint.h"
#include "SWGNAThermProgram.h"
#include "SWGNAZone.h"
#include "SWGNATimeTableItem.h"
#include "SWGNAHeatingSystem.h"
#include "SWGNASimpleAlgo.h"
#include "SWGNADashboardData.h"
#include "SWGNAThermMeasure.h"
#include "SWGNAObject.h"

namespace Swagger {
  inline void* create(QString type) {
    if(QString("SWGAccessToken").compare(type) == 0) {
      return new SWGAccessToken();
    }
    if(QString("SWGNAResponse").compare(type) == 0) {
      return new SWGNAResponse();
    }
    if(QString("SWGNAOkResponse").compare(type) == 0) {
      return new SWGNAOkResponse();
    }
    if(QString("SWGNAUserResponse").compare(type) == 0) {
      return new SWGNAUserResponse();
    }
    if(QString("SWGNADeviceListResponse").compare(type) == 0) {
      return new SWGNADeviceListResponse();
    }
    if(QString("SWGNAMeasureResponse").compare(type) == 0) {
      return new SWGNAMeasureResponse();
    }
    if(QString("SWGNAThermStateResponse").compare(type) == 0) {
      return new SWGNAThermStateResponse();
    }
    if(QString("SWGNANewScheduleResponse").compare(type) == 0) {
      return new SWGNANewScheduleResponse();
    }
    if(QString("SWGNAPartnerDevicesResponse").compare(type) == 0) {
      return new SWGNAPartnerDevicesResponse();
    }
    if(QString("SWGNAUserBody").compare(type) == 0) {
      return new SWGNAUserBody();
    }
    if(QString("SWGNADeviceListBody").compare(type) == 0) {
      return new SWGNADeviceListBody();
    }
    if(QString("SWGNAMeasureBodyElem").compare(type) == 0) {
      return new SWGNAMeasureBodyElem();
    }
    if(QString("SWGNAThermStateBody").compare(type) == 0) {
      return new SWGNAThermStateBody();
    }
    if(QString("SWGNANewScheduleBody").compare(type) == 0) {
      return new SWGNANewScheduleBody();
    }
    if(QString("SWGNAUserAdministrative").compare(type) == 0) {
      return new SWGNAUserAdministrative();
    }
    if(QString("SWGNADate").compare(type) == 0) {
      return new SWGNADate();
    }
    if(QString("SWGNADevice").compare(type) == 0) {
      return new SWGNADevice();
    }
    if(QString("SWGNAModule").compare(type) == 0) {
      return new SWGNAModule();
    }
    if(QString("SWGNAHouseModel").compare(type) == 0) {
      return new SWGNAHouseModel();
    }
    if(QString("SWGNAHouseModelCa").compare(type) == 0) {
      return new SWGNAHouseModelCa();
    }
    if(QString("SWGNAStation").compare(type) == 0) {
      return new SWGNAStation();
    }
    if(QString("SWGNALinkStation").compare(type) == 0) {
      return new SWGNALinkStation();
    }
    if(QString("SWGNAPidAlgo").compare(type) == 0) {
      return new SWGNAPidAlgo();
    }
    if(QString("SWGNAPlace").compare(type) == 0) {
      return new SWGNAPlace();
    }
    if(QString("SWGNASetpoint").compare(type) == 0) {
      return new SWGNASetpoint();
    }
    if(QString("SWGNAThermProgram").compare(type) == 0) {
      return new SWGNAThermProgram();
    }
    if(QString("SWGNAZone").compare(type) == 0) {
      return new SWGNAZone();
    }
    if(QString("SWGNATimeTableItem").compare(type) == 0) {
      return new SWGNATimeTableItem();
    }
    if(QString("SWGNAHeatingSystem").compare(type) == 0) {
      return new SWGNAHeatingSystem();
    }
    if(QString("SWGNASimpleAlgo").compare(type) == 0) {
      return new SWGNASimpleAlgo();
    }
    if(QString("SWGNADashboardData").compare(type) == 0) {
      return new SWGNADashboardData();
    }
    if(QString("SWGNAThermMeasure").compare(type) == 0) {
      return new SWGNAThermMeasure();
    }
    if(QString("SWGNAObject").compare(type) == 0) {
      return new SWGNAObject();
    }
    
    return NULL;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != NULL) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return NULL;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
