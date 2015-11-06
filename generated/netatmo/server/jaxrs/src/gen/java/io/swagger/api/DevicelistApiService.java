package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NADeviceListResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public abstract class DevicelistApiService {
  
      public abstract Response devicelist(String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException;
  
      public abstract Response devicelist_1(String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException;
  
      public abstract Response devicelist_2(String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException;
  
      public abstract Response devicelist_3(String appType,String deviceId,Boolean getFavorites)
      throws NotFoundException;
  
}
