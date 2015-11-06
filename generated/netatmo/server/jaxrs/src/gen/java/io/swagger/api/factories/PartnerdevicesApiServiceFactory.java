package io.swagger.api.factories;

import io.swagger.api.PartnerdevicesApiService;
import io.swagger.api.impl.PartnerdevicesApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class PartnerdevicesApiServiceFactory {

   private final static PartnerdevicesApiService service = new PartnerdevicesApiServiceImpl();

   public static PartnerdevicesApiService getPartnerdevicesApi()
   {
      return service;
   }
}
