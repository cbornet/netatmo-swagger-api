package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
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
    
    sb.append("  sec: ").append(sec).append("\n");
    sb.append("  usec: ").append(usec).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
