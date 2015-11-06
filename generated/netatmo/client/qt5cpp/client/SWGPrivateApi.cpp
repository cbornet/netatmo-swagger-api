#include "SWGPrivateApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGPrivateApi::SWGPrivateApi() {}

SWGPrivateApi::~SWGPrivateApi() {}

SWGPrivateApi::SWGPrivateApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGPrivateApi::createnewschedule(QString* deviceId, QString* moduleId, SWGNAThermProgram thermProgram) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/createnewschedule");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("deviceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(deviceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("moduleId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(moduleId)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = thermProgram.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::createnewscheduleCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::createnewscheduleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNANewScheduleResponse* output = static_cast<SWGNANewScheduleResponse*>(create(json, QString("SWGNANewScheduleResponse")));
    
    
    

    worker->deleteLater();

    emit createnewscheduleSignal(output);
    
}
void
SWGPrivateApi::devicelist(QString* appType, QString* deviceId, bool getFavorites) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/devicelist");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("appType"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(appType)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("deviceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(deviceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("getFavorites"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(getFavorites)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::devicelistCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::devicelistCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNADeviceListResponse* output = static_cast<SWGNADeviceListResponse*>(create(json, QString("SWGNADeviceListResponse")));
    
    
    

    worker->deleteLater();

    emit devicelistSignal(output);
    
}
void
SWGPrivateApi::getmeasure(QString* deviceId, QString* scale, QString* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/getmeasure");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("deviceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(deviceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("moduleId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(moduleId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("scale"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(scale)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("type"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(type)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("dateBegin"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(dateBegin)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("dateEnd"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(dateEnd)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("limit"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(limit)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("optimize"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(optimize)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("realTime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(realTime)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::getmeasureCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::getmeasureCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNAMeasureResponse* output = static_cast<SWGNAMeasureResponse*>(create(json, QString("SWGNAMeasureResponse")));
    
    
    

    worker->deleteLater();

    emit getmeasureSignal(output);
    
}
void
SWGPrivateApi::getthermstate(QString* deviceId, QString* moduleId) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/getthermstate");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("deviceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(deviceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("moduleId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(moduleId)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::getthermstateCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::getthermstateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNAThermStateResponse* output = static_cast<SWGNAThermStateResponse*>(create(json, QString("SWGNAThermStateResponse")));
    
    
    

    worker->deleteLater();

    emit getthermstateSignal(output);
    
}
void
SWGPrivateApi::getuser() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/getuser");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::getuserCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::getuserCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNAUserResponse* output = static_cast<SWGNAUserResponse*>(create(json, QString("SWGNAUserResponse")));
    
    
    

    worker->deleteLater();

    emit getuserSignal(output);
    
}
void
SWGPrivateApi::setthermpoint(QString* deviceId, QString* moduleId, QString* setpointMode, qint32 setpointEndtime, float* setpointTemp) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/setthermpoint");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("deviceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(deviceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("moduleId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(moduleId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("setpointMode"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(setpointMode)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("setpointEndtime"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(setpointEndtime)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("setpointTemp"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(setpointTemp)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::setthermpointCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::setthermpointCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNAOkResponse* output = static_cast<SWGNAOkResponse*>(create(json, QString("SWGNAOkResponse")));
    
    
    

    worker->deleteLater();

    emit setthermpointSignal(output);
    
}
void
SWGPrivateApi::switchschedule(QString* deviceId, QString* moduleId, QString* scheduleId) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/switchschedule");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("deviceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(deviceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("moduleId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(moduleId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("scheduleId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(scheduleId)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::switchscheduleCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::switchscheduleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNAOkResponse* output = static_cast<SWGNAOkResponse*>(create(json, QString("SWGNAOkResponse")));
    
    
    

    worker->deleteLater();

    emit switchscheduleSignal(output);
    
}
void
SWGPrivateApi::syncschedule(QString* deviceId, QString* moduleId, SWGNAThermProgram thermProgram) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/syncschedule");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("deviceId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(deviceId)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("moduleId"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(moduleId)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    

    
    
    
    QString output = thermProgram.asJson();
    input.request_body.append(output);
    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPrivateApi::syncscheduleCallback);

    worker->execute(&input);
}

void
SWGPrivateApi::syncscheduleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNAOkResponse* output = static_cast<SWGNAOkResponse*>(create(json, QString("SWGNAOkResponse")));
    
    
    

    worker->deleteLater();

    emit syncscheduleSignal(output);
    
}
} /* namespace Swagger */
