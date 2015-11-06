package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NADashboardData;
import io.swagger.client.model.NADate;

    public class NAModuleList implements ListWrapper {
        // This declaration below of _NAModule_obj_class is to force flash compiler to include this class
        private var _nAModule_obj_class: io.swagger.client.model.NAModule = null;
        [XmlElements(name="nAModule", type="io.swagger.client.model.NAModule")]
        public var nAModule: Array = new Array();

        public function getList(): Array{
            return nAModule;
        }

}
        

}
