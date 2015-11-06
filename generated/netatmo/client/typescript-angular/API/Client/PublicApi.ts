/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

module API.Client {
    'use strict';

    export class PublicApi {
        private basePath = 'https://api.netatmo.net/';

        static $inject: string[] = ['$http', '$httpParamSerializer'];

        constructor(private $http: ng.IHttpService, basePath?: string, private $httpParamSerializer?: (any) => any) {
            if (basePath) {
                this.basePath = basePath;
            }
        }

        public getmeasure (accessToken: string, deviceId: string, scale: string, type: Array<string>, moduleId?: string, dateBegin?: number, dateEnd?: number, limit?: number, optimize?: boolean, realTime?: boolean, extraHttpRequestParams?: any ) : ng.IHttpPromise<NAMeasureResponse> {
            var path = this.basePath + '/api/getmeasure';

            var queryParameters: any = {};
            var headerParams: any = {};
            // verify required parameter 'accessToken' is set
            if (!accessToken) {
                throw new Error('Missing required parameter accessToken when calling getmeasure');
            }

            // verify required parameter 'deviceId' is set
            if (!deviceId) {
                throw new Error('Missing required parameter deviceId when calling getmeasure');
            }

            // verify required parameter 'scale' is set
            if (!scale) {
                throw new Error('Missing required parameter scale when calling getmeasure');
            }

            // verify required parameter 'type' is set
            if (!type) {
                throw new Error('Missing required parameter type when calling getmeasure');
            }

            if (accessToken !== undefined) {
                queryParameters['access_token'] = accessToken;
            }

            if (deviceId !== undefined) {
                queryParameters['device_id'] = deviceId;
            }

            if (moduleId !== undefined) {
                queryParameters['module_id'] = moduleId;
            }

            if (scale !== undefined) {
                queryParameters['scale'] = scale;
            }

            if (type !== undefined) {
                queryParameters['type'] = type;
            }

            if (dateBegin !== undefined) {
                queryParameters['date_begin'] = dateBegin;
            }

            if (dateEnd !== undefined) {
                queryParameters['date_end'] = dateEnd;
            }

            if (limit !== undefined) {
                queryParameters['limit'] = limit;
            }

            if (optimize !== undefined) {
                queryParameters['optimize'] = optimize;
            }

            if (realTime !== undefined) {
                queryParameters['real_time'] = realTime;
            }

            var httpRequestParams: any = {
                method: 'GET',
                url: path,
                json: true,
                
                
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
