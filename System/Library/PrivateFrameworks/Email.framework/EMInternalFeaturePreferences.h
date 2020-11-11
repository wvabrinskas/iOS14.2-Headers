/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMInternalFeaturePreferences : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_featureEnabled:(unsigned long long)arg1 ;
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
+(id)observeChangesForFeature:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)featureEnabled:(unsigned long long)arg1 ;
+(void)_registerForDefaultChanges;
+(id)log;
+(void)_setUserDefaultEnabled:(BOOL)arg1 forKey:(id)arg2 ;
+(BOOL)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2 ;
+(BOOL)_userDefaultEnabledForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(void)setFeature:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
+(id)defaultForFeature:(unsigned long long)arg1 ;
@end
