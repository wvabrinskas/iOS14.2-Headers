/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSXPCConnection;

@interface DAManager : NSObject {

	NSMutableSet* _activeSessions;
	NSXPCConnection* _clientConnection;

}
+(void)listKeysWithSession:(id)arg1 seid:(id)arg2 callback:(/*^block*/id)arg3 ;
+(BOOL)isSupported;
+(id)sharedManager;
-(id)createManagementSessionWithDelegate:(id)arg1 ;
-(void)registerFriendSideSharingTestInvitationUUIDHandler:(/*^block*/id)arg1 ;
-(void)registerFriendSideSharingTestInvitationHandler:(/*^block*/id)arg1 ;
-(void)registerOwnerSideInvitationRequestHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)unregisterSharingTestHandlers;
-(void)registerSession:(id)arg1 ;
-(void)registerFriendSideSharingTestCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerOwnerSideSharingTestCompletionHandler:(/*^block*/id)arg1 ;
-(id)createSharingSessionWithDelegate:(id)arg1 ;
-(void)unregisterSession:(id)arg1 ;
-(void)registerFriendSideSharingTestCompletion:(/*^block*/id)arg1 ;
-(void)registerFriendSideInvitationUnusableHandler:(/*^block*/id)arg1 ;
-(id)connection;
-(id)createPairingSessionWithDelegate:(id)arg1 ;
-(void)registerOwnerSideSharingTestInvitations:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
