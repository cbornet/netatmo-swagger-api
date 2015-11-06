package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:15.634+02:00")
public class NAThermMeasure  {
  
  private Integer time = null;
  private Float temperature = null;
  private Float setpointTemp = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("time")
  public Integer getTime() {
    return time;
  }
  public void setTime(Integer time) {
    this.time = time;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("temperature")
  public Float getTemperature() {
    return temperature;
  }
  public void setTemperature(Float temperature) {
    this.temperature = temperature;
  }

  
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

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAThermMeasure {\n");
    
    sb.append("    time: ").append(StringUtil.toIndentedString(time)).append("\n");
    sb.append("    temperature: ").append(StringUtil.toIndentedString(temperature)).append("\n");
    sb.append("    setpointTemp: ").append(StringUtil.toIndentedString(setpointTemp)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
