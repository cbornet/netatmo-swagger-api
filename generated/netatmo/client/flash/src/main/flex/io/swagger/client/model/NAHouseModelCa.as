package io.swagger.client.model {


    [XmlRootNode(name="NAHouseModelCa")]
    public class NAHouseModelCa {
        
        
        
        [XmlElement(name="te")]
        
        public var te: Number = 0.0;
    
        
        
        [XmlElement(name="ti")]
        
        public var ti: Number = 0;
    
        
        
        [XmlElement(name="so")]
        
        public var so: String = null;
    

    public function toString(): String {
        var str: String = "NAHouseModelCa: ";
        
        str += " (te: " + te + ")";
        
        str += " (ti: " + ti + ")";
        
        str += " (so: " + so + ")";
        
        return str;
    }

}

}
