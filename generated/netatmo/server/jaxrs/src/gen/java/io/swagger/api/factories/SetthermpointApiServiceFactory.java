package io.swagger.api.factories;

import io.swagger.api.SetthermpointApiService;
import io.swagger.api.impl.SetthermpointApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class SetthermpointApiServiceFactory {

   private final static SetthermpointApiService service = new SetthermpointApiServiceImpl();

   public static SetthermpointApiService getSetthermpointApi()
   {
      return service;
   }
}
