#include "SWGThermostatApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGThermostatApi::SWGThermostatApi() {}

SWGThermostatApi::~SWGThermostatApi() {}

SWGThermostatApi::SWGThermostatApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGThermostatApi::createnewschedule(QString* accessToken, QString* deviceId, QString* moduleId, SWGNAThermProgram thermProgram) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/createnewschedule");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
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
            &SWGThermostatApi::createnewscheduleCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::createnewscheduleCallback(HttpRequestWorker * worker) {
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
SWGThermostatApi::devicelist(QString* accessToken, QString* appType, QString* deviceId, bool getFavorites) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/devicelist");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
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
            &SWGThermostatApi::devicelistCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::devicelistCallback(HttpRequestWorker * worker) {
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
SWGThermostatApi::getmeasure(QString* accessToken, QString* deviceId, QString* scale, QList<QString*>* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/getmeasure");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
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
    

    
    
    

    

    if(type->size() > 0) {
      if(QString("csv").indexOf("multi") == 0) {
        foreach(QString* t, *type) {
          if(fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else 
            fullPath.append("?");
          fullPath.append("type=").append(stringValue(t));
        }
      }
      else if (QString("csv").indexOf("ssv") == 0) {
        if(fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("type=");
        qint32 count = 0;
        foreach(QString* t, *type) {
          if(count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("csv").indexOf("tsv") == 0) {
        if(fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("type=");
        qint32 count = 0;
        foreach(QString* t, *type) {
          if(count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }

    
    
    
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
            &SWGThermostatApi::getmeasureCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::getmeasureCallback(HttpRequestWorker * worker) {
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
SWGThermostatApi::getthermstate(QString* accessToken, QString* deviceId, QString* moduleId) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/getthermstate");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
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
            &SWGThermostatApi::getthermstateCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::getthermstateCallback(HttpRequestWorker * worker) {
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
SWGThermostatApi::getuser(QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/getuser");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGThermostatApi::getuserCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::getuserCallback(HttpRequestWorker * worker) {
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
SWGThermostatApi::setthermpoint(QString* accessToken, QString* deviceId, QString* moduleId, QString* setpointMode, qint32 setpointEndtime, float* setpointTemp) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/setthermpoint");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
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
            &SWGThermostatApi::setthermpointCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::setthermpointCallback(HttpRequestWorker * worker) {
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
SWGThermostatApi::switchschedule(QString* accessToken, QString* deviceId, QString* moduleId, QString* scheduleId) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/switchschedule");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
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
            &SWGThermostatApi::switchscheduleCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::switchscheduleCallback(HttpRequestWorker * worker) {
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
SWGThermostatApi::syncschedule(QString* accessToken, QString* deviceId, QString* moduleId, SWGNAThermProgram thermProgram) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/syncschedule");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("accessToken"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(accessToken)));
    

    
    
    
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
            &SWGThermostatApi::syncscheduleCallback);

    worker->execute(&input);
}

void
SWGThermostatApi::syncscheduleCallback(HttpRequestWorker * worker) {
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
