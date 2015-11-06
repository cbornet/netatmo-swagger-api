package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAThermMeasureList implements ListWrapper {
        // This declaration below of _NAThermMeasure_obj_class is to force flash compiler to include this class
        private var _nAThermMeasure_obj_class: io.swagger.client.model.NAThermMeasure = null;
        [XmlElements(name="nAThermMeasure", type="io.swagger.client.model.NAThermMeasure")]
        public var nAThermMeasure: Array = new Array();

        public function getList(): Array{
            return nAThermMeasure;
        }

}
        

}
