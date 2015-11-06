package io.swagger.client.model {


    [XmlRootNode(name="NAHeatingSystem")]
    public class NAHeatingSystem {
        
        
        
        [XmlElement(name="heating_energy")]
        
        public var heatingEnergy: String = null;
    
        
        
        [XmlElement(name="heating_system_window_seen")]
        
        public var heatingSystemWindowSeen: Boolean = false;
    

    public function toString(): String {
        var str: String = "NAHeatingSystem: ";
        
        str += " (heatingEnergy: " + heatingEnergy + ")";
        
        str += " (heatingSystemWindowSeen: " + heatingSystemWindowSeen + ")";
        
        return str;
    }

}

}
