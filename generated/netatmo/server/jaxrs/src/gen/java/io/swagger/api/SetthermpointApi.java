package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.SetthermpointApiService;
import io.swagger.api.factories.SetthermpointApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NAOkResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/setthermpoint")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/setthermpoint", description = "the setthermpoint API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class SetthermpointApi  {

   private final SetthermpointApiService delegate = SetthermpointApiServiceFactory.getSetthermpointApi();

    @POST
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method setthermpoint changes the Thermostat manual temperature setpoint.", response = NAOkResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAOkResponse.class) })

    public Response setthermpoint(@ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "Chosen setpoint_mode",required=true, allowableValues="{values=[program, away, hg, manual, off, max]}") @QueryParam("setpoint_mode") String setpointMode,
    @ApiParam(value = "When using the manual or max setpoint_mode, this parameter defines when the setpoint expires.") @QueryParam("setpoint_endtime") Integer setpointEndtime,
    @ApiParam(value = "When using the manual setpoint_mode, this parameter defines the temperature setpoint (in Celcius) to use.") @QueryParam("setpoint_temp") Float setpointTemp)
    throws NotFoundException {
        return delegate.setthermpoint(deviceId,moduleId,setpointMode,setpointEndtime,setpointTemp);
    }
}

