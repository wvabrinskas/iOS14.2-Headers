/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	unsigned long long _direction;
	CGRect _homeScreenIconFrame;
	double _homeScreenIconCornerRadius;
	double _homeScreenIconScale;
	BOOL _homeScreenIconLocationIsFloatingDock;
	BOOL _itemContainerOverlapsDock;
	BOOL _wantsDockWindowLevelAssertion;
	SBCoplanarSwitcherModifier* _coplanarModifier;
	BOOL _shouldAcceleratedHomeButtonPressBegin;
	BOOL _shouldUpdateIconViewVisibility;
	BOOL _shouldMatchMoveToIconView;

}

@property (assign,nonatomic) BOOL shouldUpdateIconViewVisibility;              //@synthesize shouldUpdateIconViewVisibility=_shouldUpdateIconViewVisibility - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchMoveToIconView;                   //@synthesize shouldMatchMoveToIconView=_shouldMatchMoveToIconView - In the implementation block
-(id)visibleAppLayouts;
-(id)topMostLayoutElements;
-(BOOL)isHomeScreenContentRequired;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionDidEnd;
-(double)homeScreenAlpha;
-(BOOL)_isIndexZoomAppLayout:(unsigned long long)arg1 ;
-(double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(CGPoint)arg1 ;
-(long long)wallpaperStyle;
-(id)appLayoutsToCacheSnapshots;
-(unsigned long long)dockWindowLevelPriority;
-(BOOL)shouldUpdateIconViewVisibility;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(CGPoint)arg1 ;
-(BOOL)shouldMatchMoveToIconView;
-(BOOL)isSwitcherWindowVisible;
-(double)dockProgress;
-(BOOL)_isEffectivelyHome;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(double)dockWindowLevel;
-(long long)homeScreenBackdropBlurType;
-(void)setShouldUpdateIconViewVisibility:(BOOL)arg1 ;
-(void)setShouldMatchMoveToIconView:(BOOL)arg1 ;
-(id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 ;
-(id)layoutSettingsForTargetCenter:(CGPoint)arg1 ;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)wantsDockWindowLevelAssertion;
@end

