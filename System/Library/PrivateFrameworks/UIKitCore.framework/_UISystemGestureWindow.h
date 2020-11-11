/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRootWindow.h>

@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {

	UISystemGestureView* _systemGestureView;

}
+(BOOL)_isSecure;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_appearsInLoupe;
-(id)_systemGestureView;
-(id)initWithScreen:(id)arg1 ;
-(id)_focusResponder;
-(id)initWithDisplay:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
