
#include "SWGNAThermProgram.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGNAThermProgram::SWGNAThermProgram(QString* json) {
    init();
    this->fromJson(*json);
}

SWGNAThermProgram::SWGNAThermProgram() {
    init();
}

SWGNAThermProgram::~SWGNAThermProgram() {
    this->cleanup();
}

void
SWGNAThermProgram::init() {
    program_id = new QString("");
    name = new QString("");
    zones = new QList<SWGNAZone*>();
    timetable = new QList<SWGNATimeTableItem*>();
    selected = false;
    
}

void
SWGNAThermProgram::cleanup() {
    if(program_id != NULL) {
        delete program_id;
    }
    if(name != NULL) {
        delete name;
    }
    if(zones != NULL) {
        QList<SWGNAZone*>* arr = zones;
        foreach(SWGNAZone* o, *arr) {
            delete o;
        }
        delete zones;
    }
    if(timetable != NULL) {
        QList<SWGNATimeTableItem*>* arr = timetable;
        foreach(SWGNATimeTableItem* o, *arr) {
            delete o;
        }
        delete timetable;
    }
    
    
}

SWGNAThermProgram*
SWGNAThermProgram::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGNAThermProgram::fromJsonObject(QJsonObject &pJson) {
    setValue(&program_id, pJson["program_id"], "QString", "QString");
    setValue(&name, pJson["name"], "QString", "QString");
    setValue(&zones, pJson["zones"], "QList", "SWGNAZone");
    setValue(&timetable, pJson["timetable"], "QList", "SWGNATimeTableItem");
    setValue(&selected, pJson["selected"], "bool", "");
    
}

QString
SWGNAThermProgram::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGNAThermProgram::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("program_id"), program_id, obj, QString("QString"));
    
    
    
    
    
    toJsonValue(QString("name"), name, obj, QString("QString"));
    
    
    
    
    
    QList<SWGNAZone*>* zonesList = zones;
    QJsonArray zonesJsonArray;
    toJsonArray((QList<void*>*)zones, &zonesJsonArray, "zones", "SWGNAZone");

    obj->insert("zones", zonesJsonArray);
    
    
    
    
    QList<SWGNATimeTableItem*>* timetableList = timetable;
    QJsonArray timetableJsonArray;
    toJsonArray((QList<void*>*)timetable, &timetableJsonArray, "timetable", "SWGNATimeTableItem");

    obj->insert("timetable", timetableJsonArray);
    
    
    obj->insert("selected", QJsonValue(selected));
    

    return obj;
}

QString*
SWGNAThermProgram::getProgramId() {
    return program_id;
}
void
SWGNAThermProgram::setProgramId(QString* program_id) {
    this->program_id = program_id;
}

QString*
SWGNAThermProgram::getName() {
    return name;
}
void
SWGNAThermProgram::setName(QString* name) {
    this->name = name;
}

QList<SWGNAZone*>*
SWGNAThermProgram::getZones() {
    return zones;
}
void
SWGNAThermProgram::setZones(QList<SWGNAZone*>* zones) {
    this->zones = zones;
}

QList<SWGNATimeTableItem*>*
SWGNAThermProgram::getTimetable() {
    return timetable;
}
void
SWGNAThermProgram::setTimetable(QList<SWGNATimeTableItem*>* timetable) {
    this->timetable = timetable;
}

bool
SWGNAThermProgram::getSelected() {
    return selected;
}
void
SWGNAThermProgram::setSelected(bool selected) {
    this->selected = selected;
}



} /* namespace Swagger */

