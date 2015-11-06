package io.swagger.client.model {


    [XmlRootNode(name="NAPlace")]
    public class NAPlace {
        
        
        
        [XmlElement(name="city")]
        
        public var city: String = null;
    
        
        
        [XmlElement(name="altitude")]
        
        public var altitude: Number = 0.0;
    
        
        
        [XmlElement(name="country")]
        
        public var country: String = null;
    
        
        
        [XmlElement(name="from_ip")]
        
        public var fromIp: Boolean = false;
    
        
        
        [XmlElement(name="improveLocProposed")]
        
        public var improveLocProposed: Boolean = false;
    
        
        
        // This declaration below of _location_obj_class is to force flash compiler to include this class
        private var _location_obj_class: Array = null;
        [XmlElementWrapper(name="location")]
        [XmlElements(name="location", type="Array")]
        
        
        public var location: Array = new Array();
    
        
        
        [XmlElement(name="timezone")]
        
        public var timezone: String = null;
    
        
        
        [XmlElement(name="trust_location")]
        
        public var trustLocation: Boolean = false;
    

    public function toString(): String {
        var str: String = "NAPlace: ";
        
        str += " (city: " + city + ")";
        
        str += " (altitude: " + altitude + ")";
        
        str += " (country: " + country + ")";
        
        str += " (fromIp: " + fromIp + ")";
        
        str += " (improveLocProposed: " + improveLocProposed + ")";
        
        str += " (location: " + location + ")";
        
        str += " (timezone: " + timezone + ")";
        
        str += " (trustLocation: " + trustLocation + ")";
        
        return str;
    }

}

}
