package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class NAPidAlgo  {
  
  private Integer gain = null;
  private Integer period = null;
  private Integer td = null;
  private Integer ti = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("gain")
  public Integer getGain() {
    return gain;
  }
  public void setGain(Integer gain) {
    this.gain = gain;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("period")
  public Integer getPeriod() {
    return period;
  }
  public void setPeriod(Integer period) {
    this.period = period;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("td")
  public Integer getTd() {
    return td;
  }
  public void setTd(Integer td) {
    this.td = td;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("ti")
  public Integer getTi() {
    return ti;
  }
  public void setTi(Integer ti) {
    this.ti = ti;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAPidAlgo {\n");
    
    sb.append("    gain: ").append(StringUtil.toIndentedString(gain)).append("\n");
    sb.append("    period: ").append(StringUtil.toIndentedString(period)).append("\n");
    sb.append("    td: ").append(StringUtil.toIndentedString(td)).append("\n");
    sb.append("    ti: ").append(StringUtil.toIndentedString(ti)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
