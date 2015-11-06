#import "SWGNAHouseModel.h"

@implementation SWGNAHouseModel

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"algo_type": @"algoType", @"ca": @"ca", @"ext_temps": @"extTemps", @"first_anticipate_avail": @"firstAnticipateAvail", @"first_pid_avail": @"firstPidAvail", @"gefs": @"gefs", @"in_use": @"inUse", @"last_compute_try": @"lastComputeTry", @"link_station": @"linkStation", @"pid_algo": @"pidAlgo", @"station": @"station", @"prefered_algo_type": @"preferedAlgoType", @"simple_algo": @"simpleAlgo", @"time": @"time", @"station_firsttime_anticipate": @"stationFirsttimeAnticipate", @"time_algo_changed": @"timeAlgoChanged", @"time_pid_computed": @"timePidComputed" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"algoType", @"ca", @"extTemps", @"firstAnticipateAvail", @"firstPidAvail", @"gefs", @"inUse", @"lastComputeTry", @"linkStation", @"pidAlgo", @"station", @"preferedAlgoType", @"simpleAlgo", @"time", @"stationFirsttimeAnticipate", @"timeAlgoChanged", @"timePidComputed"];

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
