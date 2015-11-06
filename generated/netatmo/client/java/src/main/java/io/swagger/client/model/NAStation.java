package io.swagger.client.model;

import io.swagger.client.StringUtil;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:15.634+02:00")
public class NAStation  {
  
  private Integer lagDown = null;
  private Integer lagUp = null;
  private Float offOvershoot = null;
  private Float onOvershoot = null;
  private Integer pk = null;
  private Integer tau = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("lag_down")
  public Integer getLagDown() {
    return lagDown;
  }
  public void setLagDown(Integer lagDown) {
    this.lagDown = lagDown;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("lag_up")
  public Integer getLagUp() {
    return lagUp;
  }
  public void setLagUp(Integer lagUp) {
    this.lagUp = lagUp;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("off_overshoot")
  public Float getOffOvershoot() {
    return offOvershoot;
  }
  public void setOffOvershoot(Float offOvershoot) {
    this.offOvershoot = offOvershoot;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("on_overshoot")
  public Float getOnOvershoot() {
    return onOvershoot;
  }
  public void setOnOvershoot(Float onOvershoot) {
    this.onOvershoot = onOvershoot;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("pk")
  public Integer getPk() {
    return pk;
  }
  public void setPk(Integer pk) {
    this.pk = pk;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("tau")
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
