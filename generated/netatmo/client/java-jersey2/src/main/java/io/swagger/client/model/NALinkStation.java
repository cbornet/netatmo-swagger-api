package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class NALinkStation  {
  
  private String mac = null;
  private String ext = null;
  private Float temperature = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("mac")
  public String getMac() {
    return mac;
  }
  public void setMac(String mac) {
    this.mac = mac;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("ext")
  public String getExt() {
    return ext;
  }
  public void setExt(String ext) {
    this.ext = ext;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("Temperature")
  public Float getTemperature() {
    return temperature;
  }
  public void setTemperature(Float temperature) {
    this.temperature = temperature;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NALinkStation {\n");
    
    sb.append("    mac: ").append(StringUtil.toIndentedString(mac)).append("\n");
    sb.append("    ext: ").append(StringUtil.toIndentedString(ext)).append("\n");
    sb.append("    temperature: ").append(StringUtil.toIndentedString(temperature)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
