
#include "SWGNAZone.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAZone::SWGNAZone(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAZone::SWGNAZone() {
    init();
}

SWGNAZone::~SWGNAZone() {
    this->cleanup();
}

void
SWGNAZone::init() {
    id = 0;
    type = 0;
    name = new QString("");
    temp = 0.0f;
    
}

void
SWGNAZone::cleanup() {
    
    
    if(name != NULL) {
        delete name;
    }
    if(temp != NULL) {
        delete temp;
    }
    
}

SWGNAZone*
SWGNAZone::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAZone::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint32", "");
    setValue(&type, pJson["type"], "qint32", "");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&temp, pJson["temp"], "float", "float");
    
}

QString
SWGNAZone::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAZone::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("type", QJsonValue(type));
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("temp"), temp, obj, QString("float"));
    
    
    
    

    return obj;
}

qint32
SWGNAZone::getId() {
    return id;
}
void
SWGNAZone::setId(qint32 id) {
    this->id = id;
}

qint32
SWGNAZone::getType() {
    return type;
}
void
SWGNAZone::setType(qint32 type) {
    this->type = type;
}

QString*
SWGNAZone::getName() {
    return name;
}
void
SWGNAZone::setName(QString* name) {
    this->name = name;
}

float*
SWGNAZone::getTemp() {
    return temp;
}
void
SWGNAZone::setTemp(float* temp) {
    this->temp = temp;
}



} /* namespace Swagger */

