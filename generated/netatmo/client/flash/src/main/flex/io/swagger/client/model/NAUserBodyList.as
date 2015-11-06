package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.NAUserAdministrative;
import io.swagger.client.model.NADate;

    public class NAUserBodyList implements ListWrapper {
        // This declaration below of _NAUserBody_obj_class is to force flash compiler to include this class
        private var _nAUserBody_obj_class: io.swagger.client.model.NAUserBody = null;
        [XmlElements(name="nAUserBody", type="io.swagger.client.model.NAUserBody")]
        public var nAUserBody: Array = new Array();

        public function getList(): Array{
            return nAUserBody;
        }

}
        

}
