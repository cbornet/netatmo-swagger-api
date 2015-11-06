/*
 * SWGNADashboardData.h
 * 
 * 
 */

#ifndef SWGNADashboardData_H_
#define SWGNADashboardData_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGNADashboardData: public SWGObject {
public:
    SWGNADashboardData();
    SWGNADashboardData(QString* json);
    virtual ~SWGNADashboardData();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNADashboardData* fromJson(QString &jsonString);

    qint32 getTimeUtc();
    void setTimeUtc(qint32 time_utc);
    float* getDeviceId();
    void setDeviceId(float* device_id);
    qint32 getBoilerOn();
    void setBoilerOn(qint32 BoilerOn);
    qint32 getBoilerOff();
    void setBoilerOff(qint32 BoilerOff);
    float* getTemperature();
    void setTemperature(float* Temperature);
    qint32 getDateMaxTemp();
    void setDateMaxTemp(qint32 date_max_temp);
    qint32 getDateMinTemp();
    void setDateMinTemp(qint32 date_min_temp);
    float* getMinTemp();
    void setMinTemp(float* min_temp);
    float* getMaxTemp();
    void setMaxTemp(float* max_temp);
    float* getAbsolutePressure();
    void setAbsolutePressure(float* AbsolutePressure);
    float* getCO2();
    void setCO2(float* CO2);
    float* getHumidity();
    void setHumidity(float* Humidity);
    float* getNoise();
    void setNoise(float* Noise);
    float* getPressure();
    void setPressure(float* Pressure);
    qint32 getRain();
    void setRain(qint32 Rain);
    qint32 getSumRain1();
    void setSumRain1(qint32 sum_rain_1);
    qint32 getSumRain24();
    void setSumRain24(qint32 sum_rain_24);
    

private:
    qint32 time_utc;
    float* device_id;
    qint32 BoilerOn;
    qint32 BoilerOff;
    float* Temperature;
    qint32 date_max_temp;
    qint32 date_min_temp;
    float* min_temp;
    float* max_temp;
    float* AbsolutePressure;
    float* CO2;
    float* Humidity;
    float* Noise;
    float* Pressure;
    qint32 Rain;
    qint32 sum_rain_1;
    qint32 sum_rain_24;
    
};

} /* namespace Swagger */

#endif /* SWGNADashboardData_H_ */
