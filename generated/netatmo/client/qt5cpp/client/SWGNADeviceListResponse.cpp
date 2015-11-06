
#include "SWGNADeviceListResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNADeviceListResponse::SWGNADeviceListResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNADeviceListResponse::SWGNADeviceListResponse() {
    init();
}

SWGNADeviceListResponse::~SWGNADeviceListResponse() {
    this->cleanup();
}

void
SWGNADeviceListResponse::init() {
    body = new SWGNADeviceListBody();
    
}

void
SWGNADeviceListResponse::cleanup() {
    if(body != NULL) {
        delete body;
    }
    
}

SWGNADeviceListResponse*
SWGNADeviceListResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNADeviceListResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&body, pJson["body"], "SWGNADeviceListBody", "SWGNADeviceListBody");
    
}

QString
SWGNADeviceListResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNADeviceListResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("body"), body, obj, QString("SWGNADeviceListBody"));
    
    
    
    

    return obj;
}

SWGNADeviceListBody*
SWGNADeviceListResponse::getBody() {
    return body;
}
void
SWGNADeviceListResponse::setBody(SWGNADeviceListBody* body) {
    this->body = body;
}



} /* namespace Swagger */

