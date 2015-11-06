package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NAMeasureResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-02T15:59:00.613+02:00")
public class GetmeasureApiServiceImpl extends GetmeasureApiService {
  
      @Override
      public Response getmeasure(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getmeasure_1(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getmeasure_2(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
}
