package io.swagger.client.model;

import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAMeasureBodyElem  {
  
  @SerializedName("beg_time")
  private Integer begTime = null;
  @SerializedName("step_time")
  private Integer stepTime = null;
  @SerializedName("value")
  private List<List<Float>> value = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getBegTime() {
    return begTime;
  }
  public void setBegTime(Integer begTime) {
    this.begTime = begTime;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getStepTime() {
    return stepTime;
  }
  public void setStepTime(Integer stepTime) {
    this.stepTime = stepTime;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
    
    sb.append("  begTime: ").append(begTime).append("\n");
    sb.append("  stepTime: ").append(stepTime).append("\n");
    sb.append("  value: ").append(value).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
