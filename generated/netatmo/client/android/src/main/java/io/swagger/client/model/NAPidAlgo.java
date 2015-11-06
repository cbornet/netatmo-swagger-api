package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


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
    
    sb.append("  gain: ").append(gain).append("\n");
    sb.append("  period: ").append(period).append("\n");
    sb.append("  td: ").append(td).append("\n");
    sb.append("  ti: ").append(ti).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
