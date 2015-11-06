package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAResponse;
import io.swagger.client.model.NADeviceListBody;

    public class NADeviceListResponseList implements ListWrapper {
        // This declaration below of _NADeviceListResponse_obj_class is to force flash compiler to include this class
        private var _nADeviceListResponse_obj_class: io.swagger.client.model.NADeviceListResponse = null;
        [XmlElements(name="nADeviceListResponse", type="io.swagger.client.model.NADeviceListResponse")]
        public var nADeviceListResponse: Array = new Array();

        public function getList(): Array{
            return nADeviceListResponse;
        }

}
        

}
