/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;
@class NSString;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning> {

	double _percentComplete;
	BOOL _presenting;
	id<SBFramewiseInteractiveTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBFramewiseInteractiveTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                               //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,readonly) double percentVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportsRestarting;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)delegate;
-(double)percentComplete;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setDelegate:(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)percentVisible;
-(BOOL)isPresenting;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)setPresenting:(BOOL)arg1 ;
@end

