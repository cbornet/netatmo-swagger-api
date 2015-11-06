package io.swagger.client.model {


    [XmlRootNode(name="AccessToken")]
    public class AccessToken {
        
        
        
        [XmlElement(name="access_token")]
        
        public var accessToken: String = null;
    
        
        
        [XmlElement(name="refresh_token")]
        
        public var refreshToken: String = null;
    
        
        
        [XmlElement(name="expire_in")]
        
        public var expireIn: Number = 0;
    
        
        
        [XmlElement(name="expires_in")]
        
        public var expiresIn: Number = 0;
    
        
        
        // This declaration below of _scope_obj_class is to force flash compiler to include this class
        private var _scope_obj_class: Array = null;
        [XmlElementWrapper(name="scope")]
        [XmlElements(name="scope", type="Array")]
        
        
        public var scope: Array = new Array();
    

    public function toString(): String {
        var str: String = "AccessToken: ";
        
        str += " (accessToken: " + accessToken + ")";
        
        str += " (refreshToken: " + refreshToken + ")";
        
        str += " (expireIn: " + expireIn + ")";
        
        str += " (expiresIn: " + expiresIn + ")";
        
        str += " (scope: " + scope + ")";
        
        return str;
    }

}

}
