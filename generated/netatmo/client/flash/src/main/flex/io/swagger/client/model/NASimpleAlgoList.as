package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NASimpleAlgoList implements ListWrapper {
        // This declaration below of _NASimpleAlgo_obj_class is to force flash compiler to include this class
        private var _nASimpleAlgo_obj_class: io.swagger.client.model.NASimpleAlgo = null;
        [XmlElements(name="nASimpleAlgo", type="io.swagger.client.model.NASimpleAlgo")]
        public var nASimpleAlgo: Array = new Array();

        public function getList(): Array{
            return nASimpleAlgo;
        }

}
        

}
