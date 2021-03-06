/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSMutableDictionary, _UIViewControllerOneToOneTransitionContext, UIPercentDrivenInteractiveTransition, UIView, UIViewController, NSString;

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {

	NSMutableDictionary* _stash;
	_UIViewControllerOneToOneTransitionContext* _transitionContext;
	UIPercentDrivenInteractiveTransition* _interactiveTransition;
	double _duration;
	/*^block*/id _preperation;
	/*^block*/id _animator;
	/*^block*/id _completion;
	UIView* _containerView;
	UIViewController* _viewController;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,retain,readonly) _UIViewControllerOneToOneTransitionContext * transitionContext; 
@property (assign,nonatomic) double duration;                                                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id preperation;                                                                         //@synthesize preperation=_preperation - In the implementation block
@property (nonatomic,copy) id animator;                                                                            //@synthesize animator=_animator - In the implementation block
@property (nonatomic,copy) id completion;                                                                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                                                                    //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                                                                      //@synthesize endFrame=_endFrame - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * stash; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationEnded:(BOOL)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(void)setDuration:(double)arg1 ;
-(CGRect)endFrame;
-(void)cancelInteractiveAnimation;
-(id)animator;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setAnimator:(id)arg1 ;
-(UIViewController *)viewController;
-(void)setCompletion:(id)arg1 ;
-(id)preperation;
-(id)completion;
-(double)transitionDuration:(id)arg1 ;
-(NSMutableDictionary *)stash;
-(UIView *)containerView;
-(void)finishInteractiveAnimation;
-(void)animate;
-(void)setContainerView:(UIView *)arg1 ;
-(CGRect)startFrame;
-(_UIViewControllerOneToOneTransitionContext *)transitionContext;
-(void)animateTransition:(id)arg1 ;
-(void)_updateTransitionContext;
-(void)animateInteractively;
-(double)duration;
-(void)setPreperation:(id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)updateInteractiveProgress:(double)arg1 ;
-(void)dealloc;
@end

