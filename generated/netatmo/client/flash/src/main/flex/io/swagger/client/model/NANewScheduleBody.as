package io.swagger.client.model {


    [XmlRootNode(name="NANewScheduleBody")]
    public class NANewScheduleBody {
        
        /* Id of the schedule. It can be use with the method \&quot;switchschedule\&quot; */
        
        
        [XmlElement(name="schedule_id")]
        
        public var scheduleId: String = null;
    

    public function toString(): String {
        var str: String = "NANewScheduleBody: ";
        
        str += " (scheduleId: " + scheduleId + ")";
        
        return str;
    }

}

}
