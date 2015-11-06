package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NALinkStation;
import io.swagger.client.model.NAStation;
import io.swagger.client.model.NAHouseModelCa;
import io.swagger.client.model.NAPidAlgo;
import io.swagger.client.model.NASimpleAlgo;
import io.swagger.client.model.NADate;

    public class NAHouseModelList implements ListWrapper {
        // This declaration below of _NAHouseModel_obj_class is to force flash compiler to include this class
        private var _nAHouseModel_obj_class: io.swagger.client.model.NAHouseModel = null;
        [XmlElements(name="nAHouseModel", type="io.swagger.client.model.NAHouseModel")]
        public var nAHouseModel: Array = new Array();

        public function getList(): Array{
            return nAHouseModel;
        }

}
        

}
