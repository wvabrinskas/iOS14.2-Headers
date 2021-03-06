/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUTilingViewSettings : PXSettings {

	BOOL _useSpringAnimations;
	BOOL _useSystemSpringAnimations;
	BOOL _useOvershootingSpringAnimations;
	BOOL _allowPaging;
	BOOL _allowPreheating;
	BOOL _allowTileReuse;
	BOOL _allowsEdgeAntialiasing;
	BOOL _carryOverVelocities;
	BOOL _tintTiles;
	BOOL _showVisibleRects;
	BOOL _rotateDisappearingTiles;
	BOOL _showSnapshottableTiles;
	double _animationDragCoefficient;
	double _springAnimationDuration;
	double _defaultAnimationDuration;
	double _transitionDuration;
	long long _transitionProgressBehavior;
	double _interactiveTransitionBackgroundDimming;
	double _transitionChromeDelay;

}

@property (assign,nonatomic) double animationDragCoefficient;                            //@synthesize animationDragCoefficient=_animationDragCoefficient - In the implementation block
@property (assign,nonatomic) BOOL useSpringAnimations;                                   //@synthesize useSpringAnimations=_useSpringAnimations - In the implementation block
@property (assign,nonatomic) BOOL useSystemSpringAnimations;                             //@synthesize useSystemSpringAnimations=_useSystemSpringAnimations - In the implementation block
@property (assign,nonatomic) double springAnimationDuration;                             //@synthesize springAnimationDuration=_springAnimationDuration - In the implementation block
@property (assign,nonatomic) double defaultAnimationDuration;                            //@synthesize defaultAnimationDuration=_defaultAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL useOvershootingSpringAnimations;                       //@synthesize useOvershootingSpringAnimations=_useOvershootingSpringAnimations - In the implementation block
@property (assign,nonatomic) double transitionDuration;                                  //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) long long transitionProgressBehavior;                       //@synthesize transitionProgressBehavior=_transitionProgressBehavior - In the implementation block
@property (assign,nonatomic) double interactiveTransitionBackgroundDimming;              //@synthesize interactiveTransitionBackgroundDimming=_interactiveTransitionBackgroundDimming - In the implementation block
@property (assign,nonatomic) double transitionChromeDelay;                               //@synthesize transitionChromeDelay=_transitionChromeDelay - In the implementation block
@property (assign,nonatomic) BOOL allowPaging;                                           //@synthesize allowPaging=_allowPaging - In the implementation block
@property (assign,nonatomic) BOOL allowPreheating;                                       //@synthesize allowPreheating=_allowPreheating - In the implementation block
@property (assign,nonatomic) BOOL allowTileReuse;                                        //@synthesize allowTileReuse=_allowTileReuse - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
@property (assign,nonatomic) BOOL carryOverVelocities;                                   //@synthesize carryOverVelocities=_carryOverVelocities - In the implementation block
@property (assign,nonatomic) BOOL tintTiles;                                             //@synthesize tintTiles=_tintTiles - In the implementation block
@property (assign,nonatomic) BOOL showVisibleRects;                                      //@synthesize showVisibleRects=_showVisibleRects - In the implementation block
@property (assign,nonatomic) BOOL rotateDisappearingTiles;                               //@synthesize rotateDisappearingTiles=_rotateDisappearingTiles - In the implementation block
@property (assign,nonatomic) BOOL showSnapshottableTiles;                                //@synthesize showSnapshottableTiles=_showSnapshottableTiles - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(double)defaultAnimationDuration;
-(void)setAllowTileReuse:(BOOL)arg1 ;
-(void)setDefaultValues;
-(void)setDefaultAnimationDuration:(double)arg1 ;
-(double)transitionDuration;
-(void)setUseSystemSpringAnimations:(BOOL)arg1 ;
-(void)setTintTiles:(BOOL)arg1 ;
-(double)transitionChromeDelay;
-(BOOL)showSnapshottableTiles;
-(BOOL)allowTileReuse;
-(void)setUseOvershootingSpringAnimations:(BOOL)arg1 ;
-(BOOL)tintTiles;
-(void)setTransitionChromeDelay:(double)arg1 ;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(double)interactiveTransitionBackgroundDimming;
-(long long)transitionProgressBehavior;
-(void)setShowSnapshottableTiles:(BOOL)arg1 ;
-(void)setRotateDisappearingTiles:(BOOL)arg1 ;
-(void)setUseSpringAnimations:(BOOL)arg1 ;
-(BOOL)useSystemSpringAnimations;
-(void)setShowVisibleRects:(BOOL)arg1 ;
-(double)animationDragCoefficient;
-(void)setSpringAnimationDuration:(double)arg1 ;
-(BOOL)carryOverVelocities;
-(void)setTransitionProgressBehavior:(long long)arg1 ;
-(BOOL)useOvershootingSpringAnimations;
-(void)setAllowPreheating:(BOOL)arg1 ;
-(BOOL)rotateDisappearingTiles;
-(double)springAnimationDuration;
-(void)setAnimationDragCoefficient:(double)arg1 ;
-(void)setCarryOverVelocities:(BOOL)arg1 ;
-(BOOL)useSpringAnimations;
-(BOOL)showVisibleRects;
-(BOOL)allowsEdgeAntialiasing;
-(void)setAllowPaging:(BOOL)arg1 ;
-(void)setInteractiveTransitionBackgroundDimming:(double)arg1 ;
-(BOOL)allowPaging;
-(void)setTransitionDuration:(double)arg1 ;
-(BOOL)allowPreheating;
@end

