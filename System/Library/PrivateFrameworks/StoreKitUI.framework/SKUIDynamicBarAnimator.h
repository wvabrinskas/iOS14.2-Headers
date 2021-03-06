/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKUIDynamicBarAnimatorDelegate;
@class CADisplayLink;

@interface SKUIDynamicBarAnimator : NSObject {

	double _topBarHeightForState[2];
	double _bottomBarOffsetForState[2];
	BOOL _dragging;
	CADisplayLink* _displayLink;
	double _targetTopBarHeight;
	double _unroundedTopBarHeight;
	double _lastUnroundedTopBarHeight;
	BOOL _didHideBarsByMoving;
	BOOL _didHideOrShowBarsExplicitly;
	double _lastOffset;
	BOOL _inSteadyState;
	long long _state;
	double _topBarHeight;
	double _bottomBarOffset;
	double _minimumTopBarHeight;
	double _maximumBottomBarOffset;
	id<SKUIDynamicBarAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long targetState; 
@property (nonatomic,readonly) double topBarHeight;                                           //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,readonly) double bottomBarOffset;                                        //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) double minimumTopBarHeight;                                      //@synthesize minimumTopBarHeight=_minimumTopBarHeight - In the implementation block
@property (assign,nonatomic) double maximumBottomBarOffset;                                   //@synthesize maximumBottomBarOffset=_maximumBottomBarOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIDynamicBarAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SKUIDynamicBarAnimatorDelegate>)delegate;
-(void)_updateDisplayLink;
-(void)_transitionToSteadyState;
-(double)_bottomBarOffsetForTopBarHeight:(double)arg1 ;
-(long long)state;
-(double)minimumTopBarHeight;
-(void)updateDraggingWithOffset:(double)arg1 ;
-(void)setDelegate:(id<SKUIDynamicBarAnimatorDelegate>)arg1 ;
-(void)_moveBarsWithDelta:(double)arg1 ;
-(BOOL)canTransitionToState:(long long)arg1 ;
-(void)beginDraggingWithOffset:(double)arg1 ;
-(void)_updateOutputs;
-(void)setBottomBarOffset:(double)arg1 forState:(long long)arg2 ;
-(void)_setInSteadyState:(BOOL)arg1 ;
-(double)topBarHeight;
-(double)maximumBottomBarOffset;
-(void)setMaximumBottomBarOffset:(double)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(double)bottomBarOffset;
-(void)setMinimumTopBarHeight:(double)arg1 ;
-(long long)targetState;
-(double)_constrainTopBarHeight:(double)arg1 ;
-(void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2 ;
-(void)attemptTransitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setTopBarHeight:(double)arg1 forState:(long long)arg2 ;
-(double)_topBarHeightForBottomBarOffset:(double)arg1 ;
@end

