/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

module API.Client {
    'use strict';

    export class PrivateApi {
        private basePath = 'https://api.netatmo.net/api';

        static $inject: string[] = ['$http', '$httpParamSerializer'];

        constructor(private $http: ng.IHttpService, basePath?: string, private $httpParamSerializer?: (any) => any) {
            if (basePath) {
                this.basePath = basePath;
            }
        }

        public createnewschedule (deviceId: string, moduleId: string, thermProgram: NAThermProgram, extraHttpRequestParams?: any ) : ng.IHttpPromise<NANewScheduleResponse> {
            var path = this.basePath + '/createnewschedule';

            var queryParameters: any = {};
            var headerParams: any = {};
            // verify required parameter 'deviceId' is set
            if (!deviceId) {
                throw new Error('Missing required parameter deviceId when calling createnewschedule');
            }

            // verify required parameter 'moduleId' is set
            if (!moduleId) {
                throw new Error('Missing required parameter moduleId when calling createnewschedule');
            }

            // verify required parameter 'thermProgram' is set
            if (!thermProgram) {
                throw new Error('Missing required parameter thermProgram when calling createnewschedule');
            }

            if (deviceId !== undefined) {
                queryParameters['device_id'] = deviceId;
            }

            if (moduleId !== undefined) {
                queryParameters['module_id'] = moduleId;
            }

            var httpRequestParams: any = {
                method: 'POST',
                url: path,
                json: true,
                data: thermProgram,
                
                
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

        public devicelist (appType?: string, deviceId?: string, getFavorites?: boolean, extraHttpRequestParams?: any ) : ng.IHttpPromise<NADeviceListResponse> {
            var path = this.basePath + '/devicelist';

            var queryParameters: any = {};
            var headerParams: any = {};
            if (appType !== undefined) {
                queryParameters['app_type'] = appType;
            }

            if (deviceId !== undefined) {
                queryParameters['device_id'] = deviceId;
            }

            if (getFavorites !== undefined) {
                queryParameters['get_favorites'] = getFavorites;
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

        public getmeasure (deviceId: string, scale: string, type: string, moduleId?: string, dateBegin?: number, dateEnd?: number, limit?: number, optimize?: boolean, realTime?: boolean, extraHttpRequestParams?: any ) : ng.IHttpPromise<NAMeasureResponse> {
            var path = this.basePath + '/getmeasure';

            var queryParameters: any = {};
            var headerParams: any = {};
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

        public getthermstate (deviceId: string, moduleId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<NAThermStateResponse> {
            var path = this.basePath + '/getthermstate';

            var queryParameters: any = {};
            var headerParams: any = {};
            // verify required parameter 'deviceId' is set
            if (!deviceId) {
                throw new Error('Missing required parameter deviceId when calling getthermstate');
            }

            // verify required parameter 'moduleId' is set
            if (!moduleId) {
                throw new Error('Missing required parameter moduleId when calling getthermstate');
            }

            if (deviceId !== undefined) {
                queryParameters['device_id'] = deviceId;
            }

            if (moduleId !== undefined) {
                queryParameters['module_id'] = moduleId;
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

        public getuser (extraHttpRequestParams?: any ) : ng.IHttpPromise<NAUserResponse> {
            var path = this.basePath + '/getuser';

            var queryParameters: any = {};
            var headerParams: any = {};
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

        public setthermpoint (deviceId: string, moduleId: string, setpointMode: string, setpointEndtime?: number, setpointTemp?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<NAOkResponse> {
            var path = this.basePath + '/setthermpoint';

            var queryParameters: any = {};
            var headerParams: any = {};
            // verify required parameter 'deviceId' is set
            if (!deviceId) {
                throw new Error('Missing required parameter deviceId when calling setthermpoint');
            }

            // verify required parameter 'moduleId' is set
            if (!moduleId) {
                throw new Error('Missing required parameter moduleId when calling setthermpoint');
            }

            // verify required parameter 'setpointMode' is set
            if (!setpointMode) {
                throw new Error('Missing required parameter setpointMode when calling setthermpoint');
            }

            if (deviceId !== undefined) {
                queryParameters['device_id'] = deviceId;
            }

            if (moduleId !== undefined) {
                queryParameters['module_id'] = moduleId;
            }

            if (setpointMode !== undefined) {
                queryParameters['setpoint_mode'] = setpointMode;
            }

            if (setpointEndtime !== undefined) {
                queryParameters['setpoint_endtime'] = setpointEndtime;
            }

            if (setpointTemp !== undefined) {
                queryParameters['setpoint_temp'] = setpointTemp;
            }

            var httpRequestParams: any = {
                method: 'POST',
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

        public switchschedule (deviceId: string, moduleId: string, scheduleId: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<NAOkResponse> {
            var path = this.basePath + '/switchschedule';

            var queryParameters: any = {};
            var headerParams: any = {};
            // verify required parameter 'deviceId' is set
            if (!deviceId) {
                throw new Error('Missing required parameter deviceId when calling switchschedule');
            }

            // verify required parameter 'moduleId' is set
            if (!moduleId) {
                throw new Error('Missing required parameter moduleId when calling switchschedule');
            }

            // verify required parameter 'scheduleId' is set
            if (!scheduleId) {
                throw new Error('Missing required parameter scheduleId when calling switchschedule');
            }

            if (deviceId !== undefined) {
                queryParameters['device_id'] = deviceId;
            }

            if (moduleId !== undefined) {
                queryParameters['module_id'] = moduleId;
            }

            if (scheduleId !== undefined) {
                queryParameters['schedule_id'] = scheduleId;
            }

            var httpRequestParams: any = {
                method: 'POST',
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

        public syncschedule (deviceId: string, moduleId: string, thermProgram: NAThermProgram, extraHttpRequestParams?: any ) : ng.IHttpPromise<NAOkResponse> {
            var path = this.basePath + '/syncschedule';

            var queryParameters: any = {};
            var headerParams: any = {};
            // verify required parameter 'deviceId' is set
            if (!deviceId) {
                throw new Error('Missing required parameter deviceId when calling syncschedule');
            }

            // verify required parameter 'moduleId' is set
            if (!moduleId) {
                throw new Error('Missing required parameter moduleId when calling syncschedule');
            }

            // verify required parameter 'thermProgram' is set
            if (!thermProgram) {
                throw new Error('Missing required parameter thermProgram when calling syncschedule');
            }

            if (deviceId !== undefined) {
                queryParameters['device_id'] = deviceId;
            }

            if (moduleId !== undefined) {
                queryParameters['module_id'] = moduleId;
            }

            var httpRequestParams: any = {
                method: 'POST',
                url: path,
                json: true,
                data: thermProgram,
                
                
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
