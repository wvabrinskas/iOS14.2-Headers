/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDHome, NSObject, HMDBackgroundTaskAgentTimer, NSString;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging> {

	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDBackgroundTaskAgentTimer* _btaReadTimer;

}

@property (__weak) HMDHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDBackgroundTaskAgentTimer * btaReadTimer;              //@synthesize btaReadTimer=_btaReadTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)configure:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)_characteristicsToRead;
-(void)_startTimer;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)timerFired:(id)arg1 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)residentUpdated;
-(void)handleCharacteristicBasedEventAdded:(id)arg1 ;
-(void)startReadTimer;
-(HMDBackgroundTaskAgentTimer *)btaReadTimer;
-(void)checkToIssueRead;
-(void)_checkToIssueRead;
-(void)_issueCharacteristicRequests:(id)arg1 ;
@end

