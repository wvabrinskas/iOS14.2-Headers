/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RTTUtilities/RTTCall.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, RPCompanionLinkClient, RPCompanionLinkDevice;

@interface RTTRemoteCall : RTTCall {

	NSMutableArray* _devices;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	RPCompanionLinkClient* _client;
	RPCompanionLinkDevice* _pairedCallDevice;

}

@property (nonatomic,retain) RPCompanionLinkClient * client;                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) RPCompanionLinkDevice * pairedCallDevice;              //@synthesize pairedCallDevice=_pairedCallDevice - In the implementation block
-(void)start;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(RPCompanionLinkClient *)client;
-(void)addDevice:(id)arg1 ;
-(void)stop;
-(BOOL)isLocallyHosted;
-(void)sendString:(id)arg1 ;
-(void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2 ;
-(void)setupRapportClient;
-(RPCompanionLinkDevice *)pairedCallDevice;
-(void)updateCallWithRemoteFailure;
-(void)sendCallIDChallengeToDevice:(id)arg1 ;
-(void)resetRapportClientAndInvalidate:(BOOL)arg1 ;
-(id)responseForRequest:(id)arg1 options:(id)arg2 ;
-(void)removeDevice:(id)arg1 ;
-(void)sendCallIDChallengeToDeviceId:(id)arg1 ;
-(void)setPairedCallDevice:(RPCompanionLinkDevice *)arg1 ;
@end
