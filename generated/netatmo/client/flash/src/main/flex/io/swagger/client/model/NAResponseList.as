package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAResponseList implements ListWrapper {
        // This declaration below of _NAResponse_obj_class is to force flash compiler to include this class
        private var _nAResponse_obj_class: io.swagger.client.model.NAResponse = null;
        [XmlElements(name="nAResponse", type="io.swagger.client.model.NAResponse")]
        public var nAResponse: Array = new Array();

        public function getList(): Array{
            return nAResponse;
        }

}
        

}
