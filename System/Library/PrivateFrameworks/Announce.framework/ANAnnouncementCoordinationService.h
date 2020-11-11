/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, ANAnnouncementCoordinationServiceDelegate;
@class NSObject, RPCompanionLinkClient;

@interface ANAnnouncementCoordinationService : NSObject {

	NSObject*<OS_dispatch_queue> _rapportQueue;
	id<ANAnnouncementCoordinationServiceDelegate> _delegate;
	RPCompanionLinkClient* _companionLinkClient;

}

@property (nonatomic,readonly) RPCompanionLinkClient * companionLinkClient;                              //@synthesize companionLinkClient=_companionLinkClient - In the implementation block
@property (assign,nonatomic,__weak) id<ANAnnouncementCoordinationServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<ANAnnouncementCoordinationServiceDelegate>)delegate;
-(void)setDelegate:(id<ANAnnouncementCoordinationServiceDelegate>)arg1 ;
-(RPCompanionLinkClient *)companionLinkClient;
-(void)_tearDownLink;
-(void)broadcastAnnouncementPlayed:(id)arg1 ;
-(void)_setupLink;
-(void)_registerForEvents;
@end
