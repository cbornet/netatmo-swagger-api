/*
 * SWGNANewScheduleResponse.h
 * 
 * 
 */

#ifndef SWGNANewScheduleResponse_H_
#define SWGNANewScheduleResponse_H_

#include <QJsonObject>


#include "SWGNANewScheduleBody.h"
#include "SWGNAResponse.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNANewScheduleResponse: public SWGObject {
public:
    SWGNANewScheduleResponse();
    SWGNANewScheduleResponse(QString* json);
    virtual ~SWGNANewScheduleResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNANewScheduleResponse* fromJson(QString &jsonString);

    SWGNANewScheduleBody* getBody();
    void setBody(SWGNANewScheduleBody* body);
    

private:
    SWGNANewScheduleBody* body;
    
};

} /* namespace Swagger */

#endif /* SWGNANewScheduleResponse_H_ */
