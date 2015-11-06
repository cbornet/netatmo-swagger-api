#import "SWGNAThermStateBody.h"

@implementation SWGNAThermStateBody

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"setpoint": @"setpoint", @"setpoint_order": @"setpointOrder", @"therm_program": @"thermProgram", @"therm_program_backup": @"thermProgramBackup", @"therm_program_order": @"thermProgramOrder", @"therm_orientation": @"thermOrientation", @"therm_relay_cmd": @"thermRelayCmd", @"battery_vp": @"batteryVp", @"rf_status": @"rfStatus", @"plug_connected_boiler": @"plugConnectedBoiler", @"udp_conn": @"udpConn", @"last_therm_seen": @"lastThermSeen", @"last_plug_seen": @"lastPlugSeen", @"wifi_status": @"wifiStatus", @"measured": @"measured" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"setpoint", @"setpointOrder", @"thermProgram", @"thermProgramBackup", @"thermProgramOrder", @"thermOrientation", @"thermRelayCmd", @"batteryVp", @"rfStatus", @"plugConnectedBoiler", @"udpConn", @"lastThermSeen", @"lastPlugSeen", @"wifiStatus", @"measured"];

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
