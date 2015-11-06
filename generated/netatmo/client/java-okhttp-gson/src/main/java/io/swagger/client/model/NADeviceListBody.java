package io.swagger.client.model;

import io.swagger.client.StringUtil;
import io.swagger.client.model.NADevice;
import java.util.*;
import io.swagger.client.model.NAModule;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NADeviceListBody   {
  
  @SerializedName("devices")
  private List<NADevice> devices = new ArrayList<NADevice>();
  
  @SerializedName("modules")
  private List<NAModule> modules = new ArrayList<NAModule>();
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<NADevice> getDevices() {
    return devices;
  }
  public void setDevices(List<NADevice> devices) {
    this.devices = devices;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
