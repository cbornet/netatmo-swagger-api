package io.swagger.api;

import io.swagger.model.*;

import io.swagger.model.NAUserResponse;

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
@RequestMapping(value = "/getuser", produces = {APPLICATION_JSON_VALUE})
@Api(value = "/getuser", description = "the getuser API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-07T17:11:46.681+02:00")
public class GetuserApi {
  

  @ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAUserResponse> getuser()
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAUserResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAUserResponse> getuser_1()
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAUserResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method getuser returns information about a user such as prefered language, prefered units, and list of devices.", response = NAUserResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NAUserResponse> getuser_2()
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NAUserResponse>(HttpStatus.OK);
  }

  
}
