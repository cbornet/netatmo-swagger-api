package io.swagger.client.model {


    [XmlRootNode(name="NAStation")]
    public class NAStation {
        
        
        
        [XmlElement(name="lag_down")]
        
        public var lagDown: Number = 0;
    
        
        
        [XmlElement(name="lag_up")]
        
        public var lagUp: Number = 0;
    
        
        
        [XmlElement(name="off_overshoot")]
        
        public var offOvershoot: Number = 0.0;
    
        
        
        [XmlElement(name="on_overshoot")]
        
        public var onOvershoot: Number = 0.0;
    
        
        
        [XmlElement(name="pk")]
        
        public var pk: Number = 0;
    
        
        
        [XmlElement(name="tau")]
        
        public var tau: Number = 0;
    

    public function toString(): String {
        var str: String = "NAStation: ";
        
        str += " (lagDown: " + lagDown + ")";
        
        str += " (lagUp: " + lagUp + ")";
        
        str += " (offOvershoot: " + offOvershoot + ")";
        
        str += " (onOvershoot: " + onOvershoot + ")";
        
        str += " (pk: " + pk + ")";
        
        str += " (tau: " + tau + ")";
        
        return str;
    }

}

}
