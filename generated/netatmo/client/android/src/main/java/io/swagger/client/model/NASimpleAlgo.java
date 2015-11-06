package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NASimpleAlgo  {
  
  @SerializedName("high_deadband")
  private Integer highDeadband = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getHighDeadband() {
    return highDeadband;
  }
  public void setHighDeadband(Integer highDeadband) {
    this.highDeadband = highDeadband;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NASimpleAlgo {\n");
    
    sb.append("  highDeadband: ").append(highDeadband).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
