package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


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
    
    sb.append("  sec: ").append(sec).append("\n");
    sb.append("  usec: ").append(usec).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
