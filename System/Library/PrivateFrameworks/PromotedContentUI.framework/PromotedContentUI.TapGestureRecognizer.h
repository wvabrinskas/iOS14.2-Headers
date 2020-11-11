/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface PromotedContentUI.TapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	 kMaximumTimeSinceTap;
	 touchDownHandler;
	 touchMovedHandler;
	 touchUpHandler;
	 shouldBlockNavigation;
	 mostRecentTapLocation;
	 lastTrackedTouch;
	 mostRecentTapTimestamp;
	 location;
	 pointIsInsideView;
	 preventedTouches;
	 $__lazy_storage_$_scrollableAncestor;

}
-(id)init;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end
