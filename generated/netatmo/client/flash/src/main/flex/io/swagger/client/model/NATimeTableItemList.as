package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NATimeTableItemList implements ListWrapper {
        // This declaration below of _NATimeTableItem_obj_class is to force flash compiler to include this class
        private var _nATimeTableItem_obj_class: io.swagger.client.model.NATimeTableItem = null;
        [XmlElements(name="nATimeTableItem", type="io.swagger.client.model.NATimeTableItem")]
        public var nATimeTableItem: Array = new Array();

        public function getList(): Array{
            return nATimeTableItem;
        }

}
        

}
