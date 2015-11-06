package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NASetpointList implements ListWrapper {
        // This declaration below of _NASetpoint_obj_class is to force flash compiler to include this class
        private var _nASetpoint_obj_class: io.swagger.client.model.NASetpoint = null;
        [XmlElements(name="nASetpoint", type="io.swagger.client.model.NASetpoint")]
        public var nASetpoint: Array = new Array();

        public function getList(): Array{
            return nASetpoint;
        }

}
        

}
