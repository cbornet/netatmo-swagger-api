#import "SWGNADashboardData.h"

@implementation SWGNADashboardData

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"time_utc": @"timeUtc", @"device_id": @"deviceId", @"BoilerOn": @"boilerOn", @"BoilerOff": @"boilerOff", @"Temperature": @"temperature", @"date_max_temp": @"dateMaxTemp", @"date_min_temp": @"dateMinTemp", @"min_temp": @"minTemp", @"max_temp": @"maxTemp", @"AbsolutePressure": @"absolutePressure", @"CO2": @"cO2", @"Humidity": @"humidity", @"Noise": @"noise", @"Pressure": @"pressure", @"Rain": @"rain", @"sum_rain_1": @"sumRain1", @"sum_rain_24": @"sumRain24" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"timeUtc", @"deviceId", @"boilerOn", @"boilerOff", @"temperature", @"dateMaxTemp", @"dateMinTemp", @"minTemp", @"maxTemp", @"absolutePressure", @"cO2", @"humidity", @"noise", @"pressure", @"rain", @"sumRain1", @"sumRain24"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

/**
 * Gets the string presentation of the object.
 * This method will be called when logging model object using `NSLog`.
 */
- (NSString *)description {
    return [[self toDictionary] description];
}

@end
