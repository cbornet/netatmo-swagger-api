package io.swagger.client.model {


    [XmlRootNode(name="NASetpoint")]
    public class NASetpoint {
        
        
        
        [XmlElement(name="setpoint_temp")]
        
        public var setpointTemp: Number = 0.0;
    
        
        
        [XmlElement(name="setpoint_endtime")]
        
        public var setpointEndtime: Number = 0;
    
        
        
        [XmlElement(name="setpoint_mode")]
        
        public var setpointMode: String = null;
    

    public function toString(): String {
        var str: String = "NASetpoint: ";
        
        str += " (setpointTemp: " + setpointTemp + ")";
        
        str += " (setpointEndtime: " + setpointEndtime + ")";
        
        str += " (setpointMode: " + setpointMode + ")";
        
        return str;
    }

}

}
