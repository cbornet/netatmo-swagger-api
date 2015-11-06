package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAThermMeasure;
import io.swagger.client.model.NASetpoint;
import io.swagger.client.model.NAThermProgram;

    public class NAThermStateBodyList implements ListWrapper {
        // This declaration below of _NAThermStateBody_obj_class is to force flash compiler to include this class
        private var _nAThermStateBody_obj_class: io.swagger.client.model.NAThermStateBody = null;
        [XmlElements(name="nAThermStateBody", type="io.swagger.client.model.NAThermStateBody")]
        public var nAThermStateBody: Array = new Array();

        public function getList(): Array{
            return nAThermStateBody;
        }

}
        

}
