package io.swagger.client.model;

import io.swagger.client.StringUtil;
import java.util.*;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAMeasureBodyElem   {
  
  @SerializedName("beg_time")
  private Integer begTime = null;
  
  @SerializedName("step_time")
  private Integer stepTime = null;
  
  @SerializedName("value")
  private List<List<Float>> value = new ArrayList<List<Float>>();
  

  
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
    
    sb.append("    begTime: ").append(StringUtil.toIndentedString(begTime)).append("\n");
    sb.append("    stepTime: ").append(StringUtil.toIndentedString(stepTime)).append("\n");
    sb.append("    value: ").append(StringUtil.toIndentedString(value)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
