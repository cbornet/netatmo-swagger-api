/*
 * SWGNAThermProgram.h
 * 
 * 
 */

#ifndef SWGNAThermProgram_H_
#define SWGNAThermProgram_H_

#include <QJsonObject>


#include <QString>
#include <QList>
#include "SWGNAZone.h"
#include "SWGNATimeTableItem.h"

#include "SWGObject.h"


namespace Swagger {

class SWGNAThermProgram: public SWGObject {
public:
    SWGNAThermProgram();
    SWGNAThermProgram(QString* json);
    virtual ~SWGNAThermProgram();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGNAThermProgram* fromJson(QString &jsonString);

    QString* getProgramId();
    void setProgramId(QString* program_id);
    QString* getName();
    void setName(QString* name);
    QList<SWGNAZone*>* getZones();
    void setZones(QList<SWGNAZone*>* zones);
    QList<SWGNATimeTableItem*>* getTimetable();
    void setTimetable(QList<SWGNATimeTableItem*>* timetable);
    bool getSelected();
    void setSelected(bool selected);
    

private:
    QString* program_id;
    QString* name;
    QList<SWGNAZone*>* zones;
    QList<SWGNATimeTableItem*>* timetable;
    bool selected;
    
};

} /* namespace Swagger */

#endif /* SWGNAThermProgram_H_ */
