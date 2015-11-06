package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAZoneList implements ListWrapper {
        // This declaration below of _NAZone_obj_class is to force flash compiler to include this class
        private var _nAZone_obj_class: io.swagger.client.model.NAZone = null;
        [XmlElements(name="nAZone", type="io.swagger.client.model.NAZone")]
        public var nAZone: Array = new Array();

        public function getList(): Array{
            return nAZone;
        }

}
        

}
