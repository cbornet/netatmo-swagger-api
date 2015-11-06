package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAPidAlgo  {
  
  @SerializedName("gain")
  private Integer gain = null;
  
  @SerializedName("period")
  private Integer period = null;
  
  @SerializedName("td")
  private Integer td = null;
  
  @SerializedName("ti")
  private Integer ti = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getGain() {
    return gain;
  }
  public void setGain(Integer gain) {
    this.gain = gain;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getPeriod() {
    return period;
  }
  public void setPeriod(Integer period) {
    this.period = period;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTd() {
    return td;
  }
  public void setTd(Integer td) {
    this.td = td;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
