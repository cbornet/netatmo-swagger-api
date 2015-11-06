#import "SWGOauthApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGAccessToken.h"


@interface SWGOauthApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGOauthApi

static SWGOauthApi* singletonAPI = nil;

#pragma mark - Initialize methods

- (id) init {
    self = [super init];
    if (self) {
        SWGConfiguration *config = [SWGConfiguration sharedConfig];
        if (config.apiClient == nil) {
            config.apiClient = [[SWGApiClient alloc] init];
        }
        self.apiClient = config.apiClient;
        self.defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

- (id) initWithApiClient:(SWGApiClient *)apiClient {
    self = [super init];
    if (self) {
        self.apiClient = apiClient;
        self.defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

+(SWGOauthApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGOauthApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(SWGOauthApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGOauthApi alloc] init];
    }
    return singletonAPI;
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(void) setHeaderValue:(NSString*) value
           forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(unsigned long) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}

#pragma mark - Api Methods

///
/// 
/// OAuth2 token endpoint
///  @param grantType Oauth2 grant type
///
///  @param clientId Application client ID
///
///  @param clientSecret Application client secret
///
///  @param scope Scopes to use, separated by a space
///
///  @param username User name if grant_type is password
///
///  @param password User password if grant_type is password
///
///  @param code Authorization code if grant_type is authorization_code
///
///  @param redirectUri Redirect URI if grant_type is authorization_code
///
///  @param refreshToken Refresh token if grant_type is refresh_token
///
///  @returns SWGAccessToken*
///
-(NSNumber*) getTokenWithCompletionBlock: (NSString*) grantType
         clientId: (NSString*) clientId
         clientSecret: (NSString*) clientSecret
         scope: (NSString*) scope
         username: (NSString*) username
         password: (NSString*) password
         code: (NSString*) code
         redirectUri: (NSString*) redirectUri
         refreshToken: (NSString*) refreshToken
        
        completionHandler: (void (^)(SWGAccessToken* output, NSError* error))completionBlock { 
        

    
    // verify the required parameter 'grantType' is set
    if (grantType == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `grantType` when calling `getToken`"];
    }
    
    // verify the required parameter 'clientId' is set
    if (clientId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `clientId` when calling `getToken`"];
    }
    
    // verify the required parameter 'clientSecret' is set
    if (clientSecret == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `clientSecret` when calling `getToken`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/oauth2/token"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[@"application/x-www-form-urlencoded"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *files = [[NSMutableDictionary alloc] init];
    
    
    
    if (grantType) {
        formParams[@"grant_type"] = grantType;
    }
    
    
    
    if (clientId) {
        formParams[@"client_id"] = clientId;
    }
    
    
    
    if (clientSecret) {
        formParams[@"client_secret"] = clientSecret;
    }
    
    
    
    if (scope) {
        formParams[@"scope"] = scope;
    }
    
    
    
    if (username) {
        formParams[@"username"] = username;
    }
    
    
    
    if (password) {
        formParams[@"password"] = password;
    }
    
    
    
    if (code) {
        formParams[@"code"] = code;
    }
    
    
    
    if (redirectUri) {
        formParams[@"redirect_uri"] = redirectUri;
    }
    
    
    
    if (refreshToken) {
        formParams[@"refresh_token"] = refreshToken;
    }
    
    
    

    
    return [self.apiClient requestWithCompletionBlock: resourcePath
                                               method: @"POST"
                                           pathParams: pathParams
                                          queryParams: queryParams
                                           formParams: formParams
                                                files: files
                                                 body: bodyParam
                                         headerParams: headerParams
                                         authSettings: authSettings
                                   requestContentType: requestContentType
                                  responseContentType: responseContentType
                                         responseType: @"SWGAccessToken*"
                                      completionBlock: ^(id data, NSError *error) {
                  
                  completionBlock((SWGAccessToken*)data, error);
              }
          ];
}



@end
