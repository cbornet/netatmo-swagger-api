
#include "SWGNAMeasureResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAMeasureResponse::SWGNAMeasureResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAMeasureResponse::SWGNAMeasureResponse() {
    init();
}

SWGNAMeasureResponse::~SWGNAMeasureResponse() {
    this->cleanup();
}

void
SWGNAMeasureResponse::init() {
    body = new QList<SWGNAMeasureBodyElem*>();
    
}

void
SWGNAMeasureResponse::cleanup() {
    if(body != NULL) {
        QList<SWGNAMeasureBodyElem*>* arr = body;
        foreach(SWGNAMeasureBodyElem* o, *arr) {
            delete o;
        }
        delete body;
    }
    
}

SWGNAMeasureResponse*
SWGNAMeasureResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAMeasureResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&body, pJson["body"], "QList", "SWGNAMeasureBodyElem");
    
}

QString
SWGNAMeasureResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAMeasureResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGNAMeasureBodyElem*>* bodyList = body;
    QJsonArray bodyJsonArray;
    toJsonArray((QList<void*>*)body, &bodyJsonArray, "body", "SWGNAMeasureBodyElem");

    obj->insert("body", bodyJsonArray);
    
    
    

    return obj;
}

QList<SWGNAMeasureBodyElem*>*
SWGNAMeasureResponse::getBody() {
    return body;
}
void
SWGNAMeasureResponse::setBody(QList<SWGNAMeasureBodyElem*>* body) {
    this->body = body;
}



} /* namespace Swagger */

