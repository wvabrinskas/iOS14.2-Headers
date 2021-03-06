/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaDestinationBackingStoreHandlerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFStagedValueDelegate.h>
#import <libobjc.A.dylib/HMDMediaDestinationManager.h>
#import <libobjc.A.dylib/HMDMediaDestinationMessageHandlerDataSource.h>
#import <libobjc.A.dylib/HMDMediaDestinationMessageHandlerDelegate.h>

@protocol HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate;
@class NSUUID, HMDMediaDestinationMessageHandler, HMDMediaDestinationBackingStoreHandler, HMFStagedValue, NSString, HMMediaDestination;

@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate> {

	NSUUID* _identifier;
	HMDMediaDestinationMessageHandler* _messageHandler;
	HMDMediaDestinationBackingStoreHandler* _backingStoreHandler;
	id<HMDMediaDestinationManagerDataSource> _dataSource;
	id<HMDMediaDestinationManagerDelegate> _delegate;
	HMFStagedValue* _stagedAudioGroupIdentifier;

}

@property (__weak) id<HMDMediaDestinationManagerDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationManagerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMFStagedValue * stagedAudioGroupIdentifier;                               //@synthesize stagedAudioGroupIdentifier=_stagedAudioGroupIdentifier - In the implementation block
@property (readonly) HMDMediaDestinationBackingStoreHandler * backingStoreHandler;              //@synthesize backingStoreHandler=_backingStoreHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMMediaDestination * destination; 
@property (readonly) HMMediaDestination * committedDestination; 
@property (readonly) HMDMediaDestinationMessageHandler * messageHandler;                        //@synthesize messageHandler=_messageHandler - In the implementation block
+(id)logCategory;
-(id)attributeDescriptions;
-(id<HMDMediaDestinationManagerDelegate>)delegate;
-(id)privateDescription;
-(HMMediaDestination *)destination;
-(NSUUID *)identifier;
-(void)setDataSource:(id<HMDMediaDestinationManagerDataSource>)arg1 ;
-(void)setDelegate:(id<HMDMediaDestinationManagerDelegate>)arg1 ;
-(id<HMDMediaDestinationManagerDataSource>)dataSource;
-(id)logIdentifier;
-(HMDMediaDestinationMessageHandler *)messageHandler;
-(HMMediaDestination *)committedDestination;
-(void)configureWithHome:(id)arg1 ;
-(void)stageAudioGroupIdentifier:(id)arg1 ;
-(id)dataSourceTargetAccessory;
-(void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3 ;
-(void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3 ;
-(id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2 ;
-(id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2 ;
-(BOOL)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2 ;
-(id)dataSourceDestinationControllerWithIdentifier:(id)arg1 ;
-(void)mediaDestinationBackingStoreHandler:(id)arg1 didUpdateDestination:(id)arg2 ;
-(id)initWithDestination:(id)arg1 messageHandler:(id)arg2 backingStoreHandler:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(HMFStagedValue *)stagedAudioGroupIdentifier;
-(HMDMediaDestinationBackingStoreHandler *)backingStoreHandler;
-(id)dataSourceRootDestinationManager;
-(id)updateSupportedOptions:(unsigned long long)arg1 ;
-(id)updateAudioGroupIdentifier:(id)arg1 ;
-(void)stagedValue:(id)arg1 didExpireValue:(id)arg2 ;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 backingStore:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6 ;
-(void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;
@end

