/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFluidGestureDismissable.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <libobjc.A.dylib/SiriPresentationSpringBoardMainScreenViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/CSCoverSheetOverlaying.h>

@protocol BSInvalidatable, SBIdleTimer, SBIdleTimerCoordinating;
@class SBFluidDismissalState, BSEventQueue, NSString, SBAssistantWindow, SBAssistantActiveInterfaceOrientationWindow, SBFAuthenticationAssertion, NSHashTable, UIApplicationSceneDeactivationAssertion, SBHomeGestureParticipant, SiriPresentationSpringBoardMainScreenViewController, FBDisplayLayoutElement, NSSet, SBSystemAnimationSettings, NSMutableArray, UITapGestureRecognizer, SBHomeGesturePanGestureRecognizer, UIPanGestureRecognizer, SBTransientOverlayViewController;

@interface SBAssistantController : NSObject <SBFluidGestureDismissable, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying> {

	BSEventQueue* _operationQueue;
	NSString* _appDisplayIDBeingHosted;
	SBAssistantWindow* _assistantWindow;
	SBAssistantActiveInterfaceOrientationWindow* _assistantActiveInterfaceOrientationWindow;
	BOOL _unlockedDevice;
	BOOL _isHidingOtherWindows;
	SBFAuthenticationAssertion* _disableAssertion;
	NSHashTable* _observers;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	SBHomeGestureParticipant* _homeGestureParticipant;
	SiriPresentationSpringBoardMainScreenViewController* _mainScreenSiriPresentation;
	SiriPresentationSpringBoardMainScreenViewController* _presentedMainScreenSiriPresentation;
	BOOL _visible;
	BOOL _dismissing;
	FBDisplayLayoutElement* _mainDisplayLayoutElement;
	SBFluidDismissalState* _fluidDismissalState;
	NSSet* _audioCategoriesDisablingVolumeHUD;
	id<BSInvalidatable> _hideApplicationModalAlertsAssertion;
	SBSystemAnimationSettings* _settings;
	id<SBIdleTimer> _idleTimer;
	NSMutableArray* _windowLevelAssertions;
	UITapGestureRecognizer* _tapToDismissSiriGestureRecognizer;
	SBHomeGesturePanGestureRecognizer* _bottomEdgeDismissGestureRecognizer;
	BOOL _shouldPassTapsThroughToSiri;
	BOOL _shareHomeGesture;
	BOOL _tapsDismissSiri;
	BOOL _swipesDismissSiri;
	UIPanGestureRecognizer* _panToDismissSiriGestureRecognizer;
	long long _homeAffordanceSuppression;
	BOOL _siriWantsToShowHomeAffordance;
	SBTransientOverlayViewController* _topmostTransientViewControllerAtPresentation;
	BOOL _screenShotServicesIsRunning;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	id<BSInvalidatable> _suspendWallpaperAnimationAssertion;

}

@property (nonatomic,retain) SBFluidDismissalState * fluidDismissalState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationAssertion;                                                                             //@synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL unlockedDevice;                                                                                                              //@synthesize unlockedDevice=_unlockedDevice - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                                                                                                    //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) BOOL contentObscuresScreen; 
@property (nonatomic,readonly) BOOL preventsCoverSheetPresentation; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
+(BOOL)isVisible;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(BOOL)shouldDismissSiriForGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
+(void)bootstrapServices;
+(BOOL)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_updateHomeGestureParticipant;
-(BOOL)isVisible;
-(void)_updateWindowLevel;
-(NSString *)coverSheetIdentifier;
-(BOOL)shouldShowLockStatusBarTime;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(void)_teardownWindowInUse;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)_idleTimerCoordinator;
-(void)_setupSystemGestures;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_restoreOrientation;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(id)_idleTimerBehavior;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_presentForMainScreenAnimated:(BOOL)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)_defaultAnimatedDismissDurationForMainScreen;
-(id)rootViewController;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 dismissalOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(void)removeObserver:(id)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(void)_updateOrientationLock;
-(void)_updateRootViewControllerShowsHomeAffordance:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg2 ;
-(id)init;
-(void)_resetSystemGestures;
-(void)applicationProcessDidChangeState:(id)arg1 ;
-(SBFluidDismissalState *)fluidDismissalState;
-(BOOL)shouldShowSystemVolumeHUDForCategory:(id)arg1 ;
-(void)siriPresentation:(id)arg1 setShowsHomeAffordance:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 ;
-(id)mainScreenView;
-(void)_viewDidDisappearOnMainScreen:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg1 didUpdateHomeGestureSharing:(BOOL)arg2 ;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg2 ;
-(id)activationSettings;
-(void)_pannedToDismissSiri:(id)arg1 ;
-(void)_turnScreenOffWithCompletion:(/*^block*/id)arg1 ;
-(long long)idleTimerDuration;
-(void)_handleBottomEdgeDismissGesture:(id)arg1 ;
-(void)_tappedToDismissSiri:(id)arg1 ;
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2 ;
-(long long)scrollingStrategy;
-(BOOL)contentObscuresScreen;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)siriPresentation:(id)arg1 isEnabledDidChange:(BOOL)arg2 ;
-(void)_configureHomeGesture;
-(long long)idleTimerMode;
-(void)_prototypeSettingsChanged;
-(void)_tearDownSystemGestures;
-(void)_toggleModalAlertHidingAssertion:(BOOL)arg1 ;
-(void)_viewDidAppearOnMainScreen:(BOOL)arg1 ;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2 ;
-(void)homeGestureParticipantResolvedHomeAffordanceSuppressionDidChange:(id)arg1 ;
-(void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dismissAssistantViewIfNecessaryWithDismissalOptions:(id)arg1 ;
-(void)dismissAssistantViewIfNecessaryForGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_commonHandlerForSiriDismissalGesture:(id)arg1 ;
-(void)_configurePanToDismissGestureDependencies;
-(void)_setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)preventsCoverSheetPresentation;
-(void)_dockFrameDidChange:(id)arg1 ;
-(void)_updateDockViewFrame:(CGRect)arg1 ;
-(void)_updateOrbLocation:(id)arg1 ;
-(long long)idleWarnMode;
-(void)_deviceBlocked:(id)arg1 ;
-(void)_removeScreenEdgePanGestureRecognizerIfNecessary;
-(void)_createAssistantWindowIfNecessaryForSiriPresentationOptions:(id)arg1 ;
-(void)_updateShouldPassTapsThrough;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_viewWillDisappearOnMainScreen:(BOOL)arg1 ;
-(void)_removeHomeGesture;
-(void)_updateSceneClientSettings;
-(void)screenWakeRequested;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg1 ;
-(id)_createPanToDismissSiriGestureRecognizer;
-(void)screenWakeIdleTimerResetRequested;
-(BOOL)unlockedDevice;
-(void)_viewWillAppearOnMainScreen:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(long long)participantState;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(long long)proximityDetectionMode;
-(BOOL)requestPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(id)_activationSettingsWithPunchoutStyle:(long long)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(void)_setUnlockedDevice:(BOOL)arg1 ;
-(void)deviceUnlockRequestedWithPassword:(id)arg1 ;
-(void)siriPresentation:(id)arg1 didUpdateShouldPassTapsThroughTo:(BOOL)arg2 ;
-(id)_init;
-(BOOL)isEnabled;
-(id)window;
-(void)_dismissForMainScreenWithFactory:(id)arg1 dismissalOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_noteDeviceLockedOrBlocked;
-(void)_setShareHomeGesture:(BOOL)arg1 ;
-(void)_setTouchesPassThroughToSpringBoard:(BOOL)arg1 ;
-(id)_siriHomeAffordanceSuppressionAsString:(long long)arg1 ;
-(BOOL)overrideInterfaceOrientation:(long long*)arg1 ;
-(long long)notificationBehavior;
-(void)siriPresentation:(id)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg2 ;
-(void)siriPresentation:(id)arg1 setHomeAffordanceSuppression:(long long)arg2 ;
-(void)_uiLocked:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_remoteLocked:(id)arg1 ;
-(void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setFluidDismissalState:(SBFluidDismissalState *)arg1 ;
-(void)conformsToCSBehaviorProviding;
-(void)_updateRootViewControllerOwnsHomeGesture;
-(void)dealloc;
-(id)_createTapToDimissSiriGestureRecognizer;
-(void)_setVisible:(BOOL)arg1 ;
-(void)dismissAssistantViewIfNecessary;
@end
