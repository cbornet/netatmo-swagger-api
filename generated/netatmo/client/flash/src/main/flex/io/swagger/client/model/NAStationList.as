package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAStationList implements ListWrapper {
        // This declaration below of _NAStation_obj_class is to force flash compiler to include this class
        private var _nAStation_obj_class: io.swagger.client.model.NAStation = null;
        [XmlElements(name="nAStation", type="io.swagger.client.model.NAStation")]
        public var nAStation: Array = new Array();

        public function getList(): Array{
            return nAStation;
        }

}
        

}
