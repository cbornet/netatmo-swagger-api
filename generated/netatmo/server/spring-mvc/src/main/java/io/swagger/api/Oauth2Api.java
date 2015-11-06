package io.swagger.api;

import io.swagger.model.*;

import io.swagger.model.AccessToken;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiParam;
import io.swagger.annotations.ApiResponse;
import io.swagger.annotations.ApiResponses;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;

import static org.springframework.http.MediaType.*;

@Controller
@RequestMapping(value = "/oauth2", produces = {APPLICATION_JSON_VALUE})
@Api(value = "/oauth2", description = "the oauth2 API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-11T02:15:19.344+02:00")
public class Oauth2Api {
  

  @ApiOperation(value = "", notes = "OAuth2 token endpoint", response = AccessToken.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "/token", 
    produces = { "application/json" }, 
    consumes = { "application/x-www-form-urlencoded" },
    method = RequestMethod.POST)
  public ResponseEntity<AccessToken> getToken(


@ApiParam(value = "Oauth2 grant type", required=true , allowableValues="{values=[password, authorization_code, refresh_token]}") @RequestPart(value="grantType", required=true)  String grantType
,
    


@ApiParam(value = "Application client ID", required=true ) @RequestPart(value="clientId", required=true)  String clientId
,
    


@ApiParam(value = "Application client secret", required=true ) @RequestPart(value="clientSecret", required=true)  String clientSecret
,
    


@ApiParam(value = "Scopes to use, separated by a space" ) @RequestPart(value="scope", required=false)  String scope
,
    


@ApiParam(value = "User name if grant_type is password" ) @RequestPart(value="username", required=false)  String username
,
    


@ApiParam(value = "User password if grant_type is password" ) @RequestPart(value="password", required=false)  String password
,
    


@ApiParam(value = "Authorization code if grant_type is authorization_code" ) @RequestPart(value="code", required=false)  String code
,
    


@ApiParam(value = "Redirect URI if grant_type is authorization_code" ) @RequestPart(value="redirectUri", required=false)  String redirectUri
,
    


@ApiParam(value = "Refresh token if grant_type is refresh_token" ) @RequestPart(value="refreshToken", required=false)  String refreshToken
)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<AccessToken>(HttpStatus.OK);
  }

  
}
