/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	SBAppLayout* _fullScreenAppLayout;
	SBSwitcherModifier* _floatingDeckModifier;

}
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)visibleAppLayouts;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)_layoutSettings;
-(id)appLayoutsToCacheSnapshots;
-(BOOL)wantsSwitcherBackdropBlur;
-(BOOL)wantsSwitcherDimmingView;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(long long)switcherBackdropBlurType;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)transitionWillBegin;
-(long long)transitionLiveContentRasterizationStyle;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 floatingDeckModifier:(id)arg4 ;
@end

