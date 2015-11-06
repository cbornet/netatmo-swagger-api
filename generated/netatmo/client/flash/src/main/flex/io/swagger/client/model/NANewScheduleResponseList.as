package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NANewScheduleBody;
import io.swagger.client.model.NAResponse;

    public class NANewScheduleResponseList implements ListWrapper {
        // This declaration below of _NANewScheduleResponse_obj_class is to force flash compiler to include this class
        private var _nANewScheduleResponse_obj_class: io.swagger.client.model.NANewScheduleResponse = null;
        [XmlElements(name="nANewScheduleResponse", type="io.swagger.client.model.NANewScheduleResponse")]
        public var nANewScheduleResponse: Array = new Array();

        public function getList(): Array{
            return nANewScheduleResponse;
        }

}
        

}
