package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAHouseModelCaList implements ListWrapper {
        // This declaration below of _NAHouseModelCa_obj_class is to force flash compiler to include this class
        private var _nAHouseModelCa_obj_class: io.swagger.client.model.NAHouseModelCa = null;
        [XmlElements(name="nAHouseModelCa", type="io.swagger.client.model.NAHouseModelCa")]
        public var nAHouseModelCa: Array = new Array();

        public function getList(): Array{
            return nAHouseModelCa;
        }

}
        

}
