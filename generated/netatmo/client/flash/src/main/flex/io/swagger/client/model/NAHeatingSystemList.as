package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAHeatingSystemList implements ListWrapper {
        // This declaration below of _NAHeatingSystem_obj_class is to force flash compiler to include this class
        private var _nAHeatingSystem_obj_class: io.swagger.client.model.NAHeatingSystem = null;
        [XmlElements(name="nAHeatingSystem", type="io.swagger.client.model.NAHeatingSystem")]
        public var nAHeatingSystem: Array = new Array();

        public function getList(): Array{
            return nAHeatingSystem;
        }

}
        

}
