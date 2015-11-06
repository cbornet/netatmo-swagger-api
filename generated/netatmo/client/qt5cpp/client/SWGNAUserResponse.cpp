
#include "SWGNAUserResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAUserResponse::SWGNAUserResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAUserResponse::SWGNAUserResponse() {
    init();
}

SWGNAUserResponse::~SWGNAUserResponse() {
    this->cleanup();
}

void
SWGNAUserResponse::init() {
    body = new SWGNAUserBody();
    
}

void
SWGNAUserResponse::cleanup() {
    if(body != NULL) {
        delete body;
    }
    
}

SWGNAUserResponse*
SWGNAUserResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAUserResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&body, pJson["body"], "SWGNAUserBody", "SWGNAUserBody");
    
}

QString
SWGNAUserResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAUserResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("body"), body, obj, QString("SWGNAUserBody"));
    
    
    
    

    return obj;
}

SWGNAUserBody*
SWGNAUserResponse::getBody() {
    return body;
}
void
SWGNAUserResponse::setBody(SWGNAUserBody* body) {
    this->body = body;
}



} /* namespace Swagger */

