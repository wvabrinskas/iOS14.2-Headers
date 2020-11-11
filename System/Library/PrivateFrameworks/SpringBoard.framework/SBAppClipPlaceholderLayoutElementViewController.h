/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <libobjc.A.dylib/SBSceneViewStatusBarAssertionObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescriberProviding.h>
#import <libobjc.A.dylib/SBApplicationSceneStatusBarDescribing.h>
#import <libobjc.A.dylib/SBSceneLayoutMedusaStatusBarAssertionProviding.h>

@protocol SBDeviceApplicationSceneStatusBarStateObserver;
@class NSString, SBAppClipOverlayViewController, NSMutableArray, _UIStatusBarData, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneHandle, FBScene;

@interface SBAppClipPlaceholderLayoutElementViewController : SBLayoutElementViewController <SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding> {

	NSString* _bundleIdentifier;
	NSString* _sceneIdentifier;
	SBAppClipOverlayViewController* _placeholderViewController;
	BOOL _isObservingApplicationInstalls;
	NSMutableArray* _statusBarAssertions;
	id<SBDeviceApplicationSceneStatusBarStateObserver> _statusBarDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SBApplicationSceneStatusBarDescribing> statusBarDescriber; 
@property (assign,nonatomic,__weak) id<SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate;              //@synthesize statusBarDelegate=_statusBarDelegate - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarOrientation; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) BOOL sceneWantsDeviceOrientationEventsEnabled; 
@property (nonatomic,readonly) NSString * statusBarSceneIdentifier; 
@property (nonatomic,readonly) _UIStatusBarData * overlayStatusBarData; 
@property (nonatomic,readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider * breadcrumbProvider; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * classicApplicationSceneHandleIfExists; 
@property (nonatomic,readonly) FBScene * sceneToHandleStatusBarTapIfExists; 
-(int)statusBarStyleOverridesToSuppress;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(void)_cleanup;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(SBDeviceApplicationSceneHandle *)classicApplicationSceneHandleIfExists;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(FBScene *)sceneToHandleStatusBarTapIfExists;
-(BOOL)statusBarHidden;
-(void)statusBarAssertionDidUpdate:(id)arg1 ;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescriberProviding;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(NSString *)statusBarSceneIdentifier;
-(id<SBDeviceApplicationSceneStatusBarStateObserver>)statusBarDelegate;
-(double)statusBarAlpha;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(void)statusBarAssertionDidInvalidate:(id)arg1 ;
-(CGRect)statusBarAvoidanceFrame;
-(void)setStatusBarDelegate:(id<SBDeviceApplicationSceneStatusBarStateObserver>)arg1 ;
-(_UIStatusBarData *)overlayStatusBarData;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(id<SBApplicationSceneStatusBarDescribing>)statusBarDescriber;
-(long long)statusBarOrientation;
-(SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
-(void)_statusBarAssertionDidUpdate;
-(unsigned long long)supportedContentInterfaceOrientations;
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)statusBarStyleForPartWithIdentifier:(id)arg1 ;
-(id)_aggregateStatusBarOverrideSettings;
-(void)_beginObservingApplicationInstalls;
-(long long)statusBarStyle;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
-(void)invalidate;
-(void)_launchApplication:(id)arg1 ;
-(void)_stopObservingApplicationInstalls;
@end
