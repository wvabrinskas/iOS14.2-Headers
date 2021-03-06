/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer, NSValue, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	NSValue* _pointerLocation;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)dismissHUD;
+(void)clearHUDPopTimer;
-(void)_didTakeScreenshot;
-(void)_applicationWillResignActive;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(BOOL)_HUDAllowedForWindow:(id)arg1 ;
-(void)_dismissHUD;
-(void)_scheduleHUDPresentation;
-(void)_clearHUDPopTimer;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
-(void)dealloc;
@end

