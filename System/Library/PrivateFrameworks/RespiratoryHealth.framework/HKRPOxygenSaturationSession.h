/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKRPOxygenSaturationSessionClientInterface.h>

@protocol HKRPOxygenSaturationSessionDelegate;
@class HKHealthStore, HKTaskServerProxyProvider, NSString;

@interface HKRPOxygenSaturationSession : NSObject <_HKXPCExportable, HKRPOxygenSaturationSessionClientInterface> {

	id<HKRPOxygenSaturationSessionDelegate> _delegate;
	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                            //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (assign,nonatomic,__weak) id<HKRPOxygenSaturationSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
+(id)serverInterface;
-(id)remoteInterface;
-(id)init;
-(id<HKRPOxygenSaturationSessionDelegate>)delegate;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)abortWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<HKRPOxygenSaturationSessionDelegate>)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)clientRemote_didSendFeedback:(unsigned long long)arg1 ;
-(void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2 ;
-(void)clientRemote_didEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6 ;
@end

