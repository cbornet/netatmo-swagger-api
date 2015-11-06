/*
 * SWGNAMeasureResponse.h
 * 
 * 
 */

#ifndef SWGNAMeasureResponse_H_
#define SWGNAMeasureResponse_H_

#include <QJsonObject>


#include "SWGNAMeasureBodyElem.h"
#include <QList>
#include "SWGNAResponse.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAMeasureResponse: public SWGObject {
public:
    SWGNAMeasureResponse();
    SWGNAMeasureResponse(QString* json);
    virtual ~SWGNAMeasureResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAMeasureResponse* fromJson(QString &jsonString);

    QList<SWGNAMeasureBodyElem*>* getBody();
    void setBody(QList<SWGNAMeasureBodyElem*>* body);
    

private:
    QList<SWGNAMeasureBodyElem*>* body;
    
};

} /* namespace Swagger */

#endif /* SWGNAMeasureResponse_H_ */
