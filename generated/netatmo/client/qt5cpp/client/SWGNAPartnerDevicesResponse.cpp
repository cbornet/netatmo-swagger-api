
#include "SWGNAPartnerDevicesResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAPartnerDevicesResponse::SWGNAPartnerDevicesResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAPartnerDevicesResponse::SWGNAPartnerDevicesResponse() {
    init();
}

SWGNAPartnerDevicesResponse::~SWGNAPartnerDevicesResponse() {
    this->cleanup();
}

void
SWGNAPartnerDevicesResponse::init() {
    body = new QList<QString*>();
    
}

void
SWGNAPartnerDevicesResponse::cleanup() {
    if(body != NULL) {
        QList<QString*>* arr = body;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete body;
    }
    
}

SWGNAPartnerDevicesResponse*
SWGNAPartnerDevicesResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAPartnerDevicesResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&body, pJson["body"], "QList", "QString");
    
}

QString
SWGNAPartnerDevicesResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAPartnerDevicesResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<QString*>* bodyList = body;
    QJsonArray bodyJsonArray;
    toJsonArray((QList<void*>*)body, &bodyJsonArray, "body", "QString");

    obj->insert("body", bodyJsonArray);
    
    
    

    return obj;
}

QList<QString*>*
SWGNAPartnerDevicesResponse::getBody() {
    return body;
}
void
SWGNAPartnerDevicesResponse::setBody(QList<QString*>* body) {
    this->body = body;
}



} /* namespace Swagger */

