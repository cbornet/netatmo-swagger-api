package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NADate  {
  
  @SerializedName("sec")
  private Integer sec = null;
  
  @SerializedName("usec")
  private Integer usec = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getSec() {
    return sec;
  }
  public void setSec(Integer sec) {
    this.sec = sec;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getUsec() {
    return usec;
  }
  public void setUsec(Integer usec) {
    this.usec = usec;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NADate {\n");
    
    sb.append("    sec: ").append(StringUtil.toIndentedString(sec)).append("\n");
    sb.append("    usec: ").append(StringUtil.toIndentedString(usec)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
