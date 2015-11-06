package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAResponse;
import io.swagger.client.model.NAMeasureBodyElem;

    public class NAMeasureResponseList implements ListWrapper {
        // This declaration below of _NAMeasureResponse_obj_class is to force flash compiler to include this class
        private var _nAMeasureResponse_obj_class: io.swagger.client.model.NAMeasureResponse = null;
        [XmlElements(name="nAMeasureResponse", type="io.swagger.client.model.NAMeasureResponse")]
        public var nAMeasureResponse: Array = new Array();

        public function getList(): Array{
            return nAMeasureResponse;
        }

}
        

}
