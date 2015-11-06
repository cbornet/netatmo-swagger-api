package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
public class NAZone  {
  
  private Integer id = null;
  private Integer type = null;
  private String name = null;
  private Float temp = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("id")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("type")
  public Integer getType() {
    return type;
  }
  public void setType(Integer type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("temp")
  public Float getTemp() {
    return temp;
  }
  public void setTemp(Float temp) {
    this.temp = temp;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NAZone {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  temp: ").append(temp).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
