package io.swagger.api.factories;

import io.swagger.api.DevicelistApiService;
import io.swagger.api.impl.DevicelistApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class DevicelistApiServiceFactory {

   private final static DevicelistApiService service = new DevicelistApiServiceImpl();

   public static DevicelistApiService getDevicelistApi()
   {
      return service;
   }
}
