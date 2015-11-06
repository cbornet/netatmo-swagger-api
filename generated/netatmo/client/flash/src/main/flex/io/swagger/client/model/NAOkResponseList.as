package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAResponse;

    public class NAOkResponseList implements ListWrapper {
        // This declaration below of _NAOkResponse_obj_class is to force flash compiler to include this class
        private var _nAOkResponse_obj_class: io.swagger.client.model.NAOkResponse = null;
        [XmlElements(name="nAOkResponse", type="io.swagger.client.model.NAOkResponse")]
        public var nAOkResponse: Array = new Array();

        public function getList(): Array{
            return nAOkResponse;
        }

}
        

}
