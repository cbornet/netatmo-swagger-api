package io.swagger.api.factories;

import io.swagger.api.SwitchscheduleApiService;
import io.swagger.api.impl.SwitchscheduleApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class SwitchscheduleApiServiceFactory {

   private final static SwitchscheduleApiService service = new SwitchscheduleApiServiceImpl();

   public static SwitchscheduleApiService getSwitchscheduleApi()
   {
      return service;
   }
}
