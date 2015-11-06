package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class NASimpleAlgo  {
  
  private Integer highDeadband = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("high_deadband")
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
