package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiClient;
import io.swagger.client.Configuration;
import io.swagger.client.Pair;
import io.swagger.client.TypeRef;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.AccessToken;

import java.io.File;
import java.util.Map;
import java.util.HashMap;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2015-10-12T09:33:30.687+02:00")
public class OauthApi {
  private ApiClient apiClient;

  public OauthApi() {
    this(Configuration.getDefaultApiClient());
  }

  public OauthApi(ApiClient apiClient) {
    this.apiClient = apiClient;
  }

  public ApiClient getApiClient() {
    return apiClient;
  }

  public void setApiClient(ApiClient apiClient) {
    this.apiClient = apiClient;
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
  public AccessToken getToken (String grantType, String clientId, String clientSecret, String scope, String username, String password, String code, String redirectUri, String refreshToken) throws ApiException {
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
    Map<String, String> headerParams = new HashMap<String, String>();
    Map<String, Object> formParams = new HashMap<String, Object>();

    

    

    if (grantType != null)
      formParams.put("grant_type", grantType);
    if (clientId != null)
      formParams.put("client_id", clientId);
    if (clientSecret != null)
      formParams.put("client_secret", clientSecret);
    if (scope != null)
      formParams.put("scope", scope);
    if (username != null)
      formParams.put("username", username);
    if (password != null)
      formParams.put("password", password);
    if (code != null)
      formParams.put("code", code);
    if (redirectUri != null)
      formParams.put("redirect_uri", redirectUri);
    if (refreshToken != null)
      formParams.put("refresh_token", refreshToken);
    

    final String[] accepts = {
      "application/json"
    };
    final String accept = apiClient.selectHeaderAccept(accepts);

    final String[] contentTypes = {
      "application/x-www-form-urlencoded"
    };
    final String contentType = apiClient.selectHeaderContentType(contentTypes);

    String[] authNames = new String[] {  };

    
    TypeRef returnType = new TypeRef<AccessToken>() {};
    return apiClient.invokeAPI(path, "POST", queryParams, postBody, headerParams, formParams, accept, contentType, authNames, returnType);
    
  }
  
}
