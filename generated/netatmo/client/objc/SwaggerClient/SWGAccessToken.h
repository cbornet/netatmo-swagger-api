#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGAccessToken
@end

@interface SWGAccessToken : SWGObject


@property(nonatomic) NSString* accessToken;

@property(nonatomic) NSString* refreshToken;

@property(nonatomic) NSNumber* expireIn;

@property(nonatomic) NSNumber* expiresIn;

@property(nonatomic) NSArray* /* NSString */ scope;

@end