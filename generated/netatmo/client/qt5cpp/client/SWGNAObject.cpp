
#include "SWGNAObject.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAObject::SWGNAObject(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAObject::SWGNAObject() {
    init();
}

SWGNAObject::~SWGNAObject() {
    this->cleanup();
}

void
SWGNAObject::init() {
    $id = new QString("");
    
}

void
SWGNAObject::cleanup() {
    if($id != NULL) {
        delete $id;
    }
    
}

SWGNAObject*
SWGNAObject::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAObject::fromJsonObject(QJsonObject &pJson) {
    setValue(&$id, pJson["$id"], "QString", "QString");
    
}

QString
SWGNAObject::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAObject::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("$id"), $id, obj, QString("QString"));
    
    
    
    

    return obj;
}

QString*
SWGNAObject::get$Id() {
    return $id;
}
void
SWGNAObject::set$Id(QString* $id) {
    this->$id = $id;
}



} /* namespace Swagger */

