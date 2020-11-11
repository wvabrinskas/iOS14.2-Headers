/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UITabBar, NSString;

@interface _UITabBarVisualProvider : NSObject {

	UITabBar* _tabBar;
	NSString* _backdropGroupName;

}

@property (nonatomic,readonly) UITabBar * tabBar;                                                  //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                           //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) BOOL useModernAppearance; 
@property (nonatomic,readonly) id<_UIBarAppearanceChangeObserver> appearanceObserver; 
@property (assign,nonatomic) double minimumWidthForHorizontalLayout; 
-(BOOL)useModernAppearance;
-(double)defaultAnimationDuration;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(UITabBar *)tabBar;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(void)changeAppearance;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(NSString *)backdropGroupName;
-(id)createViewForTabBarItem:(id)arg1 ;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)changeLayout;
-(void)layoutSubviews;
-(void)_shim_updateFocusHighlightVisibility;
-(BOOL)wantsFocus;
-(void)updateBackgroundGroupName;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(void)_shim_layoutItemsOnly;
-(id)_shim_accessoryView;
-(id)_shim_compatibilityBackgroundView;
-(id)preferredFocusedView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(void)setMinimumWidthForHorizontalLayout:(double)arg1 ;
-(BOOL)_shim_shadowHidden;
-(double)_shim_shadowAlpha;
-(id)initWithTabBar:(id)arg1 ;
-(id)_shim_shadowView;
-(double)minimumWidthForHorizontalLayout;
-(id)defaultTintColor;
-(void)tabBarSizeChanged:(CGSize)arg1 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)teardown;
-(double)_shim_heightForCustomizingItems;
-(void)prepare;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)updateConstraints;
@end
