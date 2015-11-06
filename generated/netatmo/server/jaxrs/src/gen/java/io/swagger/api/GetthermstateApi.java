package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.GetthermstateApiService;
import io.swagger.api.factories.GetthermstateApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NAThermStateResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/getthermstate")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/getthermstate", description = "the getthermstate API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class GetthermstateApi  {

   private final GetthermstateApiService delegate = GetthermstateApiServiceFactory.getGetthermstateApi();

    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.", response = NAThermStateResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAThermStateResponse.class) })

    public Response getthermstate(@ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId)
    throws NotFoundException {
        return delegate.getthermstate(deviceId,moduleId);
    }
    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getthermstate returns the last Thermostat measurements, its current weekly schedule, and, if present, its current manual temperature setpoint.", response = NAThermStateResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAThermStateResponse.class) })

    public Response getthermstate_1(@ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId)
    throws NotFoundException {
        return delegate.getthermstate_1(deviceId,moduleId);
    }
}

