package io.swagger.client.model {

import io.swagger.client.model.NALinkStation;
import io.swagger.client.model.NAStation;
import io.swagger.client.model.NAHouseModelCa;
import io.swagger.client.model.NAPidAlgo;
import io.swagger.client.model.NASimpleAlgo;
import io.swagger.client.model.NADate;

    [XmlRootNode(name="NAHouseModel")]
    public class NAHouseModel {
        
        
        
        [XmlElement(name="algo_type")]
        
        public var algoType: String = null;
    
        
        
        [XmlElement(name="ca")]
        
        public var ca: NAHouseModelCa = null;
    
        
        
        // This declaration below of _extTemps_obj_class is to force flash compiler to include this class
        private var _extTemps_obj_class: Dictionary = null;
        [XmlElementWrapper(name="ext_temps")]
        [XmlElements(name="extTemps", type="Dictionary")]
        
        
        public var extTemps: Dictionary = new Dictionary();
    
        
        
        [XmlElement(name="first_anticipate_avail")]
        
        public var firstAnticipateAvail: Boolean = false;
    
        
        
        [XmlElement(name="first_pid_avail")]
        
        public var firstPidAvail: Boolean = false;
    
        
        
        [XmlElement(name="gefs")]
        
        public var gefs: NAStation = null;
    
        
        
        [XmlElement(name="in_use")]
        
        public var inUse: String = null;
    
        
        
        [XmlElement(name="last_compute_try")]
        
        public var lastComputeTry: NADate = null;
    
        
        
        [XmlElement(name="link_station")]
        
        public var linkStation: NALinkStation = null;
    
        
        
        [XmlElement(name="pid_algo")]
        
        public var pidAlgo: NAPidAlgo = null;
    
        
        
        [XmlElement(name="station")]
        
        public var station: NAStation = null;
    
        
        
        [XmlElement(name="prefered_algo_type")]
        
        public var preferedAlgoType: String = null;
    
        
        
        [XmlElement(name="simple_algo")]
        
        public var simpleAlgo: NASimpleAlgo = null;
    
        
        
        [XmlElement(name="time")]
        
        public var time: NADate = null;
    
        
        
        [XmlElement(name="station_firsttime_anticipate")]
        
        public var stationFirsttimeAnticipate: Boolean = false;
    
        
        
        [XmlElement(name="time_algo_changed")]
        
        public var timeAlgoChanged: Number = 0;
    
        
        
        [XmlElement(name="time_pid_computed")]
        
        public var timePidComputed: Number = 0;
    

    public function toString(): String {
        var str: String = "NAHouseModel: ";
        
        str += " (algoType: " + algoType + ")";
        
        str += " (ca: " + ca + ")";
        
        str += " (extTemps: " + extTemps + ")";
        
        str += " (firstAnticipateAvail: " + firstAnticipateAvail + ")";
        
        str += " (firstPidAvail: " + firstPidAvail + ")";
        
        str += " (gefs: " + gefs + ")";
        
        str += " (inUse: " + inUse + ")";
        
        str += " (lastComputeTry: " + lastComputeTry + ")";
        
        str += " (linkStation: " + linkStation + ")";
        
        str += " (pidAlgo: " + pidAlgo + ")";
        
        str += " (station: " + station + ")";
        
        str += " (preferedAlgoType: " + preferedAlgoType + ")";
        
        str += " (simpleAlgo: " + simpleAlgo + ")";
        
        str += " (time: " + time + ")";
        
        str += " (stationFirsttimeAnticipate: " + stationFirsttimeAnticipate + ")";
        
        str += " (timeAlgoChanged: " + timeAlgoChanged + ")";
        
        str += " (timePidComputed: " + timePidComputed + ")";
        
        return str;
    }

}

}
