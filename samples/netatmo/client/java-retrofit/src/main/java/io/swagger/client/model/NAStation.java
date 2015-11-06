package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;

import java.io.Serializable;

import io.swagger.annotations.*;



@ApiModel(description = "")
public class NAStation implements Serializable {
  
  @SerializedName("lag_down")
  private Integer lagDown = null;
  
  @SerializedName("lag_up")
  private Integer lagUp = null;
  
  @SerializedName("off_overshoot")
  private Float offOvershoot = null;
  
  @SerializedName("on_overshoot")
  private Float onOvershoot = null;
  
  @SerializedName("pk")
  private Integer pk = null;
  
  @SerializedName("tau")
  private Integer tau = null;
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLagDown() {
    return lagDown;
  }
  public void setLagDown(Integer lagDown) {
    this.lagDown = lagDown;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLagUp() {
    return lagUp;
  }
  public void setLagUp(Integer lagUp) {
    this.lagUp = lagUp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Float getOffOvershoot() {
    return offOvershoot;
  }
  public void setOffOvershoot(Float offOvershoot) {
    this.offOvershoot = offOvershoot;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Float getOnOvershoot() {
    return onOvershoot;
  }
  public void setOnOvershoot(Float onOvershoot) {
    this.onOvershoot = onOvershoot;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getPk() {
    return pk;
  }
  public void setPk(Integer pk) {
    this.pk = pk;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTau() {
    return tau;
  }
  public void setTau(Integer tau) {
    this.tau = tau;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAStation {\n");
    
    sb.append("    lagDown: ").append(StringUtil.toIndentedString(lagDown)).append("\n");
    sb.append("    lagUp: ").append(StringUtil.toIndentedString(lagUp)).append("\n");
    sb.append("    offOvershoot: ").append(StringUtil.toIndentedString(offOvershoot)).append("\n");
    sb.append("    onOvershoot: ").append(StringUtil.toIndentedString(onOvershoot)).append("\n");
    sb.append("    pk: ").append(StringUtil.toIndentedString(pk)).append("\n");
    sb.append("    tau: ").append(StringUtil.toIndentedString(tau)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
