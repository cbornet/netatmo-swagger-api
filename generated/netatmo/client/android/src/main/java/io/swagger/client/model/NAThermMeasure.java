package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAThermMeasure  {
  
  @SerializedName("time")
  private Integer time = null;
  @SerializedName("temperature")
  private Float temperature = null;
  @SerializedName("setpoint_temp")
  private Float setpointTemp = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTime() {
    return time;
  }
  public void setTime(Integer time) {
    this.time = time;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Float getTemperature() {
    return temperature;
  }
  public void setTemperature(Float temperature) {
    this.temperature = temperature;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
