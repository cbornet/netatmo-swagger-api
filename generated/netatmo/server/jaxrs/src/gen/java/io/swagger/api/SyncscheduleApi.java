package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.SyncscheduleApiService;
import io.swagger.api.factories.SyncscheduleApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NAOkResponse;
import io.swagger.model.NAThermProgram;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/syncschedule")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/syncschedule", description = "the syncschedule API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class SyncscheduleApi  {

   private final SyncscheduleApiService delegate = SyncscheduleApiServiceFactory.getSyncscheduleApi();

    @POST
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method syncschedule changes the Thermostat weekly schedule.", response = NAOkResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAOkResponse.class) })

    public Response syncschedule(@ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "The thermostat program (zones, timetable and name)" ,required=true ) NAThermProgram thermProgram)
    throws NotFoundException {
        return delegate.syncschedule(deviceId,moduleId,thermProgram);
    }
}

