package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.DevicelistApiService;
import io.swagger.api.factories.DevicelistApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NADeviceListResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/devicelist")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/devicelist", description = "the devicelist API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class DevicelistApi  {

   private final DevicelistApiService delegate = DevicelistApiServiceFactory.getDevicelistApi();

    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist(appType,deviceId,getFavorites);
    }
    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist_1(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist_1(appType,deviceId,getFavorites);
    }
    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist_2(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist_2(appType,deviceId,getFavorites);
    }
    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NADeviceListResponse.class) })

    public Response devicelist_3(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues="{values=[app_thermostat, app_station]}") @QueryParam("app_type") String appType,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @QueryParam("device_id") String deviceId,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @QueryParam("get_favorites") Boolean getFavorites)
    throws NotFoundException {
        return delegate.devicelist_3(appType,deviceId,getFavorites);
    }
}

