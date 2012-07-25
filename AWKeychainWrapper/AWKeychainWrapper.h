//
//  AWKeychainWrapper.h
//  AWKeychainWrapper
//
//  Created by Artur Wdowiarski on 7/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import <CommonCrypto/CommonHMAC.h>

@interface AWKeychainWrapper : NSObject

+ (NSData *)searchKeychainCopyMatchingIdentifier:(NSString *)identifier;
+ (NSString *)keychainStringFromMatchingIdentifier:(NSString *)identifier;
+ (BOOL)compareKeychainValueForMatchingPassword:(NSString *)password;
+ (BOOL)createKeychainValue:(NSString *)value forIdentifier:(NSString *)identifier;
+ (BOOL)updateKeychainValue:(NSString *)value forIdentifier:(NSString *)identifier;
+ (void)deleteItemFromKeychainWithIdentifier:(NSString *)identifier;


@end
