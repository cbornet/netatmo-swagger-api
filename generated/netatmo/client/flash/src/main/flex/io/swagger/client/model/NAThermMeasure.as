package io.swagger.client.model {


    [XmlRootNode(name="NAThermMeasure")]
    public class NAThermMeasure {
        
        
        
        [XmlElement(name="time")]
        
        public var time: Number = 0;
    
        
        
        [XmlElement(name="temperature")]
        
        public var temperature: Number = 0.0;
    
        
        
        [XmlElement(name="setpoint_temp")]
        
        public var setpointTemp: Number = 0.0;
    

    public function toString(): String {
        var str: String = "NAThermMeasure: ";
        
        str += " (time: " + time + ")";
        
        str += " (temperature: " + temperature + ")";
        
        str += " (setpointTemp: " + setpointTemp + ")";
        
        return str;
    }

}

}
