/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMFMessageReceiver;
@class HMDHomeAdministratorHandler, NSString, NSUUID;

@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver> {

	id<HMFMessageReceiver> _receiver;
	HMDHomeAdministratorHandler* _handler;

}

@property (__weak,readonly) id<HMFMessageReceiver> receiver;                                  //@synthesize receiver=_receiver - In the implementation block
@property (__weak,readonly) HMDHomeAdministratorHandler * handler;                            //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(id<HMFMessageReceiver>)receiver;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDHomeAdministratorHandler *)handler;
-(id)logIdentifier;
-(id)shortDescription;
-(void)dealloc;
-(void)__handleMessage:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 handler:(id)arg2 ;
-(void)registerForMessage:(id)arg1 policies:(id)arg2 ;
@end

