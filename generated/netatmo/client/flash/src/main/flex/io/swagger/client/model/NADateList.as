package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NADateList implements ListWrapper {
        // This declaration below of _NADate_obj_class is to force flash compiler to include this class
        private var _nADate_obj_class: io.swagger.client.model.NADate = null;
        [XmlElements(name="nADate", type="io.swagger.client.model.NADate")]
        public var nADate: Array = new Array();

        public function getList(): Array{
            return nADate;
        }

}
        

}
