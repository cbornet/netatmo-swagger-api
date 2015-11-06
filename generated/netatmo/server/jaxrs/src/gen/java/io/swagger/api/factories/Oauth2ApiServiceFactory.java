package io.swagger.api.factories;

import io.swagger.api.Oauth2ApiService;
import io.swagger.api.impl.Oauth2ApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-08T16:31:39.150+02:00")
public class Oauth2ApiServiceFactory {

   private final static Oauth2ApiService service = new Oauth2ApiServiceImpl();

   public static Oauth2ApiService getOauth2Api()
   {
      return service;
   }
}
