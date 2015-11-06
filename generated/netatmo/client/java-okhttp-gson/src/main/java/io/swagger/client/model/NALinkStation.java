package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NALinkStation   {
  
  @SerializedName("mac")
  private String mac = null;
  
  @SerializedName("ext")
  private String ext = null;
  
  @SerializedName("Temperature")
  private Float temperature = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMac() {
    return mac;
  }
  public void setMac(String mac) {
    this.mac = mac;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getExt() {
    return ext;
  }
  public void setExt(String ext) {
    this.ext = ext;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
