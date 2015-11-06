#import "SWGStationApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGNADeviceListResponse.h"
#import "SWGNAMeasureResponse.h"
#import "SWGNAUserResponse.h"


@interface SWGStationApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation SWGStationApi

static SWGStationApi* singletonAPI = nil;

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

+(SWGStationApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGStationApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(SWGStationApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[SWGStationApi alloc] init];
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
/// The method devicelist returns the list of devices owned by the user, and their modules.\nA device is identified by its _id (which is its mac address) and each device may have one, several or no modules, also identified by an _id.
///  @param accessToken Your access token
///
///  @param appType Defines which device type will be returned by devicelist. It could be app_thermostat or app_station (by default if not provided)
///
///  @param deviceId Specify a device_id if you want to retrieve only this device informations.
///
///  @param getFavorites When set to \"true\", the favorite devices of the user are returned. This flag is available only if the devices requested are Weather Stations.
///
///  @returns SWGNADeviceListResponse*
///
-(NSNumber*) devicelistWithCompletionBlock: (NSString*) accessToken
         appType: (NSString*) appType
         deviceId: (NSString*) deviceId
         getFavorites: (NSNumber*) getFavorites
        
        completionHandler: (void (^)(SWGNADeviceListResponse* output, NSError* error))completionBlock { 
        

    
    // verify the required parameter 'accessToken' is set
    if (accessToken == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `accessToken` when calling `devicelist`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/api/devicelist"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(accessToken != nil) {
        
        queryParams[@"access_token"] = accessToken;
    }
    if(appType != nil) {
        
        queryParams[@"app_type"] = appType;
    }
    if(deviceId != nil) {
        
        queryParams[@"device_id"] = deviceId;
    }
    if(getFavorites != nil) {
        
        queryParams[@"get_favorites"] = getFavorites;
    }
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[]];
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
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *files = [[NSMutableDictionary alloc] init];
    
    
    

    
    return [self.apiClient requestWithCompletionBlock: resourcePath
                                               method: @"GET"
                                           pathParams: pathParams
                                          queryParams: queryParams
                                           formParams: formParams
                                                files: files
                                                 body: bodyParam
                                         headerParams: headerParams
                                         authSettings: authSettings
                                   requestContentType: requestContentType
                                  responseContentType: responseContentType
                                         responseType: @"SWGNADeviceListResponse*"
                                      completionBlock: ^(id data, NSError *error) {
                  
                  completionBlock((SWGNADeviceListResponse*)data, error);
              }
          ];
}

///
/// 
/// The method getmeasure returns the measurements of a device or a module.
///  @param accessToken Your access token
///
///  @param deviceId Id of the device whose module's measurements you want to retrieve. This _id can be found in the user's devices field.
///
///  @param scale Defines the time interval between two measurements.\nPossible values :\nmax -> every value stored will be returned\n30min -> 1 value every 30 minutes\n1hour -> 1 value every hour\n3hours -> 1 value every 3 hours\n1day -> 1 value per day\n1week -> 1 value per week\n1month -> 1 value per month
///
///  @param type Sets the type of measurement you want to retrieve.\nThe different types of measurements must be given in a comma separated list of strings.\nExample: type=\"Temperature,Humidity\"\nDepending on the device's type and the scale, different measurements are available:\nFor Weather Station :\n\n  max -> Temperature, CO2, Humidity, Pressure, Noise, Rain (if\nmodule_id is a rain sensor)\n\n  30min, 1hour, 3hours -> Temperature, CO2, Humidity, Pressure,\nNoise, min_temp, max_temp, min_hum, max_hum, min_pressure, max_pressure, min_noise, max_noise, sum_rain (if module_id is a rain sensor)\n\n  1day, 1week, 1month -> Temperature, Co2, Humidity, Pressure, Noise,\nmin_temp, date_min_temp, max_temp, date_max_temp, min_hum, date_min_hum, max_hum, date_max_hum, min_pressure, date_min_pressure, max_pressure, date_max_pressure, min_noise, date_min_noise, max_noise, date_max_noise, date_min_co2, date_max_co2, sum_rain (if module_id is a rain sensor)\nPlease note, the measurements sent in the response will be in the same order as in this list.\nAll measurements are expressed in metric units:\n\n  Temperature: Celsius\n\n  Humidity: %\n\n  Co2: ppm\n\n  Pressure: mbar\n\n  Noise: db\n\n  Rain: mm\n\nFor Thermostat:\n\n  max -> Temperature, Sp_Temperature, BoilerOn, BoilerOff\n\n  30min, 1hour, 3hours -> Temperature, Sp_Temperature, min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  1day, 1week, 1month -> Temperature, min_temp, date_min_temp,\nmax_temp, sum_boiler_on, sum_boiler_off\n\n  where\n\nTemperature: Celsius\n\n  Sp_Temperature (temperature setpoint): Celsius\n\n  BoilerOn: Duration, since the previous data point, during which the\nboiler has been on (in seconds)\n\n  BoilerOff : Duration, since the previous data point, during which\nthe boiler has been off (in seconds).\n\n  sum_boiler_on: Total duration during which the boiler has been on,\nat a specific scale (in seconds).\n\n  sum_boiler_off: Total duration during which the boiler has been\noff, at a specific scale (in seconds).
///
///  @param moduleId If you don't specify any module_id you will retrieve the device's measurements. If you specify a module_id you will retrieve the module's measurements.
///
///  @param dateBegin Starting timestamp (utc) of the requested measurements.\nPlease note measurement retrieving is limited to 1024 measurements.
///
///  @param dateEnd Ending timestamp (utc) of the request measurements.\nIf you want only the last measurement, do not provide date_begin, and set date_end to \"last\".
///
///  @param limit Limits the number of measurements returned (default & max is 1024)
///
///  @param optimize Allows you to choose the format of the answer.\nIf you build a mobile app and bandwith usage is an issue, use optimize = true.\nUse optimize = false, for an easier parse. In this case, values are indexed by sorted timestamp.\nExample of un-optimized response :\n{\"status\": \"ok\", \n  \"body\": {\n    \"1347575400\": [18.3,39],\n    \"1347586200\": [20.6,48]\n  },\n\"time_exec\": 0.012136936187744}\nIf optimize is set true, measurements are returned as an array of series of regularly spaced measurements. Each series is defined by a beginning time beg_time and a step between measurements, step_time:\n{\"status\": \"ok\",\n  \"body\": [\n    {\"beg_time\": 1347575400,\n     \"step_time\": 10800,\n     \"value\": \n        [[18.3,39],\n        [ 20.6,48]]\n    }],\n\"time_exec\": 0.014238119125366}\nDefault value is true.
///
///  @param realTime In scales higher than max, since the data is aggregated, the timestamps returned are by default offset by +(scale/2).\nFor instance, if you ask for measurements at a daily scale, you will receive data timestamped at 12:00 if real_time is set to false (default case), and timestamped at 00:00 if real_time is set to true.\nNB : The servers always store data with real_time set to true and data are offset by this parameter AFTER having being time-filtered, thus you could have data after date_end if real_time is set to false.
///
///  @returns SWGNAMeasureResponse*
///
-(NSNumber*) getmeasureWithCompletionBlock: (NSString*) accessToken
         deviceId: (NSString*) deviceId
         scale: (NSString*) scale
         type: (NSArray* /* NSString */) type
         moduleId: (NSString*) moduleId
         dateBegin: (NSNumber*) dateBegin
         dateEnd: (NSNumber*) dateEnd
         limit: (NSNumber*) limit
         optimize: (NSNumber*) optimize
         realTime: (NSNumber*) realTime
        
        completionHandler: (void (^)(SWGNAMeasureResponse* output, NSError* error))completionBlock { 
        

    
    // verify the required parameter 'accessToken' is set
    if (accessToken == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `accessToken` when calling `getmeasure`"];
    }
    
    // verify the required parameter 'deviceId' is set
    if (deviceId == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `deviceId` when calling `getmeasure`"];
    }
    
    // verify the required parameter 'scale' is set
    if (scale == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `scale` when calling `getmeasure`"];
    }
    
    // verify the required parameter 'type' is set
    if (type == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `type` when calling `getmeasure`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/api/getmeasure"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(accessToken != nil) {
        
        queryParams[@"access_token"] = accessToken;
    }
    if(deviceId != nil) {
        
        queryParams[@"device_id"] = deviceId;
    }
    if(moduleId != nil) {
        
        queryParams[@"module_id"] = moduleId;
    }
    if(scale != nil) {
        
        queryParams[@"scale"] = scale;
    }
    if(type != nil) {
        
        queryParams[@"type"] = [[SWGQueryParamCollection alloc] initWithValuesAndFormat: type format: @"csv"];
        
        
    }
    if(dateBegin != nil) {
        
        queryParams[@"date_begin"] = dateBegin;
    }
    if(dateEnd != nil) {
        
        queryParams[@"date_end"] = dateEnd;
    }
    if(limit != nil) {
        
        queryParams[@"limit"] = limit;
    }
    if(optimize != nil) {
        
        queryParams[@"optimize"] = optimize;
    }
    if(realTime != nil) {
        
        queryParams[@"real_time"] = realTime;
    }
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[]];
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
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *files = [[NSMutableDictionary alloc] init];
    
    
    

    
    return [self.apiClient requestWithCompletionBlock: resourcePath
                                               method: @"GET"
                                           pathParams: pathParams
                                          queryParams: queryParams
                                           formParams: formParams
                                                files: files
                                                 body: bodyParam
                                         headerParams: headerParams
                                         authSettings: authSettings
                                   requestContentType: requestContentType
                                  responseContentType: responseContentType
                                         responseType: @"SWGNAMeasureResponse*"
                                      completionBlock: ^(id data, NSError *error) {
                  
                  completionBlock((SWGNAMeasureResponse*)data, error);
              }
          ];
}

///
/// 
/// The method getuser returns information about a user such as prefered language, prefered units, and list of devices.
///  @param accessToken Your access token
///
///  @returns SWGNAUserResponse*
///
-(NSNumber*) getuserWithCompletionBlock: (NSString*) accessToken
        
        completionHandler: (void (^)(SWGNAUserResponse* output, NSError* error))completionBlock { 
        

    
    // verify the required parameter 'accessToken' is set
    if (accessToken == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `accessToken` when calling `getuser`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/api/getuser"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(accessToken != nil) {
        
        queryParams[@"access_token"] = accessToken;
    }
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [SWGApiClient selectHeaderAccept:@[]];
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
    NSString *requestContentType = [SWGApiClient selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *files = [[NSMutableDictionary alloc] init];
    
    
    

    
    return [self.apiClient requestWithCompletionBlock: resourcePath
                                               method: @"GET"
                                           pathParams: pathParams
                                          queryParams: queryParams
                                           formParams: formParams
                                                files: files
                                                 body: bodyParam
                                         headerParams: headerParams
                                         authSettings: authSettings
                                   requestContentType: requestContentType
                                  responseContentType: responseContentType
                                         responseType: @"SWGNAUserResponse*"
                                      completionBlock: ^(id data, NSError *error) {
                  
                  completionBlock((SWGNAUserResponse*)data, error);
              }
          ];
}



@end
