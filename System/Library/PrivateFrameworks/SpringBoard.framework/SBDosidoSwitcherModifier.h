/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDosidoSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	unsigned long long _direction;

}
-(id)visibleAppLayouts;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)isHomeScreenContentRequired;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)_layoutSettings;
-(BOOL)isWallpaperRequiredForSwitcher;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(id)appLayoutsToCacheSnapshots;
-(id)transitionWillUpdate;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(long long)homeScreenBackdropBlurType;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(unsigned long long)arg4 ;
@end

