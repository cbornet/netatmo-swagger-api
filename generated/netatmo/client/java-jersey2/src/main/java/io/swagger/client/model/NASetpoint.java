package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class NASetpoint  {
  
  private Float setpointTemp = null;
  private Integer setpointEndtime = null;
  private String setpointMode = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("setpoint_temp")
  public Float getSetpointTemp() {
    return setpointTemp;
  }
  public void setSetpointTemp(Float setpointTemp) {
    this.setpointTemp = setpointTemp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("setpoint_endtime")
  public Integer getSetpointEndtime() {
    return setpointEndtime;
  }
  public void setSetpointEndtime(Integer setpointEndtime) {
    this.setpointEndtime = setpointEndtime;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("setpoint_mode")
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
