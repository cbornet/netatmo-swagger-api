part of api;


class OauthApi {
  String basePath = "https://api.netatmo.net/";
  ApiClient apiClient = ApiClient.defaultApiClient;

  OauthApi([ApiClient apiClient]) {
    if (apiClient != null) {
      this.apiClient = apiClient;
    }
  }

  
  /// 
  ///
  /// OAuth2 token endpoint
  Future<AccessToken> getToken(String grantType, String clientId, String clientSecret, String scope, String username, String password, String code, String redirectUri, String refreshToken) {
    Object postBody = null;
    

    // create path and map variables
    String path = "/oauth2/token".replaceAll("{format}","json");

    // query params
    Map<String, String> queryParams = {};
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    

    List<String> contentTypes = ["application/x-www-form-urlencoded"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = [];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      
      if (grantType != null) {
        hasFields = true;
        mp.fields['grant_type'] = apiClient.parameterToString(grantType);
      }
      
      if (clientId != null) {
        hasFields = true;
        mp.fields['client_id'] = apiClient.parameterToString(clientId);
      }
      
      if (clientSecret != null) {
        hasFields = true;
        mp.fields['client_secret'] = apiClient.parameterToString(clientSecret);
      }
      
      if (scope != null) {
        hasFields = true;
        mp.fields['scope'] = apiClient.parameterToString(scope);
      }
      
      if (username != null) {
        hasFields = true;
        mp.fields['username'] = apiClient.parameterToString(username);
      }
      
      if (password != null) {
        hasFields = true;
        mp.fields['password'] = apiClient.parameterToString(password);
      }
      
      if (code != null) {
        hasFields = true;
        mp.fields['code'] = apiClient.parameterToString(code);
      }
      
      if (redirectUri != null) {
        hasFields = true;
        mp.fields['redirect_uri'] = apiClient.parameterToString(redirectUri);
      }
      
      if (refreshToken != null) {
        hasFields = true;
        mp.fields['refresh_token'] = apiClient.parameterToString(refreshToken);
      }
      
      if(hasFields)
        postBody = mp;
    }
    else {
      if (grantType != null)
        formParams['grant_type'] = apiClient.parameterToString(grantType);
      if (clientId != null)
        formParams['client_id'] = apiClient.parameterToString(clientId);
      if (clientSecret != null)
        formParams['client_secret'] = apiClient.parameterToString(clientSecret);
      if (scope != null)
        formParams['scope'] = apiClient.parameterToString(scope);
      if (username != null)
        formParams['username'] = apiClient.parameterToString(username);
      if (password != null)
        formParams['password'] = apiClient.parameterToString(password);
      if (code != null)
        formParams['code'] = apiClient.parameterToString(code);
      if (redirectUri != null)
        formParams['redirect_uri'] = apiClient.parameterToString(redirectUri);
      if (refreshToken != null)
        formParams['refresh_token'] = apiClient.parameterToString(refreshToken);
      
    }

    return apiClient.invokeAPI(basePath, path, 'POST', queryParams, postBody, headerParams, formParams, contentType, authNames).then((response) {
      if(response.statusCode >= 400) {
        throw new ApiException(response.statusCode, response.body);
      }
      else if(response.body != null){
        return ApiClient.deserialize(response.body, AccessToken);
      }
      else {
        return null;
      }
    });
  }
  
}
