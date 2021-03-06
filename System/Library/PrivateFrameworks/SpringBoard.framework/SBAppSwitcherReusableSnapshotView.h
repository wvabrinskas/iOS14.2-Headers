/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>
#import <libobjc.A.dylib/SBAppSwitcherSnapshotImageCacheObserver.h>
#import <libobjc.A.dylib/SBReusableView.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@protocol SBAppSwitcherReusableSnapshotViewDelegate;
@class SBOrientationTransformWrapperView, SBSwitcherSnapshotImageView, UIViewController, NSMutableDictionary, CAShapeLayer, UIView, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBAppClipOverlayCoordinator, SBAppSwitcherSettings, SBMedusaSettings, NSMutableArray, SBAppLayout, NSString;

@interface SBAppSwitcherReusableSnapshotView : SBSwitcherWallpaperPageContentView <SBAppSwitcherSnapshotImageCacheObserver, SBReusableView, SBAppSwitcherPageContentView> {

	SBOrientationTransformWrapperView* _firstOrientationWrapper;
	SBOrientationTransformWrapperView* _secondOrientationWrapper;
	SBSwitcherSnapshotImageView* _firstImageView;
	SBSwitcherSnapshotImageView* _secondImageView;
	UIViewController* _containerViewController;
	id<SBAppSwitcherReusableSnapshotViewDelegate> _delegate;
	NSMutableDictionary* _snapshotViewStateByRole;
	NSMutableDictionary* _blockingViewControllerByRole;
	CAShapeLayer* _medusaDividerLayer;
	UIView* _solidColorBackstopView;
	SBAppSwitcherSnapshotImageCache* _snapshotCache;
	SBAppSwitcherSnapshotLockoutViewControllerProvider* _lockoutVCProvider;
	SBAppClipOverlayCoordinator* _appClipOverlayCoordinator;
	NSMutableDictionary* _appClipOverlayByRole;
	SBAppSwitcherSettings* _settings;
	SBMedusaSettings* _medusaSettings;
	BOOL _shouldUseBrightMaterial;
	BOOL _showingIconOverlayView;
	NSMutableArray* _deferredSnapshotCrossfadeQueue;
	BOOL _active;
	BOOL _visible;
	SBAppLayout* _appLayout;

}

@property (nonatomic,retain) SBAppLayout * appLayout;                         //@synthesize appLayout=_appLayout - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBrightMaterial;                    //@synthesize shouldUseBrightMaterial=_shouldUseBrightMaterial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                   //@synthesize visible=_visible - In the implementation block
-(BOOL)isVisible;
-(void)setVisible:(BOOL)arg1 ;
-(void)_setCacheEntry:(id)arg1 forRole:(long long)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(void)_configureSnapshotImageView:(id)arg1 cacheEntry:(id)arg2 ;
-(id)_applicationForRole:(long long)arg1 ;
-(SBAppLayout *)appLayout;
-(void)_updateToNewSnapshotImageUsingCacheEntry:(id)arg1 ;
-(void)_handleInstalledAppsChanged:(id)arg1 ;
-(CGRect)_snapshotImageFrameForCacheEntry:(id)arg1 ;
-(id)_sceneHandleForRole:(long long)arg1 ;
-(void)_requestFreshImages;
-(void)_performDeferredSnapshotUpdatesIfNecessaryForRole:(long long)arg1 ;
-(BOOL)contentRequiresGroupOpacity;
-(void)_updateDivider;
-(id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutVCProvider:(id)arg3 appClipOverlayCoordinator:(id)arg4 containerViewController:(id)arg5 ;
-(void)_updateCornerRadiusIfNecessaryForSnapshotImageView:(id)arg1 cacheEntry:(id)arg2 ;
-(BOOL)shouldUseBrightMaterial;
-(id)_orientationWrapperForRole:(long long)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)setShouldUseBrightMaterial:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)_updateContentOrientationForRole:(long long)arg1 ;
-(void)_updateSceneHandleForRole:(long long)arg1 ;
-(void)_removeAppClipOverlayForRole:(long long)arg1 ;
-(void)didUpdateCacheEntry:(id)arg1 ;
-(void)_updateTranslucency;
-(void)_updateCornerRadiusIfNecessaryForOverlayView:(id)arg1 matchingSnapshotImage:(id)arg2 ;
-(void)_removeAppLockoutOverlayForRole:(long long)arg1 ;
-(BOOL)_isAnimatingTransitionForRole:(long long)arg1 ;
-(void)_setAnimatingTransition:(BOOL)arg1 forRole:(long long)arg2 ;
-(BOOL)hasSceneOverlayView;
-(long long)_contentOrientationForSnapshotOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)_cacheEntryForRole:(long long)arg1 ;
-(void)setShowingIconOverlayView:(BOOL)arg1 ;
-(void)_addOverlayViewController:(id)arg1 toOrientationWrapperForRole:(long long)arg2 ;
-(void)setAppLayout:(SBAppLayout *)arg1 ;
-(CGRect)_frameForBackstopLayer;
-(void)prepareForReuse;
-(void)_setSceneHandle:(id)arg1 forRole:(long long)arg2 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)_imageViewForRole:(long long)arg1 ;
-(void)invalidate;
-(void)_addAppLockoutOverlayIfNecessaryForRole:(long long)arg1 ;
-(void)_addAppClipOverlayForRole:(long long)arg1 bundleIdentifier:(id)arg2 sceneIdentifier:(id)arg3 ;
-(CGRect)_frameInLayoutSpaceForRole:(long long)arg1 inAppLayout:(id)arg2 inOrientation:(long long)arg3 ;
@end

