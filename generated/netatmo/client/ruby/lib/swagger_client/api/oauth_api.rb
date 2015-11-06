require "uri"

module SwaggerClient
  class OauthApi
    attr_accessor :api_client

    def initialize(api_client = nil)
      @api_client = api_client || Configuration.api_client
    end

    # 
    # OAuth2 token endpoint
    # @param grant_type Oauth2 grant type
    # @param client_id Application client ID
    # @param client_secret Application client secret
    # @param [Hash] opts the optional parameters
    # @option opts [String] :scope Scopes to use, separated by a space
    # @option opts [String] :username User name if grant_type is password
    # @option opts [String] :password User password if grant_type is password
    # @option opts [String] :code Authorization code if grant_type is authorization_code
    # @option opts [String] :redirect_uri Redirect URI if grant_type is authorization_code
    # @option opts [String] :refresh_token Refresh token if grant_type is refresh_token
    # @return [AccessToken]
    def get_token(grant_type, client_id, client_secret, opts = {})
      if Configuration.debugging
        Configuration.logger.debug "Calling API: OauthApi#get_token ..."
      end
      
      # verify the required parameter 'grant_type' is set
      fail "Missing the required parameter 'grant_type' when calling get_token" if grant_type.nil?
      unless ['password', 'authorization_code', 'refresh_token'].include?(grant_type)
        fail "invalid value for 'grant_type', must be one of password, authorization_code, refresh_token"
      end
      
      # verify the required parameter 'client_id' is set
      fail "Missing the required parameter 'client_id' when calling get_token" if client_id.nil?
      
      # verify the required parameter 'client_secret' is set
      fail "Missing the required parameter 'client_secret' when calling get_token" if client_secret.nil?
      
      # resource path
      path = "/oauth2/token".sub('{format}','json')

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = ['application/json']
      _header_accept_result = @api_client.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = ['application/x-www-form-urlencoded']
      header_params['Content-Type'] = @api_client.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}
      form_params["grant_type"] = grant_type
      form_params["client_id"] = client_id
      form_params["client_secret"] = client_secret
      form_params["scope"] = opts[:'scope'] if opts[:'scope']
      form_params["username"] = opts[:'username'] if opts[:'username']
      form_params["password"] = opts[:'password'] if opts[:'password']
      form_params["code"] = opts[:'code'] if opts[:'code']
      form_params["redirect_uri"] = opts[:'redirect_uri'] if opts[:'redirect_uri']
      form_params["refresh_token"] = opts[:'refresh_token'] if opts[:'refresh_token']

      # http body (model)
      post_body = nil
      

      auth_names = []
      result = @api_client.call_api(:POST, path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'AccessToken')
      if Configuration.debugging
        Configuration.logger.debug "API called: OauthApi#get_token. Result: #{result.inspect}"
      end
      return result
    end
  end
end




