package io.swagger.client.model {


    [XmlRootNode(name="NASimpleAlgo")]
    public class NASimpleAlgo {
        
        
        
        [XmlElement(name="high_deadband")]
        
        public var highDeadband: Number = 0;
    

    public function toString(): String {
        var str: String = "NASimpleAlgo: ";
        
        str += " (highDeadband: " + highDeadband + ")";
        
        return str;
    }

}

}
