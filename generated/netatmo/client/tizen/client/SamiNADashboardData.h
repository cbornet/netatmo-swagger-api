/*
 * SamiNADashboardData.h
 * 
 * 
 */

#ifndef SamiNADashboardData_H_
#define SamiNADashboardData_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Float;


namespace Swagger {

class SamiNADashboardData: public SamiObject {
public:
    SamiNADashboardData();
    SamiNADashboardData(String* json);
    virtual ~SamiNADashboardData();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNADashboardData* fromJson(String* obj);

    
    Integer* getPTimeUtc();
    void setPTimeUtc(Integer* pTime_utc);
    
    Float* getPDeviceId();
    void setPDeviceId(Float* pDevice_id);
    
    Integer* getPBoilerOn();
    void setPBoilerOn(Integer* pBoilerOn);
    
    Integer* getPBoilerOff();
    void setPBoilerOff(Integer* pBoilerOff);
    
    Float* getPTemperature();
    void setPTemperature(Float* pTemperature);
    
    Integer* getPDateMaxTemp();
    void setPDateMaxTemp(Integer* pDate_max_temp);
    
    Integer* getPDateMinTemp();
    void setPDateMinTemp(Integer* pDate_min_temp);
    
    Float* getPMinTemp();
    void setPMinTemp(Float* pMin_temp);
    
    Float* getPMaxTemp();
    void setPMaxTemp(Float* pMax_temp);
    
    Float* getPAbsolutePressure();
    void setPAbsolutePressure(Float* pAbsolutePressure);
    
    Float* getPCO2();
    void setPCO2(Float* pCO2);
    
    Float* getPHumidity();
    void setPHumidity(Float* pHumidity);
    
    Float* getPNoise();
    void setPNoise(Float* pNoise);
    
    Float* getPPressure();
    void setPPressure(Float* pPressure);
    
    Integer* getPRain();
    void setPRain(Integer* pRain);
    
    Integer* getPSumRain1();
    void setPSumRain1(Integer* pSum_rain_1);
    
    Integer* getPSumRain24();
    void setPSumRain24(Integer* pSum_rain_24);
    

private:
    Integer* pTime_utc;
    Float* pDevice_id;
    Integer* pBoilerOn;
    Integer* pBoilerOff;
    Float* pTemperature;
    Integer* pDate_max_temp;
    Integer* pDate_min_temp;
    Float* pMin_temp;
    Float* pMax_temp;
    Float* pAbsolutePressure;
    Float* pCO2;
    Float* pHumidity;
    Float* pNoise;
    Float* pPressure;
    Integer* pRain;
    Integer* pSum_rain_1;
    Integer* pSum_rain_24;
    
};

} /* namespace Swagger */

#endif /* SamiNADashboardData_H_ */
