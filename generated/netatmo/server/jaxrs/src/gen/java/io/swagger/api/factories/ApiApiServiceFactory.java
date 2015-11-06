package io.swagger.api.factories;

import io.swagger.api.ApiApiService;
import io.swagger.api.impl.ApiApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-08T16:31:39.150+02:00")
public class ApiApiServiceFactory {

   private final static ApiApiService service = new ApiApiServiceImpl();

   public static ApiApiService getApiApi()
   {
      return service;
   }
}
