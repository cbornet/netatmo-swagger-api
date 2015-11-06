/*
 * SWGNASetpoint.h
 * 
 * 
 */

#ifndef SWGNASetpoint_H_
#define SWGNASetpoint_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGNASetpoint: public SWGObject {
public:
    SWGNASetpoint();
    SWGNASetpoint(QString* json);
    virtual ~SWGNASetpoint();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNASetpoint* fromJson(QString &jsonString);

    float* getSetpointTemp();
    void setSetpointTemp(float* setpoint_temp);
    qint32 getSetpointEndtime();
    void setSetpointEndtime(qint32 setpoint_endtime);
    QString* getSetpointMode();
    void setSetpointMode(QString* setpoint_mode);
    

private:
    float* setpoint_temp;
    qint32 setpoint_endtime;
    QString* setpoint_mode;
    
};

} /* namespace Swagger */

#endif /* SWGNASetpoint_H_ */
