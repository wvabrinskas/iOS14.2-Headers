/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKSleepHealthStoreInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKSleepHealthStore : NSObject <HKSleepHealthStoreInterface, _HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)saveSleepTrackingSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(void)updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSleepTrackingSession;
-(void)stopSleepTrackingSession;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(HKHealthStore *)healthStore;
@end

