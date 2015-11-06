package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.PartnerdevicesApiService;
import io.swagger.api.factories.PartnerdevicesApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NAPartnerDevicesResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/partnerdevices")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/partnerdevices", description = "the partnerdevices API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class PartnerdevicesApi  {

   private final PartnerdevicesApiService delegate = PartnerdevicesApiServiceFactory.getPartnerdevicesApi();

    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method partnerdevices returns the list of device_id to which your partner application has access to.", response = NAPartnerDevicesResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAPartnerDevicesResponse.class) })

    public Response partnerdevices()
    throws NotFoundException {
        return delegate.partnerdevices();
    }
}

