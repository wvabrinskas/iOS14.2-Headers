/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationSceneView.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneClassicAccessoryViewDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@protocol UISceneLayerTarget, UIScenePresentation;
@class SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, SBApplicationSceneViewStatusBarDescriptor, _UIDirectionalRotationView, SBHomeGrabberRotationView, SBFHomeGrabberSettings, NSMutableDictionary, SBDeviceApplicationSceneClassicAccessoryView, UIView, NSMutableArray, NSString, SBDeviceApplicationSceneHandle, SBHomeGrabberView;

@interface SBDeviceApplicationSceneView : SBApplicationSceneView <SBDeviceApplicationSceneClassicAccessoryViewDelegate, PTSettingsKeyObserver, SBAppSwitcherPageContentView> {

	id<UISceneLayerTarget> _statusBarLayerTarget;
	SBSceneHandleBlockObserver* _sceneHandleObserver;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsInspector;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInspector;
	SBApplicationSceneViewStatusBarDescriptor* _statusBarDescriptor;
	_UIDirectionalRotationView* _hostCounterRotationView;
	SBHomeGrabberRotationView* _grabberRotationView;
	SBFHomeGrabberSettings* _grabberSettings;
	BOOL _grabberLivesInCounterRotationView;
	NSMutableDictionary* _overlayViewsByPriority;
	long long _lastStableOverlayOrientation;
	BOOL _waitingForBoundsUpdateDuringRotation;
	long long _overlayOrientationAtStartOfRotation;
	SBDeviceApplicationSceneClassicAccessoryView* _classicAccessoryView;
	UIView* _classicWrapperView;
	UIView* _classicPositioningView;
	UIView*<UIScenePresentation> _wrappedHostView;
	NSMutableArray* _multitaskingExclusionRectDebugViews;
	BOOL _active;
	BOOL _visible;
	BOOL _counterRotationViewTransformUpdatesPaused;
	double _statusBarAlpha;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL counterRotationViewTransformUpdatesPaused;                               //@synthesize counterRotationViewTransformUpdatesPaused=_counterRotationViewTransformUpdatesPaused - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,retain) UIView*<SBApplicationSceneBackgroundView> backgroundView; 
@property (assign,nonatomic) BOOL forcesStatusBarHidden; 
@property (nonatomic,retain) SBApplicationSceneViewStatusBarDescriptor * statusBarDescriptor;              //@synthesize statusBarDescriptor=_statusBarDescriptor - In the implementation block
@property (assign,nonatomic) double statusBarAlpha;                                                        //@synthesize statusBarAlpha=_statusBarAlpha - In the implementation block
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
-(BOOL)isVisible;
-(void)setVisible:(BOOL)arg1 ;
-(void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg1 ;
-(void)_refresh;
-(BOOL)forcesStatusBarHidden;
-(void)_invalidateSceneLiveHostView:(id)arg1 ;
-(void)setStatusBarDescriptor:(SBApplicationSceneViewStatusBarDescriptor *)arg1 ;
-(void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
-(void)setActive:(BOOL)arg1 ;
-(double)statusBarAlpha;
-(void)_updateStatusBarVisibilityForHostView;
-(void)setBackgroundView:(UIView*<SBApplicationSceneBackgroundView>)arg1 ;
-(void)addOverlayView:(id)arg1 withPriority:(long long)arg2 ;
-(long long)_wallpaperStyle;
-(void)_updateReferenceSize:(CGSize)arg1 andOrientation:(long long)arg2 ;
-(void)_configureSceneLiveHostView:(id)arg1 ;
-(BOOL)contentRequiresGroupOpacity;
-(BOOL)counterRotationViewTransformUpdatesPaused;
-(void)_tearDownHostCounterRotationViewIfNecessary;
-(void)_createHostCounterRotationViewIfNecessary;
-(void)tearDownHomeGrabberView;
-(void)setBounds:(CGRect)arg1 ;
-(void)teardownClassicAccesoryViewIfNecessary;
-(id)_transitionViewForHostView;
-(id)deviceApplicationSceneView;
-(void)_updateDragAndDropExclusionDebugViewsIfNecessary;
-(NSString *)description;
-(void)layoutSubviews;
-(SBHomeGrabberView *)homeGrabberView;
-(BOOL)isActive;
-(void)setCounterRotationViewTransformUpdatesPaused:(BOOL)arg1 ;
-(void)_layoutLiveHostView:(id)arg1 ;
-(BOOL)_sceneDrivesOwnRotation;
-(double)cornerRadius;
-(void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)createClassicAccesoryViewIfNecessary;
-(void)setStatusBarAlpha:(double)arg1 ;
-(void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg1 ;
-(void)_configureSceneSnapshotContext:(id)arg1 ;
-(CGRect)_effectiveSceneBounds;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4 ;
-(void)applicationSceneCompatibilityModeAnimatingChangeTo:(long long)arg1 ;
-(BOOL)_representsTranslucentContent;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)invalidate;
-(void)removeOverlayView:(id)arg1 withPriority:(long long)arg2 ;
-(void)setForcesStatusBarHidden:(BOOL)arg1 ;
-(void)dealloc;
-(void)_maybeStartTrackingRotationForOverlay;
-(void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(SBApplicationSceneViewStatusBarDescriptor *)statusBarDescriptor;
@end

