#include "SWGOauthApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGOauthApi::SWGOauthApi() {}

SWGOauthApi::~SWGOauthApi() {}

SWGOauthApi::SWGOauthApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGOauthApi::getToken(QString* grantType, QString* clientId, QString* clientSecret, QString* scope, QString* username, QString* password, QString* code, QString* redirectUri, QString* refreshToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/oauth2/token");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    if(grantType != NULL) {
        input.add_var("grantType", *grantType);
    }
    
    if(clientId != NULL) {
        input.add_var("clientId", *clientId);
    }
    
    if(clientSecret != NULL) {
        input.add_var("clientSecret", *clientSecret);
    }
    
    if(scope != NULL) {
        input.add_var("scope", *scope);
    }
    
    if(username != NULL) {
        input.add_var("username", *username);
    }
    
    if(password != NULL) {
        input.add_var("password", *password);
    }
    
    if(code != NULL) {
        input.add_var("code", *code);
    }
    
    if(redirectUri != NULL) {
        input.add_var("redirectUri", *redirectUri);
    }
    
    if(refreshToken != NULL) {
        input.add_var("refreshToken", *refreshToken);
    }
    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGOauthApi::getTokenCallback);

    worker->execute(&input);
}

void
SWGOauthApi::getTokenCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGAccessToken* output = static_cast<SWGAccessToken*>(create(json, QString("SWGAccessToken")));
    
    
    

    worker->deleteLater();

    emit getTokenSignal(output);
    
}
} /* namespace Swagger */
