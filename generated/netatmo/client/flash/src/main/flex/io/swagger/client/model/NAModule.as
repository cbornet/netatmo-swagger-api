package io.swagger.client.model {

import io.swagger.client.model.NADashboardData;
import io.swagger.client.model.NADate;

    [XmlRootNode(name="NAModule")]
    public class NAModule {
        
        
        
        [XmlElement(name="_id")]
        
        public var id: String = null;
    
        
        
        [XmlElement(name="date_setup")]
        
        public var dateSetup: NADate = null;
    
        
        
        [XmlElement(name="firmware")]
        
        public var firmware: Number = 0;
    
        /* Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module */
        
        
        [XmlElement(name="type")]
        
        public var type: String = null;
    
        
        
        [XmlElement(name="module_name")]
        
        public var moduleName: String = null;
    
        
        
        [XmlElement(name="main_device")]
        
        public var mainDevice: String = null;
    
        
        
        [XmlElement(name="last_message")]
        
        public var lastMessage: Number = 0;
    
        
        
        [XmlElement(name="last_seen")]
        
        public var lastSeen: Number = 0;
    
        
        
        [XmlElement(name="public_ext_data")]
        
        public var publicExtData: Boolean = false;
    
        /* \&quot;It contains the current radio status. The different thresholds to take into account are :\&quot; |\nRADIO_THRESHOLD_SIGNAL_LOW = 90 \nRADIO_THRESHOLD_SIGNAL_MEDIUM = 80\nRADIO_THRESHOLD_SIGNAL_HIGH = 70\nRADIO_THRESHOLD_SIGNAL_FULL = 60 */
        
        
        [XmlElement(name="rf_status")]
        
        public var rfStatus: Number = 0;
    
        /* It contains the current battery status. The threshold depends on the kind of module, below is the list of the different threshold to take into account according the module type.\n\&quot;Indoor module Battery range: 6000 ... 4200\&quot; |\nINDOOR_BATTERY_LEVEL_FULL = 5640\nINDOOR_BATTERY_LEVEL_HIGH = 5280\nINDOOR_BATTERY_LEVEL_MEDIUM = 4920\nINDOOR_BATTERY_LEVEL_LOW = 4560\n\&quot;Below 4560: very low\&quot; |\n  \n\&quot;Raingauge and outdoor module Battery range: 6000 ... 3600\&quot; |\nBATTERY_LEVEL_FULL = 5500\nBATTERY_LEVEL_HIGH = 5000\nBATTERY_LEVEL_MEDIUM = 4500\nBATTERY_LEVEL_LOW = 4000\n\&quot;Below 4000: very low\&quot; |\n  \n\&quot;Thermostat Battery range: 4500 ... 3000\&quot; |\nTHERMOSTAT_BATTERY_LEVEL_FULL = 4100\nTHERMOSTAT_BATTERY_LEVEL_HIGH = 3600\nTHERMOSTAT_BATTERY_LEVEL_MEDIUM = 3300\nTHERMOSTAT_BATTERY_LEVEL_LOW = 3000\n\&quot;Below 3000: very low\&quot; */
        
        
        [XmlElement(name="battery_vp")]
        
        public var batteryVp: Number = 0;
    
        
        
        [XmlElement(name="therm_orientation")]
        
        public var thermOrientation: Number = 0;
    
        
        
        [XmlElement(name="therm_relay_cmd")]
        
        public var thermRelayCmd: Number = 0;
    
        /* It contains all the measurements that can be displayed on the dashboard */
        
        
        [XmlElement(name="dashboard_data")]
        
        public var dashboardData: NADashboardData = null;
    
        
        
        // This declaration below of _dataType_obj_class is to force flash compiler to include this class
        private var _dataType_obj_class: Array = null;
        [XmlElementWrapper(name="data_type")]
        [XmlElements(name="dataType", type="Array")]
        
        
        public var dataType: Array = new Array();
    

    public function toString(): String {
        var str: String = "NAModule: ";
        
        str += " (id: " + id + ")";
        
        str += " (dateSetup: " + dateSetup + ")";
        
        str += " (firmware: " + firmware + ")";
        
        str += " (type: " + type + ")";
        
        str += " (moduleName: " + moduleName + ")";
        
        str += " (mainDevice: " + mainDevice + ")";
        
        str += " (lastMessage: " + lastMessage + ")";
        
        str += " (lastSeen: " + lastSeen + ")";
        
        str += " (publicExtData: " + publicExtData + ")";
        
        str += " (rfStatus: " + rfStatus + ")";
        
        str += " (batteryVp: " + batteryVp + ")";
        
        str += " (thermOrientation: " + thermOrientation + ")";
        
        str += " (thermRelayCmd: " + thermRelayCmd + ")";
        
        str += " (dashboardData: " + dashboardData + ")";
        
        str += " (dataType: " + dataType + ")";
        
        return str;
    }

}

}
