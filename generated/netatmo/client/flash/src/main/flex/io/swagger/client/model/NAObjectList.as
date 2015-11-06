package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAObjectList implements ListWrapper {
        // This declaration below of _NAObject_obj_class is to force flash compiler to include this class
        private var _nAObject_obj_class: io.swagger.client.model.NAObject = null;
        [XmlElements(name="nAObject", type="io.swagger.client.model.NAObject")]
        public var nAObject: Array = new Array();

        public function getList(): Array{
            return nAObject;
        }

}
        

}
