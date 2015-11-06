package io.swagger.api;

import io.swagger.model.*;

import io.swagger.model.NADeviceListResponse;

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
@RequestMapping(value = "/devicelist", produces = {APPLICATION_JSON_VALUE})
@Api(value = "/devicelist", description = "the devicelist API")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-07T17:11:46.681+02:00")
public class DevicelistApi {
  

  @ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NADeviceListResponse> devicelist(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues = "{values=[app_thermostat, app_station]}") @RequestParam(value = "appType", required = false) String appType


,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @RequestParam(value = "deviceId", required = false) String deviceId


,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @RequestParam(value = "getFavorites", required = false) Boolean getFavorites


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NADeviceListResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NADeviceListResponse> devicelist_1(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues = "{values=[app_thermostat, app_station]}") @RequestParam(value = "appType", required = false) String appType


,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @RequestParam(value = "deviceId", required = false) String deviceId


,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @RequestParam(value = "getFavorites", required = false) Boolean getFavorites


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NADeviceListResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NADeviceListResponse> devicelist_2(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues = "{values=[app_thermostat, app_station]}") @RequestParam(value = "appType", required = false) String appType


,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @RequestParam(value = "deviceId", required = false) String deviceId


,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @RequestParam(value = "getFavorites", required = false) Boolean getFavorites


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NADeviceListResponse>(HttpStatus.OK);
  }

  

  @ApiOperation(value = "", notes = "The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.", response = NADeviceListResponse.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 200, message = "Successful response") })
  @RequestMapping(value = "", 
    
    
    method = RequestMethod.GET)
  public ResponseEntity<NADeviceListResponse> devicelist_3(@ApiParam(value = "Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)", allowableValues = "{values=[app_thermostat, app_station]}") @RequestParam(value = "appType", required = false) String appType


,
    @ApiParam(value = "Specify a device_id if you want to retrieve only this device informations.") @RequestParam(value = "deviceId", required = false) String deviceId


,
    @ApiParam(value = "When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.") @RequestParam(value = "getFavorites", required = false) Boolean getFavorites


)
      throws NotFoundException {
      // do some magic!
      return new ResponseEntity<NADeviceListResponse>(HttpStatus.OK);
  }

  
}
