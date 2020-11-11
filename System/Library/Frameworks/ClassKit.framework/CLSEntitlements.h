/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ClassKit/ClassKit-Structs.h>
@class NSString, NSDictionary;

@interface CLSEntitlements : NSObject {

	NSString* _applicationBundleIdentifier;
	NSDictionary* _entitlements;

}

@property (nonatomic,copy,readonly) NSDictionary * entitlements;                    //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * classKitEnvironment; 
+(BOOL)isInternalProcess;
+(BOOL)isPrivateSearchEnabledProcess;
+(BOOL)isDashboardAppProcess;
+(id)entitlementsWithSecTask:(SecTaskRef)arg1 overrides:(id)arg2 error:(id*)arg3 ;
+(BOOL)isSearchEnabledProcess;
+(id)entitlementsForCurrentTaskWithError:(id*)arg1 ;
+(id)entitlementsWithConnection:(id)arg1 error:(id*)arg2 ;
+(id)allowedEntitlements;
-(NSDictionary *)entitlements;
-(BOOL)boolValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)isInDevelopmentEnvironment;
-(id)init;
-(BOOL)isRegisterDashboardEnabled;
-(NSString *)applicationBundleIdentifier;
-(id)stringValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPrivateSearchAPIEnabled;
-(BOOL)isPublicClassKitAPIEnabled;
-(id)initWithEntitlements:(id)arg1 ;
-(BOOL)isSearchAPIEnabled;
-(BOOL)isDashboardAPIEnabled;
-(BOOL)isInternal;
-(NSString *)classKitEnvironment;
@end
