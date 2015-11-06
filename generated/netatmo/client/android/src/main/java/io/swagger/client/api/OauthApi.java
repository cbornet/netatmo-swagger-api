package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.AccessToken;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class OauthApi {
  String basePath = "https://api.netatmo.net/";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  
  /**
   * 
   * OAuth2 token endpoint
   * @param grantType Oauth2 grant type
   * @param clientId Application client ID
   * @param clientSecret Application client secret
   * @param scope Scopes to use, separated by a space
   * @param username User name if grant_type is password
   * @param password User password if grant_type is password
   * @param code Authorization code if grant_type is authorization_code
   * @param redirectUri Redirect URI if grant_type is authorization_code
   * @param refreshToken Refresh token if grant_type is refresh_token
   * @return AccessToken
   */
  public AccessToken  getToken (String grantType, String clientId, String clientSecret, String scope, String username, String password, String code, String redirectUri, String refreshToken) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'grantType' is set
    if (grantType == null) {
       throw new ApiException(400, "Missing the required parameter 'grantType' when calling getToken");
    }
    
    // verify the required parameter 'clientId' is set
    if (clientId == null) {
       throw new ApiException(400, "Missing the required parameter 'clientId' when calling getToken");
    }
    
    // verify the required parameter 'clientSecret' is set
    if (clientSecret == null) {
       throw new ApiException(400, "Missing the required parameter 'clientSecret' when calling getToken");
    }
    

    // create path and map variables
    String path = "/oauth2/token".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();

    

    

    String[] contentTypes = {
      "application/x-www-form-urlencoded"
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder builder = MultipartEntityBuilder.create();
      
      if (grantType != null) {
        builder.addTextBody("grant_type", ApiInvoker.parameterToString(grantType), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (clientId != null) {
        builder.addTextBody("client_id", ApiInvoker.parameterToString(clientId), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (clientSecret != null) {
        builder.addTextBody("client_secret", ApiInvoker.parameterToString(clientSecret), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (scope != null) {
        builder.addTextBody("scope", ApiInvoker.parameterToString(scope), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (username != null) {
        builder.addTextBody("username", ApiInvoker.parameterToString(username), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (password != null) {
        builder.addTextBody("password", ApiInvoker.parameterToString(password), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (code != null) {
        builder.addTextBody("code", ApiInvoker.parameterToString(code), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (redirectUri != null) {
        builder.addTextBody("redirect_uri", ApiInvoker.parameterToString(redirectUri), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      
      if (refreshToken != null) {
        builder.addTextBody("refresh_token", ApiInvoker.parameterToString(refreshToken), ApiInvoker.TEXT_PLAIN_UTF8);
      }
      

      HttpEntity httpEntity = builder.build();
      postBody = httpEntity;
    } else {
      // normal form params
      formParams.put("grant_type", ApiInvoker.parameterToString(grantType));
      formParams.put("client_id", ApiInvoker.parameterToString(clientId));
      formParams.put("client_secret", ApiInvoker.parameterToString(clientSecret));
      formParams.put("scope", ApiInvoker.parameterToString(scope));
      formParams.put("username", ApiInvoker.parameterToString(username));
      formParams.put("password", ApiInvoker.parameterToString(password));
      formParams.put("code", ApiInvoker.parameterToString(code));
      formParams.put("redirect_uri", ApiInvoker.parameterToString(redirectUri));
      formParams.put("refresh_token", ApiInvoker.parameterToString(refreshToken));
      
    }

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "POST", queryParams, postBody, headerParams, formParams, contentType);
      if(response != null){
        return (AccessToken) ApiInvoker.deserialize(response, "", AccessToken.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
