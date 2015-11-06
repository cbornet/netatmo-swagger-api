package io.swagger.client.model {


    [XmlRootNode(name="NADate")]
    public class NADate {
        
        
        
        [XmlElement(name="sec")]
        
        public var sec: Number = 0;
    
        
        
        [XmlElement(name="usec")]
        
        public var usec: Number = 0;
    

    public function toString(): String {
        var str: String = "NADate: ";
        
        str += " (sec: " + sec + ")";
        
        str += " (usec: " + usec + ")";
        
        return str;
    }

}

}
