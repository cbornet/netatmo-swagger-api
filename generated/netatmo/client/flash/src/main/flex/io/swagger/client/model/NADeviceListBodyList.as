package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NADevice;
import io.swagger.client.model.NAModule;

    public class NADeviceListBodyList implements ListWrapper {
        // This declaration below of _NADeviceListBody_obj_class is to force flash compiler to include this class
        private var _nADeviceListBody_obj_class: io.swagger.client.model.NADeviceListBody = null;
        [XmlElements(name="nADeviceListBody", type="io.swagger.client.model.NADeviceListBody")]
        public var nADeviceListBody: Array = new Array();

        public function getList(): Array{
            return nADeviceListBody;
        }

}
        

}
