
#include "SWGNAHouseModelCa.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAHouseModelCa::SWGNAHouseModelCa(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAHouseModelCa::SWGNAHouseModelCa() {
    init();
}

SWGNAHouseModelCa::~SWGNAHouseModelCa() {
    this->cleanup();
}

void
SWGNAHouseModelCa::init() {
    te = 0.0;
    ti = 0;
    so = new QString("");
    
}

void
SWGNAHouseModelCa::cleanup() {
    if(te != NULL) {
        delete te;
    }
    
    if(so != NULL) {
        delete so;
    }
    
}

SWGNAHouseModelCa*
SWGNAHouseModelCa::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAHouseModelCa::fromJsonObject(QJsonObject &pJson) {
    setValue(&te, pJson["te"], "double", "double");
    setValue(&ti, pJson["ti"], "qint32", "");
    setValue(&so, pJson["so"], "QString", "QString");
    
}

QString
SWGNAHouseModelCa::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAHouseModelCa::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("te"), te, obj, QString("double"));
    
    
    
    obj->insert("ti", QJsonValue(ti));
    
    
    toJsonValue(QString("so"), so, obj, QString("QString"));
    
    
    
    

    return obj;
}

double*
SWGNAHouseModelCa::getTe() {
    return te;
}
void
SWGNAHouseModelCa::setTe(double* te) {
    this->te = te;
}

qint32
SWGNAHouseModelCa::getTi() {
    return ti;
}
void
SWGNAHouseModelCa::setTi(qint32 ti) {
    this->ti = ti;
}

QString*
SWGNAHouseModelCa::getSo() {
    return so;
}
void
SWGNAHouseModelCa::setSo(QString* so) {
    this->so = so;
}



} /* namespace Swagger */

