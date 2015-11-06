
#include "SWGNAOkResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAOkResponse::SWGNAOkResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAOkResponse::SWGNAOkResponse() {
    init();
}

SWGNAOkResponse::~SWGNAOkResponse() {
    this->cleanup();
}

void
SWGNAOkResponse::init() {
    body = new QString("");
    
}

void
SWGNAOkResponse::cleanup() {
    if(body != NULL) {
        delete body;
    }
    
}

SWGNAOkResponse*
SWGNAOkResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAOkResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&body, pJson["body"], "QString", "QString");
    
}

QString
SWGNAOkResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAOkResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("body"), body, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGNAOkResponse::getBody() {
    return body;
}
void
SWGNAOkResponse::setBody(QString* body) {
    this->body = body;
}



} /* namespace Swagger */

