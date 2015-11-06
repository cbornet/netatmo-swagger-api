package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.Oauth2ApiService;
import io.swagger.api.factories.Oauth2ApiServiceFactory;

import io.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.AccessToken;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/oauth2")
@Consumes({ "text/plain" })
@Produces({ "application/json" })
@io.swagger.annotations.Api(value = "/oauth2", description = "the oauth2 API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
public class Oauth2Api  {

   private final Oauth2ApiService delegate = Oauth2ApiServiceFactory.getOauth2Api();

    @POST
    @Path("/token")
    @Consumes({ "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @io.swagger.annotations.ApiOperation(value = "", notes = "OAuth2 token endpoint", response = AccessToken.class)
    @io.swagger.annotations.ApiResponses(value = { 
        @io.swagger.annotations.ApiResponse(code = 200, message = "Successful response", response = AccessToken.class) })

    public Response getToken(@ApiParam(value = "Oauth2 grant type", required=true , allowableValues="{values=[password, authorization_code, refresh_token]}")@FormParam("grantType")  String grantType,
    @ApiParam(value = "Application client ID", required=true )@FormParam("clientId")  String clientId,
    @ApiParam(value = "Application client secret", required=true )@FormParam("clientSecret")  String clientSecret,
    @ApiParam(value = "Scopes to use, separated by a space" )@FormParam("scope")  String scope,
    @ApiParam(value = "User name if grant_type is password" )@FormParam("username")  String username,
    @ApiParam(value = "User password if grant_type is password" )@FormParam("password")  String password,
    @ApiParam(value = "Authorization code if grant_type is authorization_code" )@FormParam("code")  String code,
    @ApiParam(value = "Redirect URI if grant_type is authorization_code" )@FormParam("redirectUri")  String redirectUri,
    @ApiParam(value = "Refresh token if grant_type is refresh_token" )@FormParam("refreshToken")  String refreshToken)
    throws NotFoundException {
        return delegate.getToken(grantType,clientId,clientSecret,scope,username,password,code,redirectUri,refreshToken);
    }
}

