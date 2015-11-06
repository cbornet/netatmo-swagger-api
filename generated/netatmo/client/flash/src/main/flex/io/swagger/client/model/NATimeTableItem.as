package io.swagger.client.model {


    [XmlRootNode(name="NATimeTableItem")]
    public class NATimeTableItem {
        
        
        
        [XmlElement(name="id")]
        
        public var id: Number = 0;
    
        
        
        [XmlElement(name="m_offset")]
        
        public var mOffset: Number = 0;
    

    public function toString(): String {
        var str: String = "NATimeTableItem: ";
        
        str += " (id: " + id + ")";
        
        str += " (mOffset: " + mOffset + ")";
        
        return str;
    }

}

}
