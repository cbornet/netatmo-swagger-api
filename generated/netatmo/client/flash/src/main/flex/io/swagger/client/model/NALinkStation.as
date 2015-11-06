package io.swagger.client.model {


    [XmlRootNode(name="NALinkStation")]
    public class NALinkStation {
        
        
        
        [XmlElement(name="mac")]
        
        public var mac: String = null;
    
        
        
        [XmlElement(name="ext")]
        
        public var ext: String = null;
    
        
        
        [XmlElement(name="Temperature")]
        
        public var temperature: Number = 0.0;
    

    public function toString(): String {
        var str: String = "NALinkStation: ";
        
        str += " (mac: " + mac + ")";
        
        str += " (ext: " + ext + ")";
        
        str += " (temperature: " + temperature + ")";
        
        return str;
    }

}

}
