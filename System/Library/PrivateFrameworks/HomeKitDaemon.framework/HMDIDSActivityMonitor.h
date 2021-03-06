/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDIDSActivityMonitorDataSource;
@class IDSActivityMonitor, NSString;

@interface HMDIDSActivityMonitor : NSObject <HMFLogging> {

	id<HMDIDSActivityMonitorDataSource> _dataSource;
	IDSActivityMonitor* _activityMonitor;

}

@property (readonly) IDSActivityMonitor * activityMonitor;                                //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (nonatomic,retain) id<HMDIDSActivityMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(IDSActivityMonitor *)activityMonitor;
-(void)setDataSource:(id<HMDIDSActivityMonitorDataSource>)arg1 ;
-(NSString *)description;
-(id<HMDIDSActivityMonitorDataSource>)dataSource;
-(id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)logIdentifier;
-(void)listenWithDelegate:(id)arg1 ;
-(void)broadcastSubActivity:(id)arg1 toPushTokens:(id)arg2 ;
-(void)stopBroadcastingSubActivity:(id)arg1 ;
@end

