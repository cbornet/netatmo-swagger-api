package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.CreatenewscheduleApiService;
import io.swagger.api.factories.CreatenewscheduleApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NANewScheduleResponse;
import io.swagger.model.NAThermProgram;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/createnewschedule")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/createnewschedule", description = "the createnewschedule API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class CreatenewscheduleApi  {

   private final CreatenewscheduleApiService delegate = CreatenewscheduleApiServiceFactory.getCreatenewscheduleApi();

    @POST
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method createnewschedule creates a new schedule stored in the backup list.", response = NANewScheduleResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NANewScheduleResponse.class) })

    public Response createnewschedule(@ApiParam(value = "The relay id",required=true) @QueryParam("device_id") String deviceId,
    @ApiParam(value = "The thermostat id",required=true) @QueryParam("module_id") String moduleId,
    @ApiParam(value = "The thermostat program (zones and timetable)" ,required=true ) NAThermProgram thermProgram)
    throws NotFoundException {
        return delegate.createnewschedule(deviceId,moduleId,thermProgram);
    }
}

