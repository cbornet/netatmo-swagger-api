package io.swagger.client.model;


import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NAZone  {
  
  @SerializedName("id")
  private Integer id = null;
  @SerializedName("type")
  private Integer type = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("temp")
  private Float temp = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getType() {
    return type;
  }
  public void setType(Integer type) {
    this.type = type;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
