/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INAppInfo, NSString, NSURL, LSApplicationRecord;

@interface INExecutionInfo : NSObject <NSCopying> {

	INAppInfo* _appInfo;
	NSString* _launchableAppBundleId;
	NSString* _displayableAppBundleId;
	NSString* _extensionBundleId;
	NSURL* _containingAppBundleURL;

}

@property (nonatomic,readonly) LSApplicationRecord * _applicationRecord; 
@property (nonatomic,readonly) INAppInfo * _appInfo;                                  //@synthesize appInfo=_appInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchableAppBundleId;                 //@synthesize launchableAppBundleId=_launchableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayableAppBundleId;                //@synthesize displayableAppBundleId=_displayableAppBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionBundleId;                     //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * containingAppBundleURL;                   //@synthesize containingAppBundleURL=_containingAppBundleURL - In the implementation block
@property (nonatomic,readonly) BOOL canRunOnLocalDevice; 
+(void)initialize;
-(INAppInfo *)_appInfo;
-(LSApplicationRecord *)_applicationRecord;
-(NSString *)displayableAppBundleId;
-(BOOL)canRunOnLocalDevice;
-(NSString *)launchableAppBundleId;
-(NSString *)extensionBundleId;
-(NSURL *)containingAppBundleURL;
-(id)_initWithLaunchableAppBundleId:(id)arg1 displayableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

