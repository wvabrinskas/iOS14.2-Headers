/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/HKSPUserDefaults.h>

@class NSMutableDictionary, NSString;

@interface HKSPMockUserDefaults : NSObject <HKSPUserDefaults> {

	os_unfair_lock_s _defaultsLock;
	NSMutableDictionary* _defaults;

}

@property (nonatomic,readonly) NSMutableDictionary * defaults;              //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s defaultsLock;               //@synthesize defaultsLock=_defaultsLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)defaults;
-(id)objectForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(os_unfair_lock_s)defaultsLock;
-(float)floatForKey:(id)arg1 ;
@end
