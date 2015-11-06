
#include "SWGNAThermStateResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAThermStateResponse::SWGNAThermStateResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAThermStateResponse::SWGNAThermStateResponse() {
    init();
}

SWGNAThermStateResponse::~SWGNAThermStateResponse() {
    this->cleanup();
}

void
SWGNAThermStateResponse::init() {
    body = new SWGNAThermStateBody();
    
}

void
SWGNAThermStateResponse::cleanup() {
    if(body != NULL) {
        delete body;
    }
    
}

SWGNAThermStateResponse*
SWGNAThermStateResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAThermStateResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&body, pJson["body"], "SWGNAThermStateBody", "SWGNAThermStateBody");
    
}

QString
SWGNAThermStateResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAThermStateResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("body"), body, obj, QString("SWGNAThermStateBody"));
    
    
    
    

    return obj;
}

SWGNAThermStateBody*
SWGNAThermStateResponse::getBody() {
    return body;
}
void
SWGNAThermStateResponse::setBody(SWGNAThermStateBody* body) {
    this->body = body;
}



} /* namespace Swagger */

