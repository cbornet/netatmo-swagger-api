
#include "SamiNAHouseModel.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNAHouseModel::SamiNAHouseModel() {
    init();
}

SamiNAHouseModel::~SamiNAHouseModel() {
    this->cleanup();
}

void
SamiNAHouseModel::init() {
    pAlgo_type = null;
    pCa = null;
    pExt_temps = null;
    pFirst_anticipate_avail = null;
    pFirst_pid_avail = null;
    pGefs = null;
    pIn_use = null;
    pLast_compute_try = null;
    pLink_station = null;
    pPid_algo = null;
    pStation = null;
    pPrefered_algo_type = null;
    pSimple_algo = null;
    pTime = null;
    pStation_firsttime_anticipate = null;
    pTime_algo_changed = null;
    pTime_pid_computed = null;
    
}

void
SamiNAHouseModel::cleanup() {
    if(pAlgo_type != null) {
        
        delete pAlgo_type;
        pAlgo_type = null;
    }
    if(pCa != null) {
        
        delete pCa;
        pCa = null;
    }
    if(pExt_temps != null) {
        pExt_temps->RemoveAll(true);
        delete pExt_temps;
        pExt_temps = null;
    }
    if(pFirst_anticipate_avail != null) {
        
        delete pFirst_anticipate_avail;
        pFirst_anticipate_avail = null;
    }
    if(pFirst_pid_avail != null) {
        
        delete pFirst_pid_avail;
        pFirst_pid_avail = null;
    }
    if(pGefs != null) {
        
        delete pGefs;
        pGefs = null;
    }
    if(pIn_use != null) {
        
        delete pIn_use;
        pIn_use = null;
    }
    if(pLast_compute_try != null) {
        
        delete pLast_compute_try;
        pLast_compute_try = null;
    }
    if(pLink_station != null) {
        
        delete pLink_station;
        pLink_station = null;
    }
    if(pPid_algo != null) {
        
        delete pPid_algo;
        pPid_algo = null;
    }
    if(pStation != null) {
        
        delete pStation;
        pStation = null;
    }
    if(pPrefered_algo_type != null) {
        
        delete pPrefered_algo_type;
        pPrefered_algo_type = null;
    }
    if(pSimple_algo != null) {
        
        delete pSimple_algo;
        pSimple_algo = null;
    }
    if(pTime != null) {
        
        delete pTime;
        pTime = null;
    }
    if(pStation_firsttime_anticipate != null) {
        
        delete pStation_firsttime_anticipate;
        pStation_firsttime_anticipate = null;
    }
    if(pTime_algo_changed != null) {
        
        delete pTime_algo_changed;
        pTime_algo_changed = null;
    }
    if(pTime_pid_computed != null) {
        
        delete pTime_pid_computed;
        pTime_pid_computed = null;
    }
    
}


SamiNAHouseModel*
SamiNAHouseModel::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiNAHouseModel::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAlgo_typeKey = new JsonString(L"algo_type");
        IJsonValue* pAlgo_typeVal = null;
        pJsonObject->GetValue(pAlgo_typeKey, pAlgo_typeVal);
        if(pAlgo_typeVal != null) {
            
            pAlgo_type = new String();
            jsonToValue(pAlgo_type, pAlgo_typeVal, L"String", L"String");
        }
        delete pAlgo_typeKey;
        JsonString* pCaKey = new JsonString(L"ca");
        IJsonValue* pCaVal = null;
        pJsonObject->GetValue(pCaKey, pCaVal);
        if(pCaVal != null) {
            
            pCa = new SamiNAHouseModelCa();
            jsonToValue(pCa, pCaVal, L"SamiNAHouseModelCa", L"SamiNAHouseModelCa");
        }
        delete pCaKey;
        JsonString* pExt_tempsKey = new JsonString(L"ext_temps");
        IJsonValue* pExt_tempsVal = null;
        pJsonObject->GetValue(pExt_tempsKey, pExt_tempsVal);
        if(pExt_tempsVal != null) {
            pExt_temps = new HashMap();
            
            jsonToValue(pExt_temps, pExt_tempsVal, L"HashMap", L"Integer");
        }
        delete pExt_tempsKey;
        JsonString* pFirst_anticipate_availKey = new JsonString(L"first_anticipate_avail");
        IJsonValue* pFirst_anticipate_availVal = null;
        pJsonObject->GetValue(pFirst_anticipate_availKey, pFirst_anticipate_availVal);
        if(pFirst_anticipate_availVal != null) {
            
            pFirst_anticipate_avail = new Boolean(false);
            jsonToValue(pFirst_anticipate_avail, pFirst_anticipate_availVal, L"Boolean", L"Boolean");
        }
        delete pFirst_anticipate_availKey;
        JsonString* pFirst_pid_availKey = new JsonString(L"first_pid_avail");
        IJsonValue* pFirst_pid_availVal = null;
        pJsonObject->GetValue(pFirst_pid_availKey, pFirst_pid_availVal);
        if(pFirst_pid_availVal != null) {
            
            pFirst_pid_avail = new Boolean(false);
            jsonToValue(pFirst_pid_avail, pFirst_pid_availVal, L"Boolean", L"Boolean");
        }
        delete pFirst_pid_availKey;
        JsonString* pGefsKey = new JsonString(L"gefs");
        IJsonValue* pGefsVal = null;
        pJsonObject->GetValue(pGefsKey, pGefsVal);
        if(pGefsVal != null) {
            
            pGefs = new SamiNAStation();
            jsonToValue(pGefs, pGefsVal, L"SamiNAStation", L"SamiNAStation");
        }
        delete pGefsKey;
        JsonString* pIn_useKey = new JsonString(L"in_use");
        IJsonValue* pIn_useVal = null;
        pJsonObject->GetValue(pIn_useKey, pIn_useVal);
        if(pIn_useVal != null) {
            
            pIn_use = new String();
            jsonToValue(pIn_use, pIn_useVal, L"String", L"String");
        }
        delete pIn_useKey;
        JsonString* pLast_compute_tryKey = new JsonString(L"last_compute_try");
        IJsonValue* pLast_compute_tryVal = null;
        pJsonObject->GetValue(pLast_compute_tryKey, pLast_compute_tryVal);
        if(pLast_compute_tryVal != null) {
            
            pLast_compute_try = new SamiNADate();
            jsonToValue(pLast_compute_try, pLast_compute_tryVal, L"SamiNADate", L"SamiNADate");
        }
        delete pLast_compute_tryKey;
        JsonString* pLink_stationKey = new JsonString(L"link_station");
        IJsonValue* pLink_stationVal = null;
        pJsonObject->GetValue(pLink_stationKey, pLink_stationVal);
        if(pLink_stationVal != null) {
            
            pLink_station = new SamiNALinkStation();
            jsonToValue(pLink_station, pLink_stationVal, L"SamiNALinkStation", L"SamiNALinkStation");
        }
        delete pLink_stationKey;
        JsonString* pPid_algoKey = new JsonString(L"pid_algo");
        IJsonValue* pPid_algoVal = null;
        pJsonObject->GetValue(pPid_algoKey, pPid_algoVal);
        if(pPid_algoVal != null) {
            
            pPid_algo = new SamiNAPidAlgo();
            jsonToValue(pPid_algo, pPid_algoVal, L"SamiNAPidAlgo", L"SamiNAPidAlgo");
        }
        delete pPid_algoKey;
        JsonString* pStationKey = new JsonString(L"station");
        IJsonValue* pStationVal = null;
        pJsonObject->GetValue(pStationKey, pStationVal);
        if(pStationVal != null) {
            
            pStation = new SamiNAStation();
            jsonToValue(pStation, pStationVal, L"SamiNAStation", L"SamiNAStation");
        }
        delete pStationKey;
        JsonString* pPrefered_algo_typeKey = new JsonString(L"prefered_algo_type");
        IJsonValue* pPrefered_algo_typeVal = null;
        pJsonObject->GetValue(pPrefered_algo_typeKey, pPrefered_algo_typeVal);
        if(pPrefered_algo_typeVal != null) {
            
            pPrefered_algo_type = new String();
            jsonToValue(pPrefered_algo_type, pPrefered_algo_typeVal, L"String", L"String");
        }
        delete pPrefered_algo_typeKey;
        JsonString* pSimple_algoKey = new JsonString(L"simple_algo");
        IJsonValue* pSimple_algoVal = null;
        pJsonObject->GetValue(pSimple_algoKey, pSimple_algoVal);
        if(pSimple_algoVal != null) {
            
            pSimple_algo = new SamiNASimpleAlgo();
            jsonToValue(pSimple_algo, pSimple_algoVal, L"SamiNASimpleAlgo", L"SamiNASimpleAlgo");
        }
        delete pSimple_algoKey;
        JsonString* pTimeKey = new JsonString(L"time");
        IJsonValue* pTimeVal = null;
        pJsonObject->GetValue(pTimeKey, pTimeVal);
        if(pTimeVal != null) {
            
            pTime = new SamiNADate();
            jsonToValue(pTime, pTimeVal, L"SamiNADate", L"SamiNADate");
        }
        delete pTimeKey;
        JsonString* pStation_firsttime_anticipateKey = new JsonString(L"station_firsttime_anticipate");
        IJsonValue* pStation_firsttime_anticipateVal = null;
        pJsonObject->GetValue(pStation_firsttime_anticipateKey, pStation_firsttime_anticipateVal);
        if(pStation_firsttime_anticipateVal != null) {
            
            pStation_firsttime_anticipate = new Boolean(false);
            jsonToValue(pStation_firsttime_anticipate, pStation_firsttime_anticipateVal, L"Boolean", L"Boolean");
        }
        delete pStation_firsttime_anticipateKey;
        JsonString* pTime_algo_changedKey = new JsonString(L"time_algo_changed");
        IJsonValue* pTime_algo_changedVal = null;
        pJsonObject->GetValue(pTime_algo_changedKey, pTime_algo_changedVal);
        if(pTime_algo_changedVal != null) {
            
            pTime_algo_changed = new Integer();
            jsonToValue(pTime_algo_changed, pTime_algo_changedVal, L"Integer", L"Integer");
        }
        delete pTime_algo_changedKey;
        JsonString* pTime_pid_computedKey = new JsonString(L"time_pid_computed");
        IJsonValue* pTime_pid_computedVal = null;
        pJsonObject->GetValue(pTime_pid_computedKey, pTime_pid_computedVal);
        if(pTime_pid_computedVal != null) {
            
            pTime_pid_computed = new Integer();
            jsonToValue(pTime_pid_computed, pTime_pid_computedVal, L"Integer", L"Integer");
        }
        delete pTime_pid_computedKey;
        
    }
}

SamiNAHouseModel::SamiNAHouseModel(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiNAHouseModel::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiNAHouseModel::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pAlgo_typeKey = new JsonString(L"algo_type");
    pJsonObject->Add(pAlgo_typeKey, toJson(getPAlgoType(), "String", ""));

    
    JsonString *pCaKey = new JsonString(L"ca");
    pJsonObject->Add(pCaKey, toJson(getPCa(), "SamiNAHouseModelCa", ""));

    
    JsonString *pExt_tempsKey = new JsonString(L"ext_temps");
    pJsonObject->Add(pExt_tempsKey, toJson(getPExtTemps(), "Integer", "map"));

    
    JsonString *pFirst_anticipate_availKey = new JsonString(L"first_anticipate_avail");
    pJsonObject->Add(pFirst_anticipate_availKey, toJson(getPFirstAnticipateAvail(), "Boolean", ""));

    
    JsonString *pFirst_pid_availKey = new JsonString(L"first_pid_avail");
    pJsonObject->Add(pFirst_pid_availKey, toJson(getPFirstPidAvail(), "Boolean", ""));

    
    JsonString *pGefsKey = new JsonString(L"gefs");
    pJsonObject->Add(pGefsKey, toJson(getPGefs(), "SamiNAStation", ""));

    
    JsonString *pIn_useKey = new JsonString(L"in_use");
    pJsonObject->Add(pIn_useKey, toJson(getPInUse(), "String", ""));

    
    JsonString *pLast_compute_tryKey = new JsonString(L"last_compute_try");
    pJsonObject->Add(pLast_compute_tryKey, toJson(getPLastComputeTry(), "SamiNADate", ""));

    
    JsonString *pLink_stationKey = new JsonString(L"link_station");
    pJsonObject->Add(pLink_stationKey, toJson(getPLinkStation(), "SamiNALinkStation", ""));

    
    JsonString *pPid_algoKey = new JsonString(L"pid_algo");
    pJsonObject->Add(pPid_algoKey, toJson(getPPidAlgo(), "SamiNAPidAlgo", ""));

    
    JsonString *pStationKey = new JsonString(L"station");
    pJsonObject->Add(pStationKey, toJson(getPStation(), "SamiNAStation", ""));

    
    JsonString *pPrefered_algo_typeKey = new JsonString(L"prefered_algo_type");
    pJsonObject->Add(pPrefered_algo_typeKey, toJson(getPPreferedAlgoType(), "String", ""));

    
    JsonString *pSimple_algoKey = new JsonString(L"simple_algo");
    pJsonObject->Add(pSimple_algoKey, toJson(getPSimpleAlgo(), "SamiNASimpleAlgo", ""));

    
    JsonString *pTimeKey = new JsonString(L"time");
    pJsonObject->Add(pTimeKey, toJson(getPTime(), "SamiNADate", ""));

    
    JsonString *pStation_firsttime_anticipateKey = new JsonString(L"station_firsttime_anticipate");
    pJsonObject->Add(pStation_firsttime_anticipateKey, toJson(getPStationFirsttimeAnticipate(), "Boolean", ""));

    
    JsonString *pTime_algo_changedKey = new JsonString(L"time_algo_changed");
    pJsonObject->Add(pTime_algo_changedKey, toJson(getPTimeAlgoChanged(), "Integer", ""));

    
    JsonString *pTime_pid_computedKey = new JsonString(L"time_pid_computed");
    pJsonObject->Add(pTime_pid_computedKey, toJson(getPTimePidComputed(), "Integer", ""));

    
    return pJsonObject;
}

String*
SamiNAHouseModel::getPAlgoType() {
    return pAlgo_type;
}
void
SamiNAHouseModel::setPAlgoType(String* pAlgo_type) {
    this->pAlgo_type = pAlgo_type;
}

SamiNAHouseModelCa*
SamiNAHouseModel::getPCa() {
    return pCa;
}
void
SamiNAHouseModel::setPCa(SamiNAHouseModelCa* pCa) {
    this->pCa = pCa;
}

HashMap*
SamiNAHouseModel::getPExtTemps() {
    return pExt_temps;
}
void
SamiNAHouseModel::setPExtTemps(HashMap* pExt_temps) {
    this->pExt_temps = pExt_temps;
}

Boolean*
SamiNAHouseModel::getPFirstAnticipateAvail() {
    return pFirst_anticipate_avail;
}
void
SamiNAHouseModel::setPFirstAnticipateAvail(Boolean* pFirst_anticipate_avail) {
    this->pFirst_anticipate_avail = pFirst_anticipate_avail;
}

Boolean*
SamiNAHouseModel::getPFirstPidAvail() {
    return pFirst_pid_avail;
}
void
SamiNAHouseModel::setPFirstPidAvail(Boolean* pFirst_pid_avail) {
    this->pFirst_pid_avail = pFirst_pid_avail;
}

SamiNAStation*
SamiNAHouseModel::getPGefs() {
    return pGefs;
}
void
SamiNAHouseModel::setPGefs(SamiNAStation* pGefs) {
    this->pGefs = pGefs;
}

String*
SamiNAHouseModel::getPInUse() {
    return pIn_use;
}
void
SamiNAHouseModel::setPInUse(String* pIn_use) {
    this->pIn_use = pIn_use;
}

SamiNADate*
SamiNAHouseModel::getPLastComputeTry() {
    return pLast_compute_try;
}
void
SamiNAHouseModel::setPLastComputeTry(SamiNADate* pLast_compute_try) {
    this->pLast_compute_try = pLast_compute_try;
}

SamiNALinkStation*
SamiNAHouseModel::getPLinkStation() {
    return pLink_station;
}
void
SamiNAHouseModel::setPLinkStation(SamiNALinkStation* pLink_station) {
    this->pLink_station = pLink_station;
}

SamiNAPidAlgo*
SamiNAHouseModel::getPPidAlgo() {
    return pPid_algo;
}
void
SamiNAHouseModel::setPPidAlgo(SamiNAPidAlgo* pPid_algo) {
    this->pPid_algo = pPid_algo;
}

SamiNAStation*
SamiNAHouseModel::getPStation() {
    return pStation;
}
void
SamiNAHouseModel::setPStation(SamiNAStation* pStation) {
    this->pStation = pStation;
}

String*
SamiNAHouseModel::getPPreferedAlgoType() {
    return pPrefered_algo_type;
}
void
SamiNAHouseModel::setPPreferedAlgoType(String* pPrefered_algo_type) {
    this->pPrefered_algo_type = pPrefered_algo_type;
}

SamiNASimpleAlgo*
SamiNAHouseModel::getPSimpleAlgo() {
    return pSimple_algo;
}
void
SamiNAHouseModel::setPSimpleAlgo(SamiNASimpleAlgo* pSimple_algo) {
    this->pSimple_algo = pSimple_algo;
}

SamiNADate*
SamiNAHouseModel::getPTime() {
    return pTime;
}
void
SamiNAHouseModel::setPTime(SamiNADate* pTime) {
    this->pTime = pTime;
}

Boolean*
SamiNAHouseModel::getPStationFirsttimeAnticipate() {
    return pStation_firsttime_anticipate;
}
void
SamiNAHouseModel::setPStationFirsttimeAnticipate(Boolean* pStation_firsttime_anticipate) {
    this->pStation_firsttime_anticipate = pStation_firsttime_anticipate;
}

Integer*
SamiNAHouseModel::getPTimeAlgoChanged() {
    return pTime_algo_changed;
}
void
SamiNAHouseModel::setPTimeAlgoChanged(Integer* pTime_algo_changed) {
    this->pTime_algo_changed = pTime_algo_changed;
}

Integer*
SamiNAHouseModel::getPTimePidComputed() {
    return pTime_pid_computed;
}
void
SamiNAHouseModel::setPTimePidComputed(Integer* pTime_pid_computed) {
    this->pTime_pid_computed = pTime_pid_computed;
}



} /* namespace Swagger */

