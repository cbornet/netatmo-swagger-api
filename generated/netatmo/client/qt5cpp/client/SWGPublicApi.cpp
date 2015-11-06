#include "SWGPublicApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGPublicApi::SWGPublicApi() {}

SWGPublicApi::~SWGPublicApi() {}

SWGPublicApi::SWGPublicApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGPublicApi::getmeasure(QString* accessToken, QString* deviceId, QString* scale, QList<QString*>* type, QString* moduleId, qint32 dateBegin, qint32 dateEnd, qint32 limit, bool optimize, bool realTime) {
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
            &SWGPublicApi::getmeasureCallback);

    worker->execute(&input);
}

void
SWGPublicApi::getmeasureCallback(HttpRequestWorker * worker) {
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
} /* namespace Swagger */
