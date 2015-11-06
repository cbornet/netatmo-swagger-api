package io.swagger.client.model {

import io.swagger.client.model.NAResponse;
import io.swagger.client.model.NAThermStateBody;

    [XmlRootNode(name="NAThermStateResponse")]
    public class NAThermStateResponse {
        
        
        
        [XmlElement(name="time_server")]
        
        public var timeServer: Number = 0;
    
        
        
        [XmlElement(name="time_exec")]
        
        public var timeExec: Number = 0.0;
    
        
        
        [XmlElement(name="body")]
        
        public var body: NAThermStateBody = null;
    
        
        
        [XmlElement(name="status")]
        
        public var status: String = null;
    

    public function toString(): String {
        var str: String = "NAThermStateResponse: ";
        
        str += " (timeServer: " + timeServer + ")";
        
        str += " (timeExec: " + timeExec + ")";
        
        str += " (body: " + body + ")";
        
        str += " (status: " + status + ")";
        
        return str;
    }

}

}
