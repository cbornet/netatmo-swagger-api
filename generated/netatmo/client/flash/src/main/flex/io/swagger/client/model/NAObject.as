package io.swagger.client.model {


    [XmlRootNode(name="NAObject")]
    public class NAObject {
        
        
        
        [XmlElement(name="$id")]
        
        public var $Id: String = null;
    

    public function toString(): String {
        var str: String = "NAObject: ";
        
        str += " ($Id: " + $Id + ")";
        
        return str;
    }

}

}
