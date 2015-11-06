package io.swagger.client.model;

import io.swagger.client.StringUtil;
import java.util.*;

import com.google.gson.annotations.SerializedName;



import io.swagger.annotations.*;



@ApiModel(description = "")
public class AccessToken   {
  
  @SerializedName("access_token")
  private String accessToken = null;
  
  @SerializedName("refresh_token")
  private String refreshToken = null;
  
  @SerializedName("expire_in")
  private Integer expireIn = null;
  
  @SerializedName("expires_in")
  private Integer expiresIn = null;
  
  @SerializedName("scope")
  private List<String> scope = new ArrayList<String>();
  

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAccessToken() {
    return accessToken;
  }
  public void setAccessToken(String accessToken) {
    this.accessToken = accessToken;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getRefreshToken() {
    return refreshToken;
  }
  public void setRefreshToken(String refreshToken) {
    this.refreshToken = refreshToken;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getExpireIn() {
    return expireIn;
  }
  public void setExpireIn(Integer expireIn) {
    this.expireIn = expireIn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getExpiresIn() {
    return expiresIn;
  }
  public void setExpiresIn(Integer expiresIn) {
    this.expiresIn = expiresIn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getScope() {
    return scope;
  }
  public void setScope(List<String> scope) {
    this.scope = scope;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccessToken {\n");
    
    sb.append("    accessToken: ").append(StringUtil.toIndentedString(accessToken)).append("\n");
    sb.append("    refreshToken: ").append(StringUtil.toIndentedString(refreshToken)).append("\n");
    sb.append("    expireIn: ").append(StringUtil.toIndentedString(expireIn)).append("\n");
    sb.append("    expiresIn: ").append(StringUtil.toIndentedString(expiresIn)).append("\n");
    sb.append("    scope: ").append(StringUtil.toIndentedString(scope)).append("\n");
    sb.append("}");
    return sb.toString();
  }
}
