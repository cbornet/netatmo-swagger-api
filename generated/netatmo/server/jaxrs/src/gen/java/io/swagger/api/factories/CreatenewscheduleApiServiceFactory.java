package io.swagger.api.factories;

import io.swagger.api.CreatenewscheduleApiService;
import io.swagger.api.impl.CreatenewscheduleApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class CreatenewscheduleApiServiceFactory {

   private final static CreatenewscheduleApiService service = new CreatenewscheduleApiServiceImpl();

   public static CreatenewscheduleApiService getCreatenewscheduleApi()
   {
      return service;
   }
}
