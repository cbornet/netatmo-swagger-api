package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NALinkStationList implements ListWrapper {
        // This declaration below of _NALinkStation_obj_class is to force flash compiler to include this class
        private var _nALinkStation_obj_class: io.swagger.client.model.NALinkStation = null;
        [XmlElements(name="nALinkStation", type="io.swagger.client.model.NALinkStation")]
        public var nALinkStation: Array = new Array();

        public function getList(): Array{
            return nALinkStation;
        }

}
        

}
