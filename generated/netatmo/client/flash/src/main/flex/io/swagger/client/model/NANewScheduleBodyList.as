package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NANewScheduleBodyList implements ListWrapper {
        // This declaration below of _NANewScheduleBody_obj_class is to force flash compiler to include this class
        private var _nANewScheduleBody_obj_class: io.swagger.client.model.NANewScheduleBody = null;
        [XmlElements(name="nANewScheduleBody", type="io.swagger.client.model.NANewScheduleBody")]
        public var nANewScheduleBody: Array = new Array();

        public function getList(): Array{
            return nANewScheduleBody;
        }

}
        

}
