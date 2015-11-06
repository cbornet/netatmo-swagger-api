package io.swagger.client.model {

import io.swagger.client.model.NAHeatingSystem;
import io.swagger.client.model.NAHouseModel;
import io.swagger.client.model.Object;
import io.swagger.client.model.NAPlace;
import io.swagger.client.model.NAThermProgram;
import io.swagger.client.model.NADate;

    [XmlRootNode(name="NADevice")]
    public class NADevice {
        
        
        
        [XmlElement(name="_id")]
        
        public var id: String = null;
    
        
        
        [XmlElement(name="behavior")]
        
        public var behavior: Number = 0;
    
        
        
        [XmlElement(name="cipher_id")]
        
        public var cipherId: String = null;
    
        
        
        [XmlElement(name="date_setup")]
        
        public var dateSetup: NADate = null;
    
        
        
        [XmlElement(name="firmware")]
        
        public var firmware: Number = 0;
    
        
        
        [XmlElement(name="hw_version")]
        
        public var hwVersion: Number = 0;
    
        
        
        [XmlElement(name="heating_system")]
        
        public var heatingSystem: NAHeatingSystem = null;
    
        
        
        [XmlElement(name="house_model")]
        
        public var houseModel: NAHouseModel = null;
    
        
        
        [XmlElement(name="ip")]
        
        public var ip: String = null;
    
        
        
        [XmlElement(name="last_fw_update")]
        
        public var lastFwUpdate: Number = 0;
    
        
        
        [XmlElement(name="last_radio_store")]
        
        public var lastRadioStore: Number = 0;
    
        
        
        [XmlElement(name="last_status_store")]
        
        public var lastStatusStore: Number = 0;
    
        
        
        [XmlElement(name="last_upgrade")]
        
        public var lastUpgrade: Number = 0;
    
        
        
        [XmlElement(name="module_name")]
        
        public var moduleName: String = null;
    
        /* It lists which modules are linked with this device */
        
        
        // This declaration below of _modules_obj_class is to force flash compiler to include this class
        private var _modules_obj_class: Array = null;
        [XmlElementWrapper(name="modules")]
        [XmlElements(name="modules", type="Array")]
        
        
        public var modules: Array = new Array();
    
        
        
        [XmlElement(name="place")]
        
        public var place: NAPlace = null;
    
        
        
        [XmlElement(name="setpoint")]
        
        public var setpoint: Object = null;
    
        
        
        [XmlElement(name="setpoint_default_duration")]
        
        public var setpointDefaultDuration: Number = 0;
    
        
        
        // This declaration below of _setpointOrder_obj_class is to force flash compiler to include this class
        private var _setpointOrder_obj_class: Dictionary = null;
        [XmlElementWrapper(name="setpoint_order")]
        [XmlElements(name="setpointOrder", type="Dictionary")]
        
        
        public var setpointOrder: Dictionary = new Dictionary();
    
        
        
        [XmlElement(name="public_ext_data")]
        
        public var publicExtData: Boolean = false;
    
        
        
        [XmlElement(name="station_name")]
        
        public var stationName: String = null;
    
        
        
        // This declaration below of _thermProgram_obj_class is to force flash compiler to include this class
        private var _thermProgram_obj_class: Dictionary = null;
        [XmlElementWrapper(name="therm_program")]
        [XmlElements(name="thermProgram", type="Dictionary")]
        
        
        public var thermProgram: Dictionary = new Dictionary();
    
        
        
        // This declaration below of _thermProgramBackup_obj_class is to force flash compiler to include this class
        private var _thermProgramBackup_obj_class: Dictionary = null;
        [XmlElementWrapper(name="therm_program_backup")]
        [XmlElements(name="thermProgramBackup", type="Dictionary")]
        
        
        public var thermProgramBackup: Dictionary = new Dictionary();
    
        
        
        // This declaration below of _thermProgramOrder_obj_class is to force flash compiler to include this class
        private var _thermProgramOrder_obj_class: Dictionary = null;
        [XmlElementWrapper(name="therm_program_order")]
        [XmlElements(name="thermProgramOrder", type="Dictionary")]
        
        
        public var thermProgramOrder: Dictionary = new Dictionary();
    
        /* Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module */
        
        
        [XmlElement(name="type")]
        
        public var type: String = null;
    
        
        
        // This declaration below of _userOwner_obj_class is to force flash compiler to include this class
        private var _userOwner_obj_class: Array = null;
        [XmlElementWrapper(name="user_owner")]
        [XmlElements(name="userOwner", type="Array")]
        
        
        public var userOwner: Array = new Array();
    
        
        
        [XmlElement(name="udp_conn")]
        
        public var udpConn: Boolean = false;
    
        /* It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal */
        
        
        [XmlElement(name="wifi_status")]
        
        public var wifiStatus: Number = 0;
    
        
        
        [XmlElement(name="new_feature_avail")]
        
        public var newFeatureAvail: Boolean = false;
    
        
        
        [XmlElement(name="first_pid_avail")]
        
        public var firstPidAvail: Boolean = false;
    
        
        
        // This declaration below of _dataType_obj_class is to force flash compiler to include this class
        private var _dataType_obj_class: Array = null;
        [XmlElementWrapper(name="data_type")]
        [XmlElements(name="dataType", type="Array")]
        
        
        public var dataType: Array = new Array();
    

    public function toString(): String {
        var str: String = "NADevice: ";
        
        str += " (id: " + id + ")";
        
        str += " (behavior: " + behavior + ")";
        
        str += " (cipherId: " + cipherId + ")";
        
        str += " (dateSetup: " + dateSetup + ")";
        
        str += " (firmware: " + firmware + ")";
        
        str += " (hwVersion: " + hwVersion + ")";
        
        str += " (heatingSystem: " + heatingSystem + ")";
        
        str += " (houseModel: " + houseModel + ")";
        
        str += " (ip: " + ip + ")";
        
        str += " (lastFwUpdate: " + lastFwUpdate + ")";
        
        str += " (lastRadioStore: " + lastRadioStore + ")";
        
        str += " (lastStatusStore: " + lastStatusStore + ")";
        
        str += " (lastUpgrade: " + lastUpgrade + ")";
        
        str += " (moduleName: " + moduleName + ")";
        
        str += " (modules: " + modules + ")";
        
        str += " (place: " + place + ")";
        
        str += " (setpoint: " + setpoint + ")";
        
        str += " (setpointDefaultDuration: " + setpointDefaultDuration + ")";
        
        str += " (setpointOrder: " + setpointOrder + ")";
        
        str += " (publicExtData: " + publicExtData + ")";
        
        str += " (stationName: " + stationName + ")";
        
        str += " (thermProgram: " + thermProgram + ")";
        
        str += " (thermProgramBackup: " + thermProgramBackup + ")";
        
        str += " (thermProgramOrder: " + thermProgramOrder + ")";
        
        str += " (type: " + type + ")";
        
        str += " (userOwner: " + userOwner + ")";
        
        str += " (udpConn: " + udpConn + ")";
        
        str += " (wifiStatus: " + wifiStatus + ")";
        
        str += " (newFeatureAvail: " + newFeatureAvail + ")";
        
        str += " (firstPidAvail: " + firstPidAvail + ")";
        
        str += " (dataType: " + dataType + ")";
        
        return str;
    }

}

}
