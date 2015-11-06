#ifndef _SWG_SWGPrivateApi_H_
#define _SWG_SWGPrivateApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNANewScheduleResponse.h"
#include "SWGNAThermProgram.h"
#include "SWGNADeviceListResponse.h"
#include "SWGNAMeasureResponse.h"
#include "SWGNAThermStateResponse.h"
#include "SWGNAUserResponse.h"
#include "SWGNAOkResponse.h"

#include <QObject>

namespace Swagger {

class SWGPrivateApi: public QObject {
    Q_OBJECT

public:
    SWGPrivateApi();
    SWGPrivateApi(QString host, QString basePath);
    ~SWGPrivateApi();

    QString host;
    QString basePath;

    void createnewschedule(QString* deviceId, QString* moduleId, SWGNAThermProgram thermProgram);
    void devicelist(QString* appType, QString* deviceId, bool getFavorites);
    void getmeasure(QString* deviceId, QString* scale, QString* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime);
    void getthermstate(QString* deviceId, QString* moduleId);
    void getuser();
    void setthermpoint(QString* deviceId, QString* moduleId, QString* setpointMode, qint32 setpointEndtime, float* setpointTemp);
    void switchschedule(QString* deviceId, QString* moduleId, QString* scheduleId);
    void syncschedule(QString* deviceId, QString* moduleId, SWGNAThermProgram thermProgram);
    
private:
    void createnewscheduleCallback (HttpRequestWorker * worker);
    void devicelistCallback (HttpRequestWorker * worker);
    void getmeasureCallback (HttpRequestWorker * worker);
    void getthermstateCallback (HttpRequestWorker * worker);
    void getuserCallback (HttpRequestWorker * worker);
    void setthermpointCallback (HttpRequestWorker * worker);
    void switchscheduleCallback (HttpRequestWorker * worker);
    void syncscheduleCallback (HttpRequestWorker * worker);
    
signals:
    void createnewscheduleSignal(SWGNANewScheduleResponse* summary);
    void devicelistSignal(SWGNADeviceListResponse* summary);
    void getmeasureSignal(SWGNAMeasureResponse* summary);
    void getthermstateSignal(SWGNAThermStateResponse* summary);
    void getuserSignal(SWGNAUserResponse* summary);
    void setthermpointSignal(SWGNAOkResponse* summary);
    void switchscheduleSignal(SWGNAOkResponse* summary);
    void syncscheduleSignal(SWGNAOkResponse* summary);
    
};
}
#endif