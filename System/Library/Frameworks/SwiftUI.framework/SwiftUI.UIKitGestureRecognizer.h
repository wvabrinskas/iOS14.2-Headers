/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/_UIHoverEventRespondable.h>
#import <libobjc.A.dylib/_UITransformEventRespondable.h>

@interface SwiftUI.UIKitGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, _UITransformEventRespondable> {

	 eventBridge;
	 hoverSeed;
	 transformSeed;
	 initialScale;
	 initialAngle;

}
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(id)init;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

