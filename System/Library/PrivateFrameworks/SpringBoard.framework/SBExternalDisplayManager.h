/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSDisplayObserving.h>

@protocol SBFAuthenticationStatusProvider;
@class FBSDisplayMonitor, SBMainWorkspace, SBMainDisplaySceneManager, FBSDisplayLayoutPublisher, NSMutableDictionary, NSMutableSet, NSString;

@interface SBExternalDisplayManager : NSObject <FBSDisplayObserving> {

	FBSDisplayMonitor* _displayMonitor;
	SBMainWorkspace* _mainWorkspace;
	id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
	SBMainDisplaySceneManager* _mainDisplaySceneManager;
	FBSDisplayLayoutPublisher* _layoutPublisher;
	NSMutableDictionary* _displayToControllerMap;
	NSMutableSet* _disconnectingDisplays;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(id)initWithDisplayMonitor:(id)arg1 mainWorkspace:(id)arg2 userAuthenticationProvider:(id)arg3 mainSceneManager:(id)arg4 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
@end

