package io.swagger.client.model;

import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class AccessToken  {
  
  @SerializedName("access_token")
  private String accessToken = null;
  @SerializedName("refresh_token")
  private String refreshToken = null;
  @SerializedName("expire_in")
  private Integer expireIn = null;
  @SerializedName("expires_in")
  private Integer expiresIn = null;
  @SerializedName("scope")
  private List<String> scope = null;

  
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
    
    sb.append("  accessToken: ").append(accessToken).append("\n");
    sb.append("  refreshToken: ").append(refreshToken).append("\n");
    sb.append("  expireIn: ").append(expireIn).append("\n");
    sb.append("  expiresIn: ").append(expiresIn).append("\n");
    sb.append("  scope: ").append(scope).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
