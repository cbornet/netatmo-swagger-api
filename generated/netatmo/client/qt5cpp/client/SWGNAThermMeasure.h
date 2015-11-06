/*
 * SWGNAThermMeasure.h
 * 
 * 
 */

#ifndef SWGNAThermMeasure_H_
#define SWGNAThermMeasure_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGNAThermMeasure: public SWGObject {
public:
    SWGNAThermMeasure();
    SWGNAThermMeasure(QString* json);
    virtual ~SWGNAThermMeasure();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAThermMeasure* fromJson(QString &jsonString);

    qint32 getTime();
    void setTime(qint32 time);
    float* getTemperature();
    void setTemperature(float* temperature);
    float* getSetpointTemp();
    void setSetpointTemp(float* setpoint_temp);
    

private:
    qint32 time;
    float* temperature;
    float* setpoint_temp;
    
};

} /* namespace Swagger */

#endif /* SWGNAThermMeasure_H_ */
