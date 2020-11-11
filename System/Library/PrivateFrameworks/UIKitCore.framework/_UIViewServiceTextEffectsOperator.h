/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHostedWindowDelegate.h>
#import <UIKitCore/_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface.h>
#import <UIKitCore/_UIViewServiceDeputy.h>
#import <UIKitCore/_UIViewServiceDeputyRotationDelegate.h>

@class _UIAsyncInvocation, _UIHostedWindow, NSArray, NSString;

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	id _remoteViewControllerProxy;
	BOOL _wasInvalidated;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	_UIHostedWindow* _hostedWindow;
	CGPoint _windowOffset;
	UIEdgeInsets _safeAreaInsets;
	CGSize _sceneSize;
	BOOL _canRestoreInputViews;
	BOOL _isRestoringInputViews;
	BOOL _didResignForDisappear;
	BOOL _localVCDisablesAutomaticBehaviors;
	NSArray* _allowedNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 ;
+(BOOL)_shouldAddServiceOperator;
-(void)__hostDidEnterBackground;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)__hostWillEnterForeground;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(oneway void)release;
-(void)_restoreInputViews;
-(int)__automatic_invalidation_logic;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(id)_queue;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)retain;
-(void)makeHostWindowKey;
-(void)__setWindowOffset:(CGPoint)arg1 ;
-(void)_resetSceneSize;
-(void)_viewServiceHostWillEnterForeground:(id)arg1 ;
-(void)__setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)forceSyncToStatusBarOrientation;
-(id)autorelease;
-(unsigned long long)retainCount;
-(BOOL)_tryRetain;
-(void)__createHostedTextEffectsWithReplyHandler:(/*^block*/id)arg1 ;
-(void)hostedWindow:(id)arg1 didSetResponderTargetForCalloutBar:(id)arg2 ;
-(BOOL)_isDeallocating;
-(void)_reloadSafeInsets;
-(void)performOnRelevantWindows:(/*^block*/id)arg1 ;
-(void)hostedWindow:(id)arg1 didSetFirstResponder:(id)arg2 ;
-(void)__setSceneSize:(CGSize)arg1 ;
-(void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(BOOL)arg2 ;
-(void)__hostViewWillAppear:(BOOL)arg1 ;
-(id)invalidate;
-(void)__setHostAllowedNotifications:(id)arg1 ;
-(void)dealloc;
@end
