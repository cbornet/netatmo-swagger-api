
#include "SWGNAMeasureBodyElem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAMeasureBodyElem::SWGNAMeasureBodyElem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAMeasureBodyElem::SWGNAMeasureBodyElem() {
    init();
}

SWGNAMeasureBodyElem::~SWGNAMeasureBodyElem() {
    this->cleanup();
}

void
SWGNAMeasureBodyElem::init() {
    beg_time = 0;
    step_time = 0;
    value = new QList<QList*>();
    
}

void
SWGNAMeasureBodyElem::cleanup() {
    
    
    if(value != NULL) {
        QList<QList*>* arr = value;
        foreach(QList* o, *arr) {
            delete o;
        }
        delete value;
    }
    
}

SWGNAMeasureBodyElem*
SWGNAMeasureBodyElem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAMeasureBodyElem::fromJsonObject(QJsonObject &pJson) {
    setValue(&beg_time, pJson["beg_time"], "qint32", "");
    setValue(&step_time, pJson["step_time"], "qint32", "");
    setValue(&value, pJson["value"], "QList", "QList");
    
}

QString
SWGNAMeasureBodyElem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAMeasureBodyElem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("beg_time", QJsonValue(beg_time));
    obj->insert("step_time", QJsonValue(step_time));
    
    
    QList<QList*>* valueList = value;
    QJsonArray valueJsonArray;
    toJsonArray((QList<void*>*)value, &valueJsonArray, "value", "QList");

    obj->insert("value", valueJsonArray);
    
    
    

    return obj;
}

qint32
SWGNAMeasureBodyElem::getBegTime() {
    return beg_time;
}
void
SWGNAMeasureBodyElem::setBegTime(qint32 beg_time) {
    this->beg_time = beg_time;
}

qint32
SWGNAMeasureBodyElem::getStepTime() {
    return step_time;
}
void
SWGNAMeasureBodyElem::setStepTime(qint32 step_time) {
    this->step_time = step_time;
}

QList<QList<float*>*>*
SWGNAMeasureBodyElem::getValue() {
    return value;
}
void
SWGNAMeasureBodyElem::setValue(QList<QList<float*>*>* value) {
    this->value = value;
}



} /* namespace Swagger */

