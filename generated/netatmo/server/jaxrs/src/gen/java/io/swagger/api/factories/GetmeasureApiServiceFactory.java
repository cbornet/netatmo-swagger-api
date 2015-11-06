package io.swagger.api.factories;

import io.swagger.api.GetmeasureApiService;
import io.swagger.api.impl.GetmeasureApiServiceImpl;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class GetmeasureApiServiceFactory {

   private final static GetmeasureApiService service = new GetmeasureApiServiceImpl();

   public static GetmeasureApiService getGetmeasureApi()
   {
      return service;
   }
}
