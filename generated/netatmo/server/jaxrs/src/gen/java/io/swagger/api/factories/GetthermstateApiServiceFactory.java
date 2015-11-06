package io.swagger.api.factories;

import io.swagger.api.GetthermstateApiService;
import io.swagger.api.impl.GetthermstateApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class GetthermstateApiServiceFactory {

   private final static GetthermstateApiService service = new GetthermstateApiServiceImpl();

   public static GetthermstateApiService getGetthermstateApi()
   {
      return service;
   }
}
