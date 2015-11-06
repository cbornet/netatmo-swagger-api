package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAPlaceList implements ListWrapper {
        // This declaration below of _NAPlace_obj_class is to force flash compiler to include this class
        private var _nAPlace_obj_class: io.swagger.client.model.NAPlace = null;
        [XmlElements(name="nAPlace", type="io.swagger.client.model.NAPlace")]
        public var nAPlace: Array = new Array();

        public function getList(): Array{
            return nAPlace;
        }

}
        

}
