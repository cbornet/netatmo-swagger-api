package io.swagger.client.model {

import io.swagger.client.model.NAResponse;
import io.swagger.client.model.NAMeasureBodyElem;

    [XmlRootNode(name="NAMeasureResponse")]
    public class NAMeasureResponse {
        
        
        
        [XmlElement(name="time_server")]
        
        public var timeServer: Number = 0;
    
        
        
        [XmlElement(name="time_exec")]
        
        public var timeExec: Number = 0.0;
    
        
        
        // This declaration below of _body_obj_class is to force flash compiler to include this class
        private var _body_obj_class: Array = null;
        [XmlElementWrapper(name="body")]
        [XmlElements(name="body", type="Array")]
        
        
        public var body: Array = new Array();
    
        
        
        [XmlElement(name="status")]
        
        public var status: String = null;
    

    public function toString(): String {
        var str: String = "NAMeasureResponse: ";
        
        str += " (timeServer: " + timeServer + ")";
        
        str += " (timeExec: " + timeExec + ")";
        
        str += " (body: " + body + ")";
        
        str += " (status: " + status + ")";
        
        return str;
    }

}

}
