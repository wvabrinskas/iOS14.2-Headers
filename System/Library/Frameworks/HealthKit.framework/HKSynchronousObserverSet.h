/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
#import <HealthKit/HealthKit-Structs.h>
@class NSHashTable, NSString, NSObject, NSArray;

@interface HKSynchronousObserverSet : NSObject {

	NSHashTable* _observerTable;
	NSString* _name;
	NSObject*<OS_os_log> _category;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObservers; 
-(void)notifyObservers:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(void)registerObserver:(id)arg1 ;
-(NSArray *)allObservers;
-(void)unregisterObserver:(id)arg1 ;
-(id)initWithName:(id)arg1 loggingCategory:(id)arg2 ;
@end

