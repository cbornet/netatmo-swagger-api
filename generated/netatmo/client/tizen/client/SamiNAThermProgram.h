/*
 * SamiNAThermProgram.h
 * 
 * 
 */

#ifndef SamiNAThermProgram_H_
#define SamiNAThermProgram_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiNATimeTableItem.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;
#include "SamiNAZone.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiNAThermProgram: public SamiObject {
public:
    SamiNAThermProgram();
    SamiNAThermProgram(String* json);
    virtual ~SamiNAThermProgram();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiNAThermProgram* fromJson(String* obj);

    
    String* getPProgramId();
    void setPProgramId(String* pProgram_id);
    
    String* getPName();
    void setPName(String* pName);
    
    IList* getPZones();
    void setPZones(IList* pZones);
    
    IList* getPTimetable();
    void setPTimetable(IList* pTimetable);
    
    Boolean* getPSelected();
    void setPSelected(Boolean* pSelected);
    

private:
    String* pProgram_id;
    String* pName;
    IList* pZones;
    IList* pTimetable;
    Boolean* pSelected;
    
};

} /* namespace Swagger */

#endif /* SamiNAThermProgram_H_ */
