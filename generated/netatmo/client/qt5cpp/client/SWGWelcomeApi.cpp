#include "SWGWelcomeApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGWelcomeApi::SWGWelcomeApi() {}

SWGWelcomeApi::~SWGWelcomeApi() {}

SWGWelcomeApi::SWGWelcomeApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGWelcomeApi::devicelist(QString* accessToken, QString* appType, QString* deviceId, bool getFavorites) {
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
            &SWGWelcomeApi::devicelistCallback);

    worker->execute(&input);
}

void
SWGWelcomeApi::devicelistCallback(HttpRequestWorker * worker) {
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
SWGWelcomeApi::getmeasure(QString* accessToken, QString* deviceId, QString* scale, QList<QString*>* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime) {
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
            &SWGWelcomeApi::getmeasureCallback);

    worker->execute(&input);
}

void
SWGWelcomeApi::getmeasureCallback(HttpRequestWorker * worker) {
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
SWGWelcomeApi::getuser(QString* accessToken) {
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
            &SWGWelcomeApi::getuserCallback);

    worker->execute(&input);
}

void
SWGWelcomeApi::getuserCallback(HttpRequestWorker * worker) {
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
} /* namespace Swagger */
