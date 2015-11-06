package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-12T09:33:30.687+02:00")
public class NADate  {
  
  private Integer sec = null;
  private Integer usec = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("sec")
  public Integer getSec() {
    return sec;
  }
  public void setSec(Integer sec) {
    this.sec = sec;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("usec")
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
