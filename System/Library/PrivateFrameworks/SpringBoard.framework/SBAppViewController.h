/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBApplicationHosting.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControlling.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBScenePlaceholderContentContext, SBApplicationSceneViewControllingStatusBarDelegate, SBAppViewControllerDelegate;
@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBActivationSettings, NSMutableSet, NSSet, SBApplicationSceneView, SBApplicationSceneHandle, UIView;

@interface SBAppViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBApplicationHosting, SBApplicationSceneViewControlling, BSInvalidatable> {

	NSString* _identifier;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	SBDeviceApplicationSceneViewController* _deviceAppViewController;
	SBActivationSettings* _activationSettings;
	id<SBScenePlaceholderContentContext> _placeholderContentContext;
	NSMutableSet* _activeTransitions;
	NSSet* _actionsToDeliver;
	long long _requestedMode;
	long long _currentMode;
	BOOL _sceneContentIsReady;
	BOOL _ignoresOcclusions;
	BOOL _invalidated;
	BOOL _automatesLifecycle;
	BOOL _placeholderContentEnabled;
	BOOL _wantsSecureRendering;
	id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
	id<SBAppViewControllerDelegate> _delegate;
	SBActivationSettings* _supplementalActivationSettings;

}

@property (assign,nonatomic,__weak) id<SBAppViewControllerDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL automatesLifecycle;                                                                                      //@synthesize automatesLifecycle=_automatesLifecycle - In the implementation block
@property (assign,nonatomic) long long requestedMode;                                                                                      //@synthesize requestedMode=_requestedMode - In the implementation block
@property (nonatomic,readonly) long long currentMode;                                                                                      //@synthesize currentMode=_currentMode - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneView * appView; 
@property (assign,nonatomic) BOOL ignoresOcclusions;                                                                                       //@synthesize ignoresOcclusions=_ignoresOcclusions - In the implementation block
@property (nonatomic,retain) NSSet * actionsToDeliver;                                                                                     //@synthesize actionsToDeliver=_actionsToDeliver - In the implementation block
@property (assign,nonatomic) BOOL wantsSecureRendering;                                                                                    //@synthesize wantsSecureRendering=_wantsSecureRendering - In the implementation block
@property (assign,nonatomic) BOOL placeholderContentEnabled;                                                                               //@synthesize placeholderContentEnabled=_placeholderContentEnabled - In the implementation block
@property (nonatomic,retain) SBActivationSettings * supplementalActivationSettings;                                                        //@synthesize supplementalActivationSettings=_supplementalActivationSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle;                                                                     //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext;                                               //@synthesize placeholderContentContext=_placeholderContentContext - In the implementation block
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(void)conformsToSBApplicationHosting;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(long long)currentMode;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(CGSize)contentReferenceSize;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(BOOL)isHostingAnApp;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(void)_deactivateHostedApp;
-(BOOL)canHostAnApp;
-(double)statusBarAlpha;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(BOOL)placeholderContentEnabled;
-(BOOL)automatesLifecycle;
-(void)_destroySceneViewController;
-(BOOL)ignoresOcclusions;
-(id<SBAppViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(SBActivationSettings *)supplementalActivationSettings;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setCustomContentView:(UIView *)arg1 ;
-(id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(void)_sendActions:(id)arg1 ;
-(void)_transformHostedAppViewForRotationToOrientation:(long long)arg1 ;
-(SBApplicationSceneHandle *)sceneHandle;
-(id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2 ;
-(id)newSnapshot;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<SBAppViewControllerDelegate>)arg1 ;
-(long long)displayMode;
-(BOOL)wantsSecureRendering;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)setIgnoresOcclusions:(BOOL)arg1 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(void)setSupplementalActivationSettings:(SBActivationSettings *)arg1 ;
-(void)_createSceneViewController;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(void)setRequestedMode:(long long)arg1 ;
-(long long)overrideStatusBarStyle;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSSet *)actionsToDeliver;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)newSnapshotView;
-(void)_activateApp;
-(id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2 ;
-(void)_setCurrentMode:(long long)arg1 ;
-(UIView *)customContentView;
-(SBApplicationSceneView *)appView;
-(long long)contentInterfaceOrientation;
-(void)setPlaceholderContentEnabled:(BOOL)arg1 ;
-(long long)requestedMode;
-(void)setAutomatesLifecycle:(BOOL)arg1 ;
-(void)setWantsSecureRendering:(BOOL)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)_updateForAppearanceState:(int)arg1 ;
@end
