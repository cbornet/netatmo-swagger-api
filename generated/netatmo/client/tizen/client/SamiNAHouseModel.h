/*
 * SamiNAHouseModel.h
 * 
 * 
 */

#ifndef SamiNAHouseModel_H_
#define SamiNAHouseModel_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
#include "SamiNADate.h"
#include "SamiNAPidAlgo.h"
#include "SamiNAStation.h"
#include "SamiNASimpleAlgo.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::String;
using Tizen::Base::Boolean;
#include "SamiNALinkStation.h"
#include "SamiNAHouseModelCa.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAHouseModel: public SamiObject {
public:
    SamiNAHouseModel();
    SamiNAHouseModel(String* json);
    virtual ~SamiNAHouseModel();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAHouseModel* fromJson(String* obj);

    
    String* getPAlgoType();
    void setPAlgoType(String* pAlgo_type);
    
    SamiNAHouseModelCa* getPCa();
    void setPCa(SamiNAHouseModelCa* pCa);
    
    HashMap* getPExtTemps();
    void setPExtTemps(HashMap* pExt_temps);
    
    Boolean* getPFirstAnticipateAvail();
    void setPFirstAnticipateAvail(Boolean* pFirst_anticipate_avail);
    
    Boolean* getPFirstPidAvail();
    void setPFirstPidAvail(Boolean* pFirst_pid_avail);
    
    SamiNAStation* getPGefs();
    void setPGefs(SamiNAStation* pGefs);
    
    String* getPInUse();
    void setPInUse(String* pIn_use);
    
    SamiNADate* getPLastComputeTry();
    void setPLastComputeTry(SamiNADate* pLast_compute_try);
    
    SamiNALinkStation* getPLinkStation();
    void setPLinkStation(SamiNALinkStation* pLink_station);
    
    SamiNAPidAlgo* getPPidAlgo();
    void setPPidAlgo(SamiNAPidAlgo* pPid_algo);
    
    SamiNAStation* getPStation();
    void setPStation(SamiNAStation* pStation);
    
    String* getPPreferedAlgoType();
    void setPPreferedAlgoType(String* pPrefered_algo_type);
    
    SamiNASimpleAlgo* getPSimpleAlgo();
    void setPSimpleAlgo(SamiNASimpleAlgo* pSimple_algo);
    
    SamiNADate* getPTime();
    void setPTime(SamiNADate* pTime);
    
    Boolean* getPStationFirsttimeAnticipate();
    void setPStationFirsttimeAnticipate(Boolean* pStation_firsttime_anticipate);
    
    Integer* getPTimeAlgoChanged();
    void setPTimeAlgoChanged(Integer* pTime_algo_changed);
    
    Integer* getPTimePidComputed();
    void setPTimePidComputed(Integer* pTime_pid_computed);
    

private:
    String* pAlgo_type;
    SamiNAHouseModelCa* pCa;
    HashMap* pExt_temps;
    Boolean* pFirst_anticipate_avail;
    Boolean* pFirst_pid_avail;
    SamiNAStation* pGefs;
    String* pIn_use;
    SamiNADate* pLast_compute_try;
    SamiNALinkStation* pLink_station;
    SamiNAPidAlgo* pPid_algo;
    SamiNAStation* pStation;
    String* pPrefered_algo_type;
    SamiNASimpleAlgo* pSimple_algo;
    SamiNADate* pTime;
    Boolean* pStation_firsttime_anticipate;
    Integer* pTime_algo_changed;
    Integer* pTime_pid_computed;
    
};

} /* namespace Swagger */

#endif /* SamiNAHouseModel_H_ */
