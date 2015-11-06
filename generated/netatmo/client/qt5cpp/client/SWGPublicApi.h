#ifndef _SWG_SWGPublicApi_H_
#define _SWG_SWGPublicApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNAMeasureResponse.h"

#include <QObject>

namespace Swagger {

class SWGPublicApi: public QObject {
    Q_OBJECT

public:
    SWGPublicApi();
    SWGPublicApi(QString host, QString basePath);
    ~SWGPublicApi();

    QString host;
    QString basePath;

    void getmeasure(QString* accessToken, QString* deviceId, QString* scale, QList<QString*>* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime);
    
private:
    void getmeasureCallback (HttpRequestWorker * worker);
    
signals:
    void getmeasureSignal(SWGNAMeasureResponse* summary);
    
};
}
#endif