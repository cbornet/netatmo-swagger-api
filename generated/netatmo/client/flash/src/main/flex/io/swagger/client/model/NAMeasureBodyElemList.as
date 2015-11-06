package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAMeasureBodyElemList implements ListWrapper {
        // This declaration below of _NAMeasureBodyElem_obj_class is to force flash compiler to include this class
        private var _nAMeasureBodyElem_obj_class: io.swagger.client.model.NAMeasureBodyElem = null;
        [XmlElements(name="nAMeasureBodyElem", type="io.swagger.client.model.NAMeasureBodyElem")]
        public var nAMeasureBodyElem: Array = new Array();

        public function getList(): Array{
            return nAMeasureBodyElem;
        }

}
        

}
