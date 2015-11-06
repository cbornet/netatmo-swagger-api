package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
public class NAHouseModelCa  {
  
  private Double te = null;
  private Integer ti = null;
  private String so = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("te")
  public Double getTe() {
    return te;
  }
  public void setTe(Double te) {
    this.te = te;
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

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("so")
  public String getSo() {
    return so;
  }
  public void setSo(String so) {
    this.so = so;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAHouseModelCa {\n");
    
    sb.append("  te: ").append(te).append("\n");
    sb.append("  ti: ").append(ti).append("\n");
    sb.append("  so: ").append(so).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
