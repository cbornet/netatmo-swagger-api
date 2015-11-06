package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
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
    
    sb.append("  lagDown: ").append(lagDown).append("\n");
    sb.append("  lagUp: ").append(lagUp).append("\n");
    sb.append("  offOvershoot: ").append(offOvershoot).append("\n");
    sb.append("  onOvershoot: ").append(onOvershoot).append("\n");
    sb.append("  pk: ").append(pk).append("\n");
    sb.append("  tau: ").append(tau).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
