/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

module API.Client {
    'use strict';

    export class OauthApi {
        private basePath = 'https://api.netatmo.net/';

        static $inject: string[] = ['$http', '$httpParamSerializer'];

        constructor(private $http: ng.IHttpService, basePath?: string, private $httpParamSerializer?: (any) => any) {
            if (basePath) {
                this.basePath = basePath;
            }
        }

        public getToken (grantType: string, clientId: string, clientSecret: string, scope?: string, username?: string, password?: string, code?: string, redirectUri?: string, refreshToken?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<AccessToken> {
            var path = this.basePath + '/oauth2/token';

            var queryParameters: any = {};
            var headerParams: any = {};
            var formParams: any = {};

            // verify required parameter 'grantType' is set
            if (!grantType) {
                throw new Error('Missing required parameter grantType when calling getToken');
            }

            // verify required parameter 'clientId' is set
            if (!clientId) {
                throw new Error('Missing required parameter clientId when calling getToken');
            }

            // verify required parameter 'clientSecret' is set
            if (!clientSecret) {
                throw new Error('Missing required parameter clientSecret when calling getToken');
            }

            headerParams['Content-Type'] = 'application/x-www-form-urlencoded';

            formParams['grant_type'] = grantType;
            
            formParams['client_id'] = clientId;
            
            formParams['client_secret'] = clientSecret;
            
            formParams['scope'] = scope;
            
            formParams['username'] = username;
            
            formParams['password'] = password;
            
            formParams['code'] = code;
            
            formParams['redirect_uri'] = redirectUri;
            
            formParams['refresh_token'] = refreshToken;
            
            var httpRequestParams: any = {
                method: 'POST',
                url: path,
                json: false,
                
                data: this.$httpParamSerializer(formParams),
                
                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                for (var k in extraHttpRequestParams) {
                    if (extraHttpRequestParams.hasOwnProperty(k)) {
                        httpRequestParams[k] = extraHttpRequestParams[k];
                    }
                }
            }

            return this.$http(httpRequestParams);
        }
    }
}
