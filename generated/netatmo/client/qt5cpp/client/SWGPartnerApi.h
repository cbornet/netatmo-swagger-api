#ifndef _SWG_SWGPartnerApi_H_
#define _SWG_SWGPartnerApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNADeviceListResponse.h"
#include "SWGNAMeasureResponse.h"
#include "SWGNAThermStateResponse.h"
#include "SWGNAPartnerDevicesResponse.h"

#include <QObject>

namespace Swagger {

class SWGPartnerApi: public QObject {
    Q_OBJECT

public:
    SWGPartnerApi();
    SWGPartnerApi(QString host, QString basePath);
    ~SWGPartnerApi();

    QString host;
    QString basePath;

    void devicelist(QString* accessToken, QString* appType, QString* deviceId, bool getFavorites);
    void getmeasure(QString* accessToken, QString* deviceId, QString* scale, QList<QString*>* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime);
    void getthermstate(QString* accessToken, QString* deviceId, QString* moduleId);
    void partnerdevices(QString* accessToken);
    
private:
    void devicelistCallback (HttpRequestWorker * worker);
    void getmeasureCallback (HttpRequestWorker * worker);
    void getthermstateCallback (HttpRequestWorker * worker);
    void partnerdevicesCallback (HttpRequestWorker * worker);
    
signals:
    void devicelistSignal(SWGNADeviceListResponse* summary);
    void getmeasureSignal(SWGNAMeasureResponse* summary);
    void getthermstateSignal(SWGNAThermStateResponse* summary);
    void partnerdevicesSignal(SWGNAPartnerDevicesResponse* summary);
    
};
}
#endif