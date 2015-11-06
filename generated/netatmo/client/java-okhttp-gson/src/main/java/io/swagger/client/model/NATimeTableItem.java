package io.swagger.client.model;

import io.swagger.client.StringUtil;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class NATimeTableItem   {
  
  @SerializedName("id")
  private Integer id = null;
  
  @SerializedName("m_offset")
  private Integer mOffset = null;
  

  
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
    
    sb.append("    id: ").append(StringUtil.toIndentedString(id)).append("\n");
    sb.append("    mOffset: ").append(StringUtil.toIndentedString(mOffset)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
