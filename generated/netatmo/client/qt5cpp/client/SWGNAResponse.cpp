
#include "SWGNAResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAResponse::SWGNAResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAResponse::SWGNAResponse() {
    init();
}

SWGNAResponse::~SWGNAResponse() {
    this->cleanup();
}

void
SWGNAResponse::init() {
    status = new QString("");
    time_exec = 0.0;
    time_server = 0;
    
}

void
SWGNAResponse::cleanup() {
    if(status != NULL) {
        delete status;
    }
    if(time_exec != NULL) {
        delete time_exec;
    }
    
    
}

SWGNAResponse*
SWGNAResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAResponse::fromJsonObject(QJsonObject &pJson) {
    setValue(&status, pJson["status"], "QString", "QString");
    setValue(&time_exec, pJson["time_exec"], "double", "double");
    setValue(&time_server, pJson["time_server"], "qint32", "");
    
}

QString
SWGNAResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("status"), status, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("time_exec"), time_exec, obj, QString("double"));
    
    
    
    obj->insert("time_server", QJsonValue(time_server));
    

    return obj;
}

QString*
SWGNAResponse::getStatus() {
    return status;
}
void
SWGNAResponse::setStatus(QString* status) {
    this->status = status;
}

double*
SWGNAResponse::getTimeExec() {
    return time_exec;
}
void
SWGNAResponse::setTimeExec(double* time_exec) {
    this->time_exec = time_exec;
}

qint32
SWGNAResponse::getTimeServer() {
    return time_server;
}
void
SWGNAResponse::setTimeServer(qint32 time_server) {
    this->time_server = time_server;
}



} /* namespace Swagger */

