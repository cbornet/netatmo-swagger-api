using System;
using System.IO;
using System.Collections.Generic;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IOauthApi
    {
        
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// OAuth2 token endpoint
        /// </remarks>
        /// <param name="grantType">Oauth2 grant type</param>
        /// <param name="clientId">Application client ID</param>
        /// <param name="clientSecret">Application client secret</param>
        /// <param name="scope">Scopes to use, separated by a space</param>
        /// <param name="username">User name if grant_type is password</param>
        /// <param name="password">User password if grant_type is password</param>
        /// <param name="code">Authorization code if grant_type is authorization_code</param>
        /// <param name="redirectUri">Redirect URI if grant_type is authorization_code</param>
        /// <param name="refreshToken">Refresh token if grant_type is refresh_token</param>
        /// <returns>AccessToken</returns>
        AccessToken GetToken (string grantType, string clientId, string clientSecret, string scope, string username, string password, string code, string redirectUri, string refreshToken);
  
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// OAuth2 token endpoint
        /// </remarks>
        /// <param name="grantType">Oauth2 grant type</param>
        /// <param name="clientId">Application client ID</param>
        /// <param name="clientSecret">Application client secret</param>
        /// <param name="scope">Scopes to use, separated by a space</param>
        /// <param name="username">User name if grant_type is password</param>
        /// <param name="password">User password if grant_type is password</param>
        /// <param name="code">Authorization code if grant_type is authorization_code</param>
        /// <param name="redirectUri">Redirect URI if grant_type is authorization_code</param>
        /// <param name="refreshToken">Refresh token if grant_type is refresh_token</param>
        /// <returns>AccessToken</returns>
        System.Threading.Tasks.Task<AccessToken> GetTokenAsync (string grantType, string clientId, string clientSecret, string scope, string username, string password, string code, string redirectUri, string refreshToken);
        
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class OauthApi : IOauthApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public OauthApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="OauthApi"/> class.
        /// </summary>
        /// <returns></returns>
        public OauthApi(String basePath)
        {
            this.ApiClient = new ApiClient(basePath);
        }
    
        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <param name="basePath">The base path</param>
        /// <value>The base path</value>
        public void SetBasePath(String basePath)
        {
            this.ApiClient.BasePath = basePath;
        }
    
        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.ApiClient.BasePath;
        }
    
        /// <summary>
        /// Gets or sets the API client.
        /// </summary>
        /// <value>An instance of the ApiClient</value>
        public ApiClient ApiClient {get; set;}
    
        
        /// <summary>
        ///  OAuth2 token endpoint
        /// </summary>
        /// <param name="grantType">Oauth2 grant type</param> 
        /// <param name="clientId">Application client ID</param> 
        /// <param name="clientSecret">Application client secret</param> 
        /// <param name="scope">Scopes to use, separated by a space</param> 
        /// <param name="username">User name if grant_type is password</param> 
        /// <param name="password">User password if grant_type is password</param> 
        /// <param name="code">Authorization code if grant_type is authorization_code</param> 
        /// <param name="redirectUri">Redirect URI if grant_type is authorization_code</param> 
        /// <param name="refreshToken">Refresh token if grant_type is refresh_token</param> 
        /// <returns>AccessToken</returns>            
        public AccessToken GetToken (string grantType, string clientId, string clientSecret, string scope, string username, string password, string code, string redirectUri, string refreshToken)
        {
            
            // verify the required parameter 'grantType' is set
            if (grantType == null) throw new ApiException(400, "Missing required parameter 'grantType' when calling GetToken");
            
            // verify the required parameter 'clientId' is set
            if (clientId == null) throw new ApiException(400, "Missing required parameter 'clientId' when calling GetToken");
            
            // verify the required parameter 'clientSecret' is set
            if (clientSecret == null) throw new ApiException(400, "Missing required parameter 'clientSecret' when calling GetToken");
            
    
            var path = "/oauth2/token";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                "application/json"
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            
            
            if (grantType != null) formParams.Add("grant_type", ApiClient.ParameterToString(grantType)); // form parameter
            if (clientId != null) formParams.Add("client_id", ApiClient.ParameterToString(clientId)); // form parameter
            if (clientSecret != null) formParams.Add("client_secret", ApiClient.ParameterToString(clientSecret)); // form parameter
            if (scope != null) formParams.Add("scope", ApiClient.ParameterToString(scope)); // form parameter
            if (username != null) formParams.Add("username", ApiClient.ParameterToString(username)); // form parameter
            if (password != null) formParams.Add("password", ApiClient.ParameterToString(password)); // form parameter
            if (code != null) formParams.Add("code", ApiClient.ParameterToString(code)); // form parameter
            if (redirectUri != null) formParams.Add("redirect_uri", ApiClient.ParameterToString(redirectUri)); // form parameter
            if (refreshToken != null) formParams.Add("refresh_token", ApiClient.ParameterToString(refreshToken)); // form parameter
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] {  };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetToken: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetToken: " + response.ErrorMessage, response.ErrorMessage);
    
            return (AccessToken) ApiClient.Deserialize(response.Content, typeof(AccessToken), response.Headers);
        }
    
        /// <summary>
        ///  OAuth2 token endpoint
        /// </summary>
        /// <param name="grantType">Oauth2 grant type</param>
        /// <param name="clientId">Application client ID</param>
        /// <param name="clientSecret">Application client secret</param>
        /// <param name="scope">Scopes to use, separated by a space</param>
        /// <param name="username">User name if grant_type is password</param>
        /// <param name="password">User password if grant_type is password</param>
        /// <param name="code">Authorization code if grant_type is authorization_code</param>
        /// <param name="redirectUri">Redirect URI if grant_type is authorization_code</param>
        /// <param name="refreshToken">Refresh token if grant_type is refresh_token</param>
        /// <returns>AccessToken</returns>
        public async System.Threading.Tasks.Task<AccessToken> GetTokenAsync (string grantType, string clientId, string clientSecret, string scope, string username, string password, string code, string redirectUri, string refreshToken)
        {
            // verify the required parameter 'grantType' is set
            if (grantType == null) throw new ApiException(400, "Missing required parameter 'grantType' when calling GetToken");
            // verify the required parameter 'clientId' is set
            if (clientId == null) throw new ApiException(400, "Missing required parameter 'clientId' when calling GetToken");
            // verify the required parameter 'clientSecret' is set
            if (clientSecret == null) throw new ApiException(400, "Missing required parameter 'clientSecret' when calling GetToken");
            
    
            var path = "/oauth2/token";
    
            var pathParams = new Dictionary<String, String>();
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;

            // to determine the Accept header
            String[] http_header_accepts = new String[] {
                "application/json"
            };
            String http_header_accept = ApiClient.SelectHeaderAccept(http_header_accepts);
            if (http_header_accept != null)
                headerParams.Add("Accept", ApiClient.SelectHeaderAccept(http_header_accepts));

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            pathParams.Add("format", "json");
            
            
            
            if (grantType != null) formParams.Add("grant_type", ApiClient.ParameterToString(grantType)); // form parameter
            if (clientId != null) formParams.Add("client_id", ApiClient.ParameterToString(clientId)); // form parameter
            if (clientSecret != null) formParams.Add("client_secret", ApiClient.ParameterToString(clientSecret)); // form parameter
            if (scope != null) formParams.Add("scope", ApiClient.ParameterToString(scope)); // form parameter
            if (username != null) formParams.Add("username", ApiClient.ParameterToString(username)); // form parameter
            if (password != null) formParams.Add("password", ApiClient.ParameterToString(password)); // form parameter
            if (code != null) formParams.Add("code", ApiClient.ParameterToString(code)); // form parameter
            if (redirectUri != null) formParams.Add("redirect_uri", ApiClient.ParameterToString(redirectUri)); // form parameter
            if (refreshToken != null) formParams.Add("refresh_token", ApiClient.ParameterToString(refreshToken)); // form parameter
            
            
    
            // authentication setting, if any
            String[] authSettings = new String[] {  };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) await ApiClient.CallApiAsync(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, pathParams, authSettings);
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetToken: " + response.Content, response.Content);

            return (AccessToken) ApiClient.Deserialize(response.Content, typeof(AccessToken), response.Headers);
        }
        
    }
    
}
