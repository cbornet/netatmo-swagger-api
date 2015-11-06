/*
 * SWGNAStation.h
 * 
 * 
 */

#ifndef SWGNAStation_H_
#define SWGNAStation_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGNAStation: public SWGObject {
public:
    SWGNAStation();
    SWGNAStation(QString* json);
    virtual ~SWGNAStation();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAStation* fromJson(QString &jsonString);

    qint32 getLagDown();
    void setLagDown(qint32 lag_down);
    qint32 getLagUp();
    void setLagUp(qint32 lag_up);
    float* getOffOvershoot();
    void setOffOvershoot(float* off_overshoot);
    float* getOnOvershoot();
    void setOnOvershoot(float* on_overshoot);
    qint32 getPk();
    void setPk(qint32 pk);
    qint32 getTau();
    void setTau(qint32 tau);
    

private:
    qint32 lag_down;
    qint32 lag_up;
    float* off_overshoot;
    float* on_overshoot;
    qint32 pk;
    qint32 tau;
    
};

} /* namespace Swagger */

#endif /* SWGNAStation_H_ */
