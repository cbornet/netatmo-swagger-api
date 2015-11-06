package io.swagger.client.model {

import io.swagger.client.model.NAUserAdministrative;
import io.swagger.client.model.NADate;

    [XmlRootNode(name="NAUserBody")]
    public class NAUserBody {
        
        
        
        [XmlElement(name="_id")]
        
        public var id: String = null;
    
        /* Contains administrative information related to the user */
        
        
        [XmlElement(name="administrative")]
        
        public var administrative: NAUserAdministrative = null;
    
        
        
        [XmlElement(name="date_creation")]
        
        public var dateCreation: NADate = null;
    
        /* An array of string containing the ids of the devices owned by the user */
        
        
        // This declaration below of _devices_obj_class is to force flash compiler to include this class
        private var _devices_obj_class: Array = null;
        [XmlElementWrapper(name="devices")]
        [XmlElements(name="devices", type="Array")]
        
        
        public var devices: Array = new Array();
    
        /* An array of string containing the ids of the devices on which the user has a \&quot;guest\&quot; access */
        
        
        // This declaration below of _friendDevices_obj_class is to force flash compiler to include this class
        private var _friendDevices_obj_class: Array = null;
        [XmlElementWrapper(name="friend_devices")]
        [XmlElements(name="friendDevices", type="Array")]
        
        
        public var friendDevices: Array = new Array();
    
        
        
        [XmlElement(name="mail")]
        
        public var mail: String = null;
    
        
        
        [XmlElement(name="timeline_not_read")]
        
        public var timelineNotRead: Number = 0;
    
        
        
        [XmlElement(name="timeline_size")]
        
        public var timelineSize: Number = 0;
    

    public function toString(): String {
        var str: String = "NAUserBody: ";
        
        str += " (id: " + id + ")";
        
        str += " (administrative: " + administrative + ")";
        
        str += " (dateCreation: " + dateCreation + ")";
        
        str += " (devices: " + devices + ")";
        
        str += " (friendDevices: " + friendDevices + ")";
        
        str += " (mail: " + mail + ")";
        
        str += " (timelineNotRead: " + timelineNotRead + ")";
        
        str += " (timelineSize: " + timelineSize + ")";
        
        return str;
    }

}

}
