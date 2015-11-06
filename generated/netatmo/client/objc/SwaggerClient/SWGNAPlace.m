#import "SWGNAPlace.h"

@implementation SWGNAPlace

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"city": @"city", @"altitude": @"altitude", @"country": @"country", @"from_ip": @"fromIp", @"improveLocProposed": @"improveLocProposed", @"location": @"location", @"timezone": @"timezone", @"trust_location": @"trustLocation" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"city", @"altitude", @"country", @"fromIp", @"improveLocProposed", @"location", @"timezone", @"trustLocation"];

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
