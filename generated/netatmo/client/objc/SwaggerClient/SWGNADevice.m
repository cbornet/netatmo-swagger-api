#import "SWGNADevice.h"

@implementation SWGNADevice

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"behavior": @"behavior", @"cipher_id": @"cipherId", @"date_setup": @"dateSetup", @"firmware": @"firmware", @"hw_version": @"hwVersion", @"heating_system": @"heatingSystem", @"house_model": @"houseModel", @"ip": @"ip", @"last_fw_update": @"lastFwUpdate", @"last_radio_store": @"lastRadioStore", @"last_status_store": @"lastStatusStore", @"last_upgrade": @"lastUpgrade", @"module_name": @"moduleName", @"modules": @"modules", @"place": @"place", @"setpoint": @"setpoint", @"setpoint_default_duration": @"setpointDefaultDuration", @"setpoint_order": @"setpointOrder", @"public_ext_data": @"publicExtData", @"station_name": @"stationName", @"therm_program": @"thermProgram", @"therm_program_backup": @"thermProgramBackup", @"therm_program_order": @"thermProgramOrder", @"type": @"type", @"user_owner": @"userOwner", @"udp_conn": @"udpConn", @"wifi_status": @"wifiStatus", @"new_feature_avail": @"newFeatureAvail", @"first_pid_avail": @"firstPidAvail", @"data_type": @"dataType" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"behavior", @"cipherId", @"dateSetup", @"firmware", @"hwVersion", @"heatingSystem", @"houseModel", @"ip", @"lastFwUpdate", @"lastRadioStore", @"lastStatusStore", @"lastUpgrade", @"moduleName", @"modules", @"place", @"setpoint", @"setpointDefaultDuration", @"setpointOrder", @"publicExtData", @"stationName", @"thermProgram", @"thermProgramBackup", @"thermProgramOrder", @"type", @"userOwner", @"udpConn", @"wifiStatus", @"newFeatureAvail", @"firstPidAvail", @"dataType"];

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
