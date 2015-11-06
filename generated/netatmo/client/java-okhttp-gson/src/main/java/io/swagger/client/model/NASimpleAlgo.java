package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NASimpleAlgo   {
  
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
    
    sb.append("    highDeadband: ").append(StringUtil.toIndentedString(highDeadband)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
