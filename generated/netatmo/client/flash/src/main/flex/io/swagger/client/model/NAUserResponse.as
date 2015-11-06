package io.swagger.client.model {

import io.swagger.client.model.NAUserBody;
import io.swagger.client.model.NAResponse;

    [XmlRootNode(name="NAUserResponse")]
    public class NAUserResponse {
        
        
        
        [XmlElement(name="time_server")]
        
        public var timeServer: Number = 0;
    
        
        
        [XmlElement(name="time_exec")]
        
        public var timeExec: Number = 0.0;
    
        
        
        [XmlElement(name="body")]
        
        public var body: NAUserBody = null;
    
        
        
        [XmlElement(name="status")]
        
        public var status: String = null;
    

    public function toString(): String {
        var str: String = "NAUserResponse: ";
        
        str += " (timeServer: " + timeServer + ")";
        
        str += " (timeExec: " + timeExec + ")";
        
        str += " (body: " + body + ")";
        
        str += " (status: " + status + ")";
        
        return str;
    }

}

}
