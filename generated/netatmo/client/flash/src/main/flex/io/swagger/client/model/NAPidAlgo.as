package io.swagger.client.model {


    [XmlRootNode(name="NAPidAlgo")]
    public class NAPidAlgo {
        
        
        
        [XmlElement(name="gain")]
        
        public var gain: Number = 0;
    
        
        
        [XmlElement(name="period")]
        
        public var period: Number = 0;
    
        
        
        [XmlElement(name="td")]
        
        public var td: Number = 0;
    
        
        
        [XmlElement(name="ti")]
        
        public var ti: Number = 0;
    

    public function toString(): String {
        var str: String = "NAPidAlgo: ";
        
        str += " (gain: " + gain + ")";
        
        str += " (period: " + period + ")";
        
        str += " (td: " + td + ")";
        
        str += " (ti: " + ti + ")";
        
        return str;
    }

}

}
