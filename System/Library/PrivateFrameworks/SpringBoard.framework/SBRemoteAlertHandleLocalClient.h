/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBRemoteTransientOverlaySessionObserver.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleClient.h>

@protocol OS_dispatch_queue;
@class NSObject, SBRemoteTransientOverlaySessionManager, NSMutableDictionary, NSString;

@interface SBRemoteAlertHandleLocalClient : NSObject <SBRemoteTransientOverlaySessionObserver, SBSRemoteAlertHandleClient> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	SBRemoteTransientOverlaySessionManager* _sessionManager;
	NSMutableDictionary* _sessionIDToRemoteAlertHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateRemoteAlertHandle:(id)arg1 ;
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3 ;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2 ;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
-(void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3 ;
-(id)initWithSessionManager:(id)arg1 ;
-(void)_registerHandle:(id)arg1 forSession:(id)arg2 ;
-(void)_unregisterHandle:(id)arg1 ;
-(void)remoteTransientOverlaySessionDidActivate:(id)arg1 ;
-(void)remoteTransientOverlaySessionDidDeactivate:(id)arg1 ;
@end

