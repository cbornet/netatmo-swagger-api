package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NATimeTableItem;
import io.swagger.client.model.NAZone;

    public class NAThermProgramList implements ListWrapper {
        // This declaration below of _NAThermProgram_obj_class is to force flash compiler to include this class
        private var _nAThermProgram_obj_class: io.swagger.client.model.NAThermProgram = null;
        [XmlElements(name="nAThermProgram", type="io.swagger.client.model.NAThermProgram")]
        public var nAThermProgram: Array = new Array();

        public function getList(): Array{
            return nAThermProgram;
        }

}
        

}
