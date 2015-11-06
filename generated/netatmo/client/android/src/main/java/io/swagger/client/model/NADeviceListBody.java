package io.swagger.client.model;

import io.swagger.client.model.NADevice;
import java.util.*;
import io.swagger.client.model.NAModule;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NADeviceListBody  {
  
  @SerializedName("devices")
  private List<NADevice> devices = null;
  @SerializedName("modules")
  private List<NAModule> modules = null;

  
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
    
    sb.append("  devices: ").append(devices).append("\n");
    sb.append("  modules: ").append(modules).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
