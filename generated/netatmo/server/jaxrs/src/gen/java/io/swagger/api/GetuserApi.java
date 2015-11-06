package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.GetuserApiService;
import io.swagger.api.factories.GetuserApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NAUserResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/getuser")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/getuser", description = "the getuser API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-07T17:10:56.279+02:00")
public class GetuserApi  {

   private final GetuserApiService delegate = GetuserApiServiceFactory.getGetuserApi();

    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAUserResponse.class) })

    public Response getuser()
    throws NotFoundException {
        return delegate.getuser();
    }
    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAUserResponse.class) })

    public Response getuser_1()
    throws NotFoundException {
        return delegate.getuser_1();
    }
    @GET
    
    
    
    @io.swagger.annotations.ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = NAUserResponse.class) })

    public Response getuser_2()
    throws NotFoundException {
        return delegate.getuser_2();
    }
}

