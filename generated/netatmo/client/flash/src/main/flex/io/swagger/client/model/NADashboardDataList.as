package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NADashboardDataList implements ListWrapper {
        // This declaration below of _NADashboardData_obj_class is to force flash compiler to include this class
        private var _nADashboardData_obj_class: io.swagger.client.model.NADashboardData = null;
        [XmlElements(name="nADashboardData", type="io.swagger.client.model.NADashboardData")]
        public var nADashboardData: Array = new Array();

        public function getList(): Array{
            return nADashboardData;
        }

}
        

}
