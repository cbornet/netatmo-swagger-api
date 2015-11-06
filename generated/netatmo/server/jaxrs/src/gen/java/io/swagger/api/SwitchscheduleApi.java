package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.SwitchscheduleApiService;
import io.swagger.api.factories.SwitchscheduleApiServiceFactory;

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

@Path("/switchschedule")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/switchschedule", description = "the switchschedule API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class SwitchscheduleApi  {

   private final SwitchscheduleApiService delegate = SwitchscheduleApiServiceFactory.getSwitchscheduleApi();

    @POST
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method switchschedule switches the Thermostat's schedule to another existing schedule.", response = NAOkResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAOkResponse.class) })

    public Response switchschedule(@ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "The schedule id. It can be found in the getthermstate response, under the keys \"therm_program_backup\" and \"therm_program\".",required=true) @QueryParam("schedule_id") String scheduleId)
    throws NotFoundException {
        return delegate.switchschedule(deviceId,moduleId,scheduleId);
    }
}

