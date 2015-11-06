package io.swagger.api.factories;

import io.swagger.api.GetuserApiService;
import io.swagger.api.impl.GetuserApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class GetuserApiServiceFactory {

   private final static GetuserApiService service = new GetuserApiServiceImpl();

   public static GetuserApiService getGetuserApi()
   {
      return service;
   }
}
