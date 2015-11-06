/*
 * SWGNAOkResponse.h
 * 
 * 
 */

#ifndef SWGNAOkResponse_H_
#define SWGNAOkResponse_H_

#include <QJsonObject>


#include <QString>
#include "SWGNAResponse.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAOkResponse: public SWGObject {
public:
    SWGNAOkResponse();
    SWGNAOkResponse(QString* json);
    virtual ~SWGNAOkResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAOkResponse* fromJson(QString &jsonString);

    QString* getBody();
    void setBody(QString* body);
    

private:
    QString* body;
    
};

} /* namespace Swagger */

#endif /* SWGNAOkResponse_H_ */
