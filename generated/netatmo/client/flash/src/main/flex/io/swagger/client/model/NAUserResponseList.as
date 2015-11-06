package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAUserBody;
import io.swagger.client.model.NAResponse;

    public class NAUserResponseList implements ListWrapper {
        // This declaration below of _NAUserResponse_obj_class is to force flash compiler to include this class
        private var _nAUserResponse_obj_class: io.swagger.client.model.NAUserResponse = null;
        [XmlElements(name="nAUserResponse", type="io.swagger.client.model.NAUserResponse")]
        public var nAUserResponse: Array = new Array();

        public function getList(): Array{
            return nAUserResponse;
        }

}
        

}
