package io.swagger.client.model {


    [XmlRootNode(name="NAMeasureBodyElem")]
    public class NAMeasureBodyElem {
        
        
        
        [XmlElement(name="beg_time")]
        
        public var begTime: Number = 0;
    
        
        
        [XmlElement(name="step_time")]
        
        public var stepTime: Number = 0;
    
        
        
        // This declaration below of _value_obj_class is to force flash compiler to include this class
        private var _value_obj_class: Array = null;
        [XmlElementWrapper(name="value")]
        [XmlElements(name="value", type="Array")]
        
        
        public var value: Array = new Array();
    

    public function toString(): String {
        var str: String = "NAMeasureBodyElem: ";
        
        str += " (begTime: " + begTime + ")";
        
        str += " (stepTime: " + stepTime + ")";
        
        str += " (value: " + value + ")";
        
        return str;
    }

}

}
