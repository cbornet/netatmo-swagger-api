package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class AccessTokenList implements ListWrapper {
        // This declaration below of _AccessToken_obj_class is to force flash compiler to include this class
        private var _accessToken_obj_class: io.swagger.client.model.AccessToken = null;
        [XmlElements(name="accessToken", type="io.swagger.client.model.AccessToken")]
        public var accessToken: Array = new Array();

        public function getList(): Array{
            return accessToken;
        }

}
        

}
