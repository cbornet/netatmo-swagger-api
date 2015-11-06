/*
 * SWGNAResponse.h
 * 
 * 
 */

#ifndef SWGNAResponse_H_
#define SWGNAResponse_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNAResponse: public SWGObject {
public:
    SWGNAResponse();
    SWGNAResponse(QString* json);
    virtual ~SWGNAResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAResponse* fromJson(QString &jsonString);

    QString* getStatus();
    void setStatus(QString* status);
    double* getTimeExec();
    void setTimeExec(double* time_exec);
    qint32 getTimeServer();
    void setTimeServer(qint32 time_server);
    

private:
    QString* status;
    double* time_exec;
    qint32 time_server;
    
};

} /* namespace Swagger */

#endif /* SWGNAResponse_H_ */
