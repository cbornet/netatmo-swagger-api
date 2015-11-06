#ifndef _SWG_SWGOauthApi_H_
#define _SWG_SWGOauthApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGAccessToken.h"

#include <QObject>

namespace Swagger {

class SWGOauthApi: public QObject {
    Q_OBJECT

public:
    SWGOauthApi();
    SWGOauthApi(QString host, QString basePath);
    ~SWGOauthApi();

    QString host;
    QString basePath;

    void getToken(QString* grantType, QString* clientId, QString* clientSecret, QString* scope, QString* username, QString* password, QString* code, QString* redirectUri, QString* refreshToken);
    
private:
    void getTokenCallback (HttpRequestWorker * worker);
    
signals:
    void getTokenSignal(SWGAccessToken* summary);
    
};
}
#endif