#import "SWGNAStation.h"

@implementation SWGNAStation

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"lag_down": @"lagDown", @"lag_up": @"lagUp", @"off_overshoot": @"offOvershoot", @"on_overshoot": @"onOvershoot", @"pk": @"pk", @"tau": @"tau" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"lagDown", @"lagUp", @"offOvershoot", @"onOvershoot", @"pk", @"tau"];

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
