#import "SWGNAUserBody.h"

@implementation SWGNAUserBody

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"_id": @"_id", @"administrative": @"administrative", @"date_creation": @"dateCreation", @"devices": @"devices", @"friend_devices": @"friendDevices", @"mail": @"mail", @"timeline_not_read": @"timelineNotRead", @"timeline_size": @"timelineSize" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"_id", @"administrative", @"dateCreation", @"devices", @"friendDevices", @"mail", @"timelineNotRead", @"timelineSize"];

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
