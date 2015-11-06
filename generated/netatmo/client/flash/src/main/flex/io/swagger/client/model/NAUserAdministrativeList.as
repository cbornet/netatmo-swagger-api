package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class NAUserAdministrativeList implements ListWrapper {
        // This declaration below of _NAUserAdministrative_obj_class is to force flash compiler to include this class
        private var _nAUserAdministrative_obj_class: io.swagger.client.model.NAUserAdministrative = null;
        [XmlElements(name="nAUserAdministrative", type="io.swagger.client.model.NAUserAdministrative")]
        public var nAUserAdministrative: Array = new Array();

        public function getList(): Array{
            return nAUserAdministrative;
        }

}
        

}
