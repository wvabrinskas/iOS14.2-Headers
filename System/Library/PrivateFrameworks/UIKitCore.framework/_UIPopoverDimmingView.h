/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDimmingView.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate.h>

@class _UIPassthroughScrollInteraction, UIView, NSString;

@interface _UIPopoverDimmingView : UIDimmingView <_UIPassthroughScrollInteractionDelegate> {

	BOOL _lastHitTestWasPassedThrough;
	_UIPassthroughScrollInteraction* _passthroughScrollInteraction;
	UIView* _transitionContainerView;

}

@property (nonatomic,readonly) _UIPassthroughScrollInteraction * _passthroughScrollInteraction;              //@synthesize passthroughScrollInteraction=_passthroughScrollInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPopoverDimmingViewDelegate> delegate; 
@property (assign,nonatomic,__weak) UIView * transitionContainerView;                                        //@synthesize transitionContainerView=_transitionContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)_sendDelegateDimmingViewWasTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToWindow;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg1 ;
-(void)setTransitionContainerView:(UIView *)arg1 ;
-(BOOL)_delegateAllowsInteraction;
-(UIView *)transitionContainerView;
-(_UIPassthroughScrollInteraction *)_passthroughScrollInteraction;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

