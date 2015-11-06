#import "SWGNAModule.h"

@implementation SWGNAModule

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"date_setup": @"dateSetup", @"firmware": @"firmware", @"type": @"type", @"module_name": @"moduleName", @"main_device": @"mainDevice", @"last_message": @"lastMessage", @"last_seen": @"lastSeen", @"public_ext_data": @"publicExtData", @"rf_status": @"rfStatus", @"battery_vp": @"batteryVp", @"therm_orientation": @"thermOrientation", @"therm_relay_cmd": @"thermRelayCmd", @"dashboard_data": @"dashboardData", @"data_type": @"dataType" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"dateSetup", @"firmware", @"type", @"moduleName", @"mainDevice", @"lastMessage", @"lastSeen", @"publicExtData", @"rfStatus", @"batteryVp", @"thermOrientation", @"thermRelayCmd", @"dashboardData", @"dataType"];

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
