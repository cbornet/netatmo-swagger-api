package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAHeatingSystem;
import io.swagger.client.model.NAHouseModel;
import io.swagger.client.model.Object;
import io.swagger.client.model.NAPlace;
import io.swagger.client.model.NAThermProgram;
import io.swagger.client.model.NADate;

    public class NADeviceList implements ListWrapper {
        // This declaration below of _NADevice_obj_class is to force flash compiler to include this class
        private var _nADevice_obj_class: io.swagger.client.model.NADevice = null;
        [XmlElements(name="nADevice", type="io.swagger.client.model.NADevice")]
        public var nADevice: Array = new Array();

        public function getList(): Array{
            return nADevice;
        }

}
        

}
