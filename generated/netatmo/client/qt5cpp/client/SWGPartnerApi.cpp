#include "SWGPartnerApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGPartnerApi::SWGPartnerApi() {}

SWGPartnerApi::~SWGPartnerApi() {}

SWGPartnerApi::SWGPartnerApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGPartnerApi::devicelist(QString* accessToken, QString* appType, QString* deviceId, bool getFavorites) {
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
            &SWGPartnerApi::devicelistCallback);

    worker->execute(&input);
}

void
SWGPartnerApi::devicelistCallback(HttpRequestWorker * worker) {
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
SWGPartnerApi::getmeasure(QString* accessToken, QString* deviceId, QString* scale, QList<QString*>* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime) {
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
            &SWGPartnerApi::getmeasureCallback);

    worker->execute(&input);
}

void
SWGPartnerApi::getmeasureCallback(HttpRequestWorker * worker) {
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
SWGPartnerApi::getthermstate(QString* accessToken, QString* deviceId, QString* moduleId) {
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
            &SWGPartnerApi::getthermstateCallback);

    worker->execute(&input);
}

void
SWGPartnerApi::getthermstateCallback(HttpRequestWorker * worker) {
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
SWGPartnerApi::partnerdevices(QString* accessToken) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/partnerdevices");

    

    
    
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
            &SWGPartnerApi::partnerdevicesCallback);

    worker->execute(&input);
}

void
SWGPartnerApi::partnerdevicesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    
    
    
    QString json(worker->response);
    SWGNAPartnerDevicesResponse* output = static_cast<SWGNAPartnerDevicesResponse*>(create(json, QString("SWGNAPartnerDevicesResponse")));
    
    
    

    worker->deleteLater();

    emit partnerdevicesSignal(output);
    
}
} /* namespace Swagger */
