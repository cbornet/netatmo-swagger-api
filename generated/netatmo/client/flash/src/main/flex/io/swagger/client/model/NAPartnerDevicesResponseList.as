package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAResponse;

    public class NAPartnerDevicesResponseList implements ListWrapper {
        // This declaration below of _NAPartnerDevicesResponse_obj_class is to force flash compiler to include this class
        private var _nAPartnerDevicesResponse_obj_class: io.swagger.client.model.NAPartnerDevicesResponse = null;
        [XmlElements(name="nAPartnerDevicesResponse", type="io.swagger.client.model.NAPartnerDevicesResponse")]
        public var nAPartnerDevicesResponse: Array = new Array();

        public function getList(): Array{
            return nAPartnerDevicesResponse;
        }

}
        

}
