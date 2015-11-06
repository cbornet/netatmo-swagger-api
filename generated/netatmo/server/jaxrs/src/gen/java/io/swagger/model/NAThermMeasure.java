package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
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
    
    sb.append("  time: ").append(time).append("\n");
    sb.append("  temperature: ").append(temperature).append("\n");
    sb.append("  setpointTemp: ").append(setpointTemp).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
