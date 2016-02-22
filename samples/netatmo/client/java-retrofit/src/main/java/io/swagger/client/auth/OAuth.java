package io.swagger.client.auth;

import static java.net.HttpURLConnection.HTTP_UNAUTHORIZED;

import java.io.IOException;
import java.util.Map;

import org.apache.oltu.oauth2.client.OAuthClient;
import org.apache.oltu.oauth2.client.request.OAuthBearerClientRequest;
import org.apache.oltu.oauth2.client.request.OAuthClientRequest;
import org.apache.oltu.oauth2.client.request.OAuthClientRequest.AuthenticationRequestBuilder;
import org.apache.oltu.oauth2.client.request.OAuthClientRequest.TokenRequestBuilder;
import org.apache.oltu.oauth2.client.response.OAuthJSONAccessTokenResponse;
import org.apache.oltu.oauth2.common.exception.OAuthProblemException;
import org.apache.oltu.oauth2.common.exception.OAuthSystemException;
import org.apache.oltu.oauth2.common.message.types.GrantType;

import com.squareup.okhttp.Interceptor;
import com.squareup.okhttp.OkHttpClient;
import com.squareup.okhttp.Request;
import com.squareup.okhttp.Request.Builder;
import com.squareup.okhttp.Response;

public class OAuth implements Interceptor {

    private volatile String accessToken;
    private OAuthClient oauthClient;

    private TokenRequestBuilder tokenRequestBuilder;
    private AuthenticationRequestBuilder authenticationRequestBuilder;

    public OAuth( OkHttpClient client, TokenRequestBuilder requestBuilder ) {
        this.oauthClient = new OAuthClient(new OAuthOkHttpClient(client));
        this.tokenRequestBuilder = requestBuilder;
    }

    public OAuth(OkHttpClient client, OAuthFlow flow, String authorizationUrl, String tokenUrl, String scopes) {
        this(client, OAuthClientRequest.tokenLocation(tokenUrl).setScope(scopes));
        setFlow(flow);
        authenticationRequestBuilder = OAuthClientRequest.authorizationLocation(authorizationUrl);
    }

    public void setFlow(OAuthFlow flow) {
        switch(flow) {
        case accessCode:
        case implicit:
            tokenRequestBuilder.setGrantType(GrantType.AUTHORIZATION_CODE);
            break;
        case password:
            tokenRequestBuilder.setGrantType(GrantType.PASSWORD);
            break;
        case application:
            tokenRequestBuilder.setGrantType(GrantType.CLIENT_CREDENTIALS);
            break;
        default:
            break;
        }            
    }

    @Override
    public Response intercept(Chain chain) throws IOException {

        // If the request already have an authorization (eg. Basic auth), do nothing
        Request request = chain.request();
        if (request.header("Authorization") != null) {
            return chain.proceed(request);
        }

        // If first time, get the token
        if (getAccessToken() == null) {
            updateAccessToken(null);
        }
        String requestAccessToken = new String(getAccessToken());
        Response response = addAccessTokenAndProceed(chain);

        // 401 most likely indicates that access token has expired.
        // Time to refresh and resend the request
        if ( response.code() == HTTP_UNAUTHORIZED ) {
            updateAccessToken(requestAccessToken);
            return addAccessTokenAndProceed(chain);
        }
        return response;
    }
    
    public Response addAccessTokenAndProceed(Chain chain) throws IOException {
        Request request = chain.request();

        // Build the request
        Builder rb = request.newBuilder();
        OAuthClientRequest oAuthRequest; 
        try {
            oAuthRequest = new OAuthBearerClientRequest(request.urlString())
            .setAccessToken(getAccessToken())
            .buildHeaderMessage();
        } catch (OAuthSystemException e) {
            throw new IOException(e);
        }

        for ( Map.Entry<String, String> header : oAuthRequest.getHeaders().entrySet() ) {
            rb.addHeader(header.getKey(), header.getValue());
        }
        rb.url( oAuthRequest.getLocationUri());

        //Execute the request
        return chain.proceed(rb.build());
    }

    public synchronized void updateAccessToken(String requestAccessToken) throws IOException {
        if (getAccessToken() == null || getAccessToken().equals(requestAccessToken)) {    
            try {
                OAuthJSONAccessTokenResponse accessTokenResponse = oauthClient.accessToken(this.tokenRequestBuilder.buildBodyMessage());
                setAccessToken(accessTokenResponse.getAccessToken());
            } catch (OAuthSystemException e) {
                throw new IOException(e);
            } catch (OAuthProblemException e) {
                throw new IOException(e);
            }
        }
    }

    public synchronized String getAccessToken() {
        return accessToken;
    }

    public synchronized void setAccessToken(String accessToken) {
        this.accessToken = accessToken;
    }

    public TokenRequestBuilder getTokenRequestBuilder() {
        return tokenRequestBuilder;
    }

    public void setTokenRequestBuilder(TokenRequestBuilder tokenRequestBuilder) {
        this.tokenRequestBuilder = tokenRequestBuilder;
    }

    public AuthenticationRequestBuilder getAuthenticationRequestBuilder() {
        return authenticationRequestBuilder;
    }

    public void setAuthenticationRequestBuilder(AuthenticationRequestBuilder authenticationRequestBuilder) {
        this.authenticationRequestBuilder = authenticationRequestBuilder;
    }

}
