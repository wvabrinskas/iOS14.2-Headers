/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@interface SBMainSwitcherWindow : SBWindow
+(BOOL)sb_autorotates;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_usesWindowServerHitTesting;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(unsigned long long)_edgesForSystemGesturesTouchDelay;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

