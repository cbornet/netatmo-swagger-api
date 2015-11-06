package io.swagger.api.factories;

import io.swagger.api.SyncscheduleApiService;
import io.swagger.api.impl.SyncscheduleApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class SyncscheduleApiServiceFactory {

   private final static SyncscheduleApiService service = new SyncscheduleApiServiceImpl();

   public static SyncscheduleApiService getSyncscheduleApi()
   {
      return service;
   }
}
