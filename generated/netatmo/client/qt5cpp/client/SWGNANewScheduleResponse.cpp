
#include "SWGNANewScheduleResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNANewScheduleResponse::SWGNANewScheduleResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNANewScheduleResponse::SWGNANewScheduleResponse() {
    init();
}

SWGNANewScheduleResponse::~SWGNANewScheduleResponse() {
    this->cleanup();
}

void
SWGNANewScheduleResponse::init() {
    body = new SWGNANewScheduleBody();
    
}

void
SWGNANewScheduleResponse::cleanup() {
    if(body != NULL) {
        delete body;
    }
    
}

SWGNANewScheduleResponse*
SWGNANewScheduleResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNANewScheduleResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&body, pJson["body"], "SWGNANewScheduleBody", "SWGNANewScheduleBody");
    
}

QString
SWGNANewScheduleResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNANewScheduleResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("body"), body, obj, QString("SWGNANewScheduleBody"));
    
    
    
    

    return obj;
}

SWGNANewScheduleBody*
SWGNANewScheduleResponse::getBody() {
    return body;
}
void
SWGNANewScheduleResponse::setBody(SWGNANewScheduleBody* body) {
    this->body = body;
}



} /* namespace Swagger */

