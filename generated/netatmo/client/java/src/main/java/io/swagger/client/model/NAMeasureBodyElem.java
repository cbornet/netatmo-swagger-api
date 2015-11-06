package io.swagger.client.model;

import io.swagger.client.StringUtil;
import java.util.*;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:15.634+02:00")
public class NAMeasureBodyElem  {
  
  private Integer begTime = null;
  private Integer stepTime = null;
  private List<List<Float>> value = new ArrayList<List<Float>>();

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("beg_time")
  public Integer getBegTime() {
    return begTime;
  }
  public void setBegTime(Integer begTime) {
    this.begTime = begTime;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("step_time")
  public Integer getStepTime() {
    return stepTime;
  }
  public void setStepTime(Integer stepTime) {
    this.stepTime = stepTime;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("value")
  public List<List<Float>> getValue() {
    return value;
  }
  public void setValue(List<List<Float>> value) {
    this.value = value;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAMeasureBodyElem {\n");
    
    sb.append("    begTime: ").append(StringUtil.toIndentedString(begTime)).append("\n");
    sb.append("    stepTime: ").append(StringUtil.toIndentedString(stepTime)).append("\n");
    sb.append("    value: ").append(StringUtil.toIndentedString(value)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
