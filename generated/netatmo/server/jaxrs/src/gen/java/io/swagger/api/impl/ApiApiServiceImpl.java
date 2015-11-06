package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NANewScheduleResponse;
import io.swagger.model.NAThermProgram;
import io.swagger.model.NADeviceListResponse;
import io.swagger.model.NAMeasureResponse;
import io.swagger.model.NAThermStateResponse;
import io.swagger.model.NAUserResponse;
import io.swagger.model.NAPartnerDevicesResponse;
import io.swagger.model.NAOkResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-08T16:31:39.150+02:00")
public class ApiApiServiceImpl extends ApiApiService {
  
      @Override
      public Response createnewschedule(String accessToken,String deviceId,String moduleId,NAThermProgram thermProgram)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response devicelist(String accessToken,String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response devicelist_1(String accessToken,String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response devicelist_2(String accessToken,String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response devicelist_3(String accessToken,String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getmeasure(String accessToken,String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getmeasure_4(String accessToken,String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getmeasure_5(String accessToken,String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getmeasure_6(String accessToken,String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getmeasure_7(String accessToken,String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getthermstate(String accessToken,String deviceId,String moduleId)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getthermstate_8(String accessToken,String deviceId,String moduleId)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getuser(String accessToken)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getuser_9(String accessToken)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getuser_10(String accessToken)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response partnerdevices(String accessToken)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response setthermpoint(String accessToken,String deviceId,String moduleId,String setpointMode,Integer setpointEndtime,Float setpointTemp)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response switchschedule(String accessToken,String deviceId,String moduleId,String scheduleId)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response syncschedule(String accessToken,String deviceId,String moduleId,NAThermProgram thermProgram)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
}
