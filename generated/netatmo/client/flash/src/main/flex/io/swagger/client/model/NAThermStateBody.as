package io.swagger.client.model {

import io.swagger.client.model.NAThermMeasure;
import io.swagger.client.model.NASetpoint;
import io.swagger.client.model.NAThermProgram;

    [XmlRootNode(name="NAThermStateBody")]
    public class NAThermStateBody {
        
        
        
        [XmlElement(name="setpoint")]
        
        public var setpoint: NASetpoint = null;
    
        
        
        [XmlElement(name="setpoint_order")]
        
        public var setpointOrder: NASetpoint = null;
    
        
        
        [XmlElement(name="therm_program")]
        
        public var thermProgram: NAThermProgram = null;
    
        
        
        // This declaration below of _thermProgramBackup_obj_class is to force flash compiler to include this class
        private var _thermProgramBackup_obj_class: Array = null;
        [XmlElementWrapper(name="therm_program_backup")]
        [XmlElements(name="thermProgramBackup", type="Array")]
        
        
        public var thermProgramBackup: Array = new Array();
    
        
        
        [XmlElement(name="therm_program_order")]
        
        public var thermProgramOrder: NAThermProgram = null;
    
        
        
        [XmlElement(name="therm_orientation")]
        
        public var thermOrientation: Number = 0;
    
        
        
        [XmlElement(name="therm_relay_cmd")]
        
        public var thermRelayCmd: Number = 0;
    
        
        
        [XmlElement(name="battery_vp")]
        
        public var batteryVp: Number = 0;
    
        
        
        [XmlElement(name="rf_status")]
        
        public var rfStatus: Number = 0;
    
        
        
        [XmlElement(name="plug_connected_boiler")]
        
        public var plugConnectedBoiler: Boolean = false;
    
        
        
        [XmlElement(name="udp_conn")]
        
        public var udpConn: Boolean = false;
    
        
        
        [XmlElement(name="last_therm_seen")]
        
        public var lastThermSeen: Number = 0;
    
        
        
        [XmlElement(name="last_plug_seen")]
        
        public var lastPlugSeen: Number = 0;
    
        
        
        [XmlElement(name="wifi_status")]
        
        public var wifiStatus: Number = 0;
    
        
        
        [XmlElement(name="measured")]
        
        public var measured: NAThermMeasure = null;
    

    public function toString(): String {
        var str: String = "NAThermStateBody: ";
        
        str += " (setpoint: " + setpoint + ")";
        
        str += " (setpointOrder: " + setpointOrder + ")";
        
        str += " (thermProgram: " + thermProgram + ")";
        
        str += " (thermProgramBackup: " + thermProgramBackup + ")";
        
        str += " (thermProgramOrder: " + thermProgramOrder + ")";
        
        str += " (thermOrientation: " + thermOrientation + ")";
        
        str += " (thermRelayCmd: " + thermRelayCmd + ")";
        
        str += " (batteryVp: " + batteryVp + ")";
        
        str += " (rfStatus: " + rfStatus + ")";
        
        str += " (plugConnectedBoiler: " + plugConnectedBoiler + ")";
        
        str += " (udpConn: " + udpConn + ")";
        
        str += " (lastThermSeen: " + lastThermSeen + ")";
        
        str += " (lastPlugSeen: " + lastPlugSeen + ")";
        
        str += " (wifiStatus: " + wifiStatus + ")";
        
        str += " (measured: " + measured + ")";
        
        return str;
    }

}

}
