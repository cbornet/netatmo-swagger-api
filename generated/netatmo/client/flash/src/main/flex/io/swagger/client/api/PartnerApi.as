package io.swagger.client.api {

import io.swagger.common.ApiInvoker;
import io.swagger.exception.ApiErrorCodes;
import io.swagger.exception.ApiError;
import io.swagger.common.ApiUserCredentials;
import io.swagger.event.Response;
import io.swagger.common.SwaggerApi;
import io.swagger.client.model.NADeviceListResponse;
import io.swagger.client.model.NAMeasureResponse;
import io.swagger.client.model.NAThermStateResponse;
import io.swagger.client.model.NAPartnerDevicesResponse;

import mx.rpc.AsyncToken;
import mx.utils.UIDUtil;
import flash.utils.Dictionary;
import flash.events.EventDispatcher;

public class PartnerApi extends SwaggerApi {
    /**
    * Constructor for the PartnerApi api client
    * @param apiCredentials Wrapper object for tokens and hostName required towards authentication
    * @param eventDispatcher Optional event dispatcher that when provided is used by the SDK to dispatch any Response
    */
    public function PartnerApi(apiCredentials: ApiUserCredentials, eventDispatcher: EventDispatcher = null) {
        super(apiCredentials, eventDispatcher);
    }

        public static const event_devicelist: String = "devicelist";
        public static const event_getmeasure: String = "getmeasure";
        public static const event_getthermstate: String = "getthermstate";
        public static const event_partnerdevices: String = "partnerdevices";


    /*
     * Returns NADeviceListResponse 
     */
    public function devicelist (accessToken: String, appType: String, deviceId: String, getFavorites: Boolean): String {
        // create path and map variables
        var path: String = "/api/devicelist".replace(/{format}/g,"xml");

        // query params
        var queryParams: Dictionary = new Dictionary();
        var headerParams: Dictionary = new Dictionary();

        

        if("null" != String(accessToken))
            queryParams["accessToken"] = toPathValue(accessToken);
        if("null" != String(appType))
            queryParams["appType"] = toPathValue(appType);
        if("null" != String(deviceId))
            queryParams["deviceId"] = toPathValue(deviceId);
        if("null" != String(getFavorites))
            queryParams["getFavorites"] = toPathValue(getFavorites);
        

        

        var token:AsyncToken = getApiInvoker().invokeAPI(path, "GET", queryParams, null, headerParams);

        var requestId: String = getUniqueId();

        token.requestId = requestId;
        token.completionEventType = "devicelist";

        token.returnType = NADeviceListResponse;
        return requestId;

    }
    
    /*
     * Returns NAMeasureResponse 
     */
    public function getmeasure (accessToken: String, deviceId: String, scale: String, type: Array, moduleId: String, dateBegin: Number, dateEnd: Number, limit: Number, optimize: Boolean, realTime: Boolean): String {
        // create path and map variables
        var path: String = "/api/getmeasure".replace(/{format}/g,"xml");

        // query params
        var queryParams: Dictionary = new Dictionary();
        var headerParams: Dictionary = new Dictionary();

        

        if("null" != String(accessToken))
            queryParams["accessToken"] = toPathValue(accessToken);
        if("null" != String(deviceId))
            queryParams["deviceId"] = toPathValue(deviceId);
        if("null" != String(moduleId))
            queryParams["moduleId"] = toPathValue(moduleId);
        if("null" != String(scale))
            queryParams["scale"] = toPathValue(scale);
        if("null" != String(type))
            queryParams["type"] = toPathValue(type);
        if("null" != String(dateBegin))
            queryParams["dateBegin"] = toPathValue(dateBegin);
        if("null" != String(dateEnd))
            queryParams["dateEnd"] = toPathValue(dateEnd);
        if("null" != String(limit))
            queryParams["limit"] = toPathValue(limit);
        if("null" != String(optimize))
            queryParams["optimize"] = toPathValue(optimize);
        if("null" != String(realTime))
            queryParams["realTime"] = toPathValue(realTime);
        

        

        var token:AsyncToken = getApiInvoker().invokeAPI(path, "GET", queryParams, null, headerParams);

        var requestId: String = getUniqueId();

        token.requestId = requestId;
        token.completionEventType = "getmeasure";

        token.returnType = NAMeasureResponse;
        return requestId;

    }
    
    /*
     * Returns NAThermStateResponse 
     */
    public function getthermstate (accessToken: String, deviceId: String, moduleId: String): String {
        // create path and map variables
        var path: String = "/api/getthermstate".replace(/{format}/g,"xml");

        // query params
        var queryParams: Dictionary = new Dictionary();
        var headerParams: Dictionary = new Dictionary();

        

        if("null" != String(accessToken))
            queryParams["accessToken"] = toPathValue(accessToken);
        if("null" != String(deviceId))
            queryParams["deviceId"] = toPathValue(deviceId);
        if("null" != String(moduleId))
            queryParams["moduleId"] = toPathValue(moduleId);
        

        

        var token:AsyncToken = getApiInvoker().invokeAPI(path, "GET", queryParams, null, headerParams);

        var requestId: String = getUniqueId();

        token.requestId = requestId;
        token.completionEventType = "getthermstate";

        token.returnType = NAThermStateResponse;
        return requestId;

    }
    
    /*
     * Returns NAPartnerDevicesResponse 
     */
    public function partnerdevices (accessToken: String): String {
        // create path and map variables
        var path: String = "/api/partnerdevices".replace(/{format}/g,"xml");

        // query params
        var queryParams: Dictionary = new Dictionary();
        var headerParams: Dictionary = new Dictionary();

        

        if("null" != String(accessToken))
            queryParams["accessToken"] = toPathValue(accessToken);
        

        

        var token:AsyncToken = getApiInvoker().invokeAPI(path, "GET", queryParams, null, headerParams);

        var requestId: String = getUniqueId();

        token.requestId = requestId;
        token.completionEventType = "partnerdevices";

        token.returnType = NAPartnerDevicesResponse;
        return requestId;

    }
    
}
        
}
