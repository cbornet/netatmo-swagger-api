
#include "SWGAccessToken.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAccessToken::SWGAccessToken(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAccessToken::SWGAccessToken() {
    init();
}

SWGAccessToken::~SWGAccessToken() {
    this->cleanup();
}

void
SWGAccessToken::init() {
    access_token = new QString("");
    refresh_token = new QString("");
    expire_in = 0;
    expires_in = 0;
    scope = new QList<QString*>();
    
}

void
SWGAccessToken::cleanup() {
    if(access_token != NULL) {
        delete access_token;
    }
    if(refresh_token != NULL) {
        delete refresh_token;
    }
    
    
    if(scope != NULL) {
        QList<QString*>* arr = scope;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete scope;
    }
    
}

SWGAccessToken*
SWGAccessToken::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAccessToken::fromJsonObject(QJsonObject &pJson) {
    setValue(&access_token, pJson["access_token"], "QString", "QString");
    setValue(&refresh_token, pJson["refresh_token"], "QString", "QString");
    setValue(&expire_in, pJson["expire_in"], "qint32", "");
    setValue(&expires_in, pJson["expires_in"], "qint32", "");
    setValue(&scope, pJson["scope"], "QList", "QString");
    
}

QString
SWGAccessToken::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAccessToken::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("access_token"), access_token, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("refresh_token"), refresh_token, obj, QString("QString"));
    
    
    
    obj->insert("expire_in", QJsonValue(expire_in));
    obj->insert("expires_in", QJsonValue(expires_in));
    
    
    QList<QString*>* scopeList = scope;
    QJsonArray scopeJsonArray;
    toJsonArray((QList<void*>*)scope, &scopeJsonArray, "scope", "QString");

    obj->insert("scope", scopeJsonArray);
    
    
    

    return obj;
}

QString*
SWGAccessToken::getAccessToken() {
    return access_token;
}
void
SWGAccessToken::setAccessToken(QString* access_token) {
    this->access_token = access_token;
}

QString*
SWGAccessToken::getRefreshToken() {
    return refresh_token;
}
void
SWGAccessToken::setRefreshToken(QString* refresh_token) {
    this->refresh_token = refresh_token;
}

qint32
SWGAccessToken::getExpireIn() {
    return expire_in;
}
void
SWGAccessToken::setExpireIn(qint32 expire_in) {
    this->expire_in = expire_in;
}

qint32
SWGAccessToken::getExpiresIn() {
    return expires_in;
}
void
SWGAccessToken::setExpiresIn(qint32 expires_in) {
    this->expires_in = expires_in;
}

QList<QString*>*
SWGAccessToken::getScope() {
    return scope;
}
void
SWGAccessToken::setScope(QList<QString*>* scope) {
    this->scope = scope;
}



} /* namespace Swagger */

