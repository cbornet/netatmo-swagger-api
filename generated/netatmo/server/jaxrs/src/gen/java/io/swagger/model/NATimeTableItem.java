package io.swagger.model;


import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JaxRSServerCodegen", date = "2015-10-11T02:14:28.858+02:00")
public class NATimeTableItem  {
  
  private Integer id = null;
  private Integer mOffset = null;

  
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
  @JsonProperty("m_offset")
  public Integer getMOffset() {
    return mOffset;
  }
  public void setMOffset(Integer mOffset) {
    this.mOffset = mOffset;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NATimeTableItem {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  mOffset: ").append(mOffset).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
