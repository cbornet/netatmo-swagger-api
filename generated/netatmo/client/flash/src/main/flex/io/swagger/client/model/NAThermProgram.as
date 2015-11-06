package io.swagger.client.model {

import io.swagger.client.model.NATimeTableItem;
import io.swagger.client.model.NAZone;

    [XmlRootNode(name="NAThermProgram")]
    public class NAThermProgram {
        
        
        
        [XmlElement(name="program_id")]
        
        public var programId: String = null;
    
        
        
        [XmlElement(name="name")]
        
        public var name: String = null;
    
        
        
        // This declaration below of _zones_obj_class is to force flash compiler to include this class
        private var _zones_obj_class: Array = null;
        [XmlElementWrapper(name="zones")]
        [XmlElements(name="zones", type="Array")]
        
        
        public var zones: Array = new Array();
    
        
        
        // This declaration below of _timetable_obj_class is to force flash compiler to include this class
        private var _timetable_obj_class: Array = null;
        [XmlElementWrapper(name="timetable")]
        [XmlElements(name="timetable", type="Array")]
        
        
        public var timetable: Array = new Array();
    
        
        
        [XmlElement(name="selected")]
        
        public var selected: Boolean = false;
    

    public function toString(): String {
        var str: String = "NAThermProgram: ";
        
        str += " (programId: " + programId + ")";
        
        str += " (name: " + name + ")";
        
        str += " (zones: " + zones + ")";
        
        str += " (timetable: " + timetable + ")";
        
        str += " (selected: " + selected + ")";
        
        return str;
    }

}

}
