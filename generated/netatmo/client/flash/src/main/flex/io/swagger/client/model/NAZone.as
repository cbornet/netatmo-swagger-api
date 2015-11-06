package io.swagger.client.model {


    [XmlRootNode(name="NAZone")]
    public class NAZone {
        
        
        
        [XmlElement(name="id")]
        
        public var id: Number = 0;
    
        
        
        [XmlElement(name="type")]
        
        public var type: Number = 0;
    
        
        
        [XmlElement(name="name")]
        
        public var name: String = null;
    
        
        
        [XmlElement(name="temp")]
        
        public var temp: Number = 0.0;
    

    public function toString(): String {
        var str: String = "NAZone: ";
        
        str += " (id: " + id + ")";
        
        str += " (type: " + type + ")";
        
        str += " (name: " + name + ")";
        
        str += " (temp: " + temp + ")";
        
        return str;
    }

}

}
