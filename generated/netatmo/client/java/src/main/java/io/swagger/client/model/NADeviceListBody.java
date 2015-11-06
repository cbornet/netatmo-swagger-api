package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NADevice;
import java.util.*;
import io.swagger.client.model.NAModule;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:15.634+02:00")
public class NADeviceListBody  {
  
  private List<NADevice> devices = new ArrayList<NADevice>();
  private List<NAModule> modules = new ArrayList<NAModule>();

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("devices")
  public List<NADevice> getDevices() {
    return devices;
  }
  public void setDevices(List<NADevice> devices) {
    this.devices = devices;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("modules")
  public List<NAModule> getModules() {
    return modules;
  }
  public void setModules(List<NAModule> modules) {
    this.modules = modules;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NADeviceListBody {\n");
    
    sb.append("    devices: ").append(StringUtil.toIndentedString(devices)).append("\n");
    sb.append("    modules: ").append(StringUtil.toIndentedString(modules)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
