package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;

import java.io.Serializable;

import io.swagger.annotations.*;



@ApiModel(description = "")
public class NASetpoint implements Serializable {
  
  @SerializedName("setpoint_temp")
  private Float setpointTemp = null;
  
  @SerializedName("setpoint_endtime")
  private Integer setpointEndtime = null;
  
  @SerializedName("setpoint_mode")
  private String setpointMode = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Float getSetpointTemp() {
    return setpointTemp;
  }
  public void setSetpointTemp(Float setpointTemp) {
    this.setpointTemp = setpointTemp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getSetpointEndtime() {
    return setpointEndtime;
  }
  public void setSetpointEndtime(Integer setpointEndtime) {
    this.setpointEndtime = setpointEndtime;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSetpointMode() {
    return setpointMode;
  }
  public void setSetpointMode(String setpointMode) {
    this.setpointMode = setpointMode;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NASetpoint {\n");
    
    sb.append("    setpointTemp: ").append(StringUtil.toIndentedString(setpointTemp)).append("\n");
    sb.append("    setpointEndtime: ").append(StringUtil.toIndentedString(setpointEndtime)).append("\n");
    sb.append("    setpointMode: ").append(StringUtil.toIndentedString(setpointMode)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
