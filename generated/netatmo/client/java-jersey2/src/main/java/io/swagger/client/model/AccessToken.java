package io.swagger.client.model;

import io.swagger.client.StringUtil;
import java.util.*;



import io.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-11T02:14:20.032+02:00")
public class AccessToken  {
  
  private String accessToken = null;
  private String refreshToken = null;
  private Integer expireIn = null;
  private Integer expiresIn = null;
  private List<String> scope = new ArrayList<String>();

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("access_token")
  public String getAccessToken() {
    return accessToken;
  }
  public void setAccessToken(String accessToken) {
    this.accessToken = accessToken;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("refresh_token")
  public String getRefreshToken() {
    return refreshToken;
  }
  public void setRefreshToken(String refreshToken) {
    this.refreshToken = refreshToken;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("expire_in")
  public Integer getExpireIn() {
    return expireIn;
  }
  public void setExpireIn(Integer expireIn) {
    this.expireIn = expireIn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("expires_in")
  public Integer getExpiresIn() {
    return expiresIn;
  }
  public void setExpiresIn(Integer expiresIn) {
    this.expiresIn = expiresIn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("scope")
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
