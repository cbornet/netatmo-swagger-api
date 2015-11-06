package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAResponse;
import io.swagger.client.model.NAThermStateBody;

    public class NAThermStateResponseList implements ListWrapper {
        // This declaration below of _NAThermStateResponse_obj_class is to force flash compiler to include this class
        private var _nAThermStateResponse_obj_class: io.swagger.client.model.NAThermStateResponse = null;
        [XmlElements(name="nAThermStateResponse", type="io.swagger.client.model.NAThermStateResponse")]
        public var nAThermStateResponse: Array = new Array();

        public function getList(): Array{
            return nAThermStateResponse;
        }

}
        

}
