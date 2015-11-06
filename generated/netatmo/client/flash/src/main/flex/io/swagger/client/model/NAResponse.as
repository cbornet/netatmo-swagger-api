package io.swagger.client.model {


    [XmlRootNode(name="NAResponse")]
    public class NAResponse {
        
        
        
        [XmlElement(name="status")]
        
        public var status: String = null;
    
        
        
        [XmlElement(name="time_exec")]
        
        public var timeExec: Number = 0.0;
    
        
        
        [XmlElement(name="time_server")]
        
        public var timeServer: Number = 0;
    

    public function toString(): String {
        var str: String = "NAResponse: ";
        
        str += " (status: " + status + ")";
        
        str += " (timeExec: " + timeExec + ")";
        
        str += " (timeServer: " + timeServer + ")";
        
        return str;
    }

}

}
