package io.swagger.client.model {

import io.swagger.client.model.NADevice;
import io.swagger.client.model.NAModule;

    [XmlRootNode(name="NADeviceListBody")]
    public class NADeviceListBody {
        
        
        
        // This declaration below of _devices_obj_class is to force flash compiler to include this class
        private var _devices_obj_class: Array = null;
        [XmlElementWrapper(name="devices")]
        [XmlElements(name="devices", type="Array")]
        
        
        public var devices: Array = new Array();
    
        
        
        // This declaration below of _modules_obj_class is to force flash compiler to include this class
        private var _modules_obj_class: Array = null;
        [XmlElementWrapper(name="modules")]
        [XmlElements(name="modules", type="Array")]
        
        
        public var modules: Array = new Array();
    

    public function toString(): String {
        var str: String = "NADeviceListBody: ";
        
        str += " (devices: " + devices + ")";
        
        str += " (modules: " + modules + ")";
        
        return str;
    }

}

}
