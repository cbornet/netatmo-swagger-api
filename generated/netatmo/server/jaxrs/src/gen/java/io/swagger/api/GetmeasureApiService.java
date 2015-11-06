package io.swagger.api;

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

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public abstract class GetmeasureApiService {
  
      public abstract Response getmeasure(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException;
  
      public abstract Response getmeasure_1(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException;
  
      public abstract Response getmeasure_2(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException;
  
      public abstract Response getmeasure_3(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException;
  
      public abstract Response getmeasure_4(String deviceId,String scale,String type,String moduleId,Integer dateBegin,Integer dateEnd,Integer limit,Boolean optimize,Boolean realTime)
      throws NotFoundException;
  
}
