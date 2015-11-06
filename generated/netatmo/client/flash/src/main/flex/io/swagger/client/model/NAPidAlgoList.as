package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAPidAlgoList implements ListWrapper {
        // This declaration below of _NAPidAlgo_obj_class is to force flash compiler to include this class
        private var _nAPidAlgo_obj_class: io.swagger.client.model.NAPidAlgo = null;
        [XmlElements(name="nAPidAlgo", type="io.swagger.client.model.NAPidAlgo")]
        public var nAPidAlgo: Array = new Array();

        public function getList(): Array{
            return nAPidAlgo;
        }

}
        

}
