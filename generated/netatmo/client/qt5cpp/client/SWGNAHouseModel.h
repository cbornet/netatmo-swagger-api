/*
 * SWGNAHouseModel.h
 * 
 * 
 */

#ifndef SWGNAHouseModel_H_
#define SWGNAHouseModel_H_

#include <QJsonObject>


#include "SWGNALinkStation.h"
#include <QString>
#include "SWGNAStation.h"
#include <QList>
#include "SWGNAHouseModelCa.h"
#include "SWGNADate.h"
#include "SWGNASimpleAlgo.h"
#include "SWGNAPidAlgo.h"
#include "QMap.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAHouseModel: public SWGObject {
public:
    SWGNAHouseModel();
    SWGNAHouseModel(QString* json);
    virtual ~SWGNAHouseModel();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAHouseModel* fromJson(QString &jsonString);

    QString* getAlgoType();
    void setAlgoType(QString* algo_type);
    SWGNAHouseModelCa* getCa();
    void setCa(SWGNAHouseModelCa* ca);
    QMap<QString, qint32>* getExtTemps();
    void setExtTemps(QMap<QString, qint32>* ext_temps);
    bool getFirstAnticipateAvail();
    void setFirstAnticipateAvail(bool first_anticipate_avail);
    bool getFirstPidAvail();
    void setFirstPidAvail(bool first_pid_avail);
    SWGNAStation* getGefs();
    void setGefs(SWGNAStation* gefs);
    QString* getInUse();
    void setInUse(QString* in_use);
    SWGNADate* getLastComputeTry();
    void setLastComputeTry(SWGNADate* last_compute_try);
    SWGNALinkStation* getLinkStation();
    void setLinkStation(SWGNALinkStation* link_station);
    SWGNAPidAlgo* getPidAlgo();
    void setPidAlgo(SWGNAPidAlgo* pid_algo);
    SWGNAStation* getStation();
    void setStation(SWGNAStation* station);
    QString* getPreferedAlgoType();
    void setPreferedAlgoType(QString* prefered_algo_type);
    SWGNASimpleAlgo* getSimpleAlgo();
    void setSimpleAlgo(SWGNASimpleAlgo* simple_algo);
    SWGNADate* getTime();
    void setTime(SWGNADate* time);
    bool getStationFirsttimeAnticipate();
    void setStationFirsttimeAnticipate(bool station_firsttime_anticipate);
    qint32 getTimeAlgoChanged();
    void setTimeAlgoChanged(qint32 time_algo_changed);
    qint32 getTimePidComputed();
    void setTimePidComputed(qint32 time_pid_computed);
    

private:
    QString* algo_type;
    SWGNAHouseModelCa* ca;
    QMap<QString, qint32>* ext_temps;
    bool first_anticipate_avail;
    bool first_pid_avail;
    SWGNAStation* gefs;
    QString* in_use;
    SWGNADate* last_compute_try;
    SWGNALinkStation* link_station;
    SWGNAPidAlgo* pid_algo;
    SWGNAStation* station;
    QString* prefered_algo_type;
    SWGNASimpleAlgo* simple_algo;
    SWGNADate* time;
    bool station_firsttime_anticipate;
    qint32 time_algo_changed;
    qint32 time_pid_computed;
    
};

} /* namespace Swagger */

#endif /* SWGNAHouseModel_H_ */
