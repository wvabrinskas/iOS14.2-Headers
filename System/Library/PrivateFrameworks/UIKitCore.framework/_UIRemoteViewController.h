/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKitCore/_UIRemoteViewController_ViewControllerOperatorInterface.h>

@protocol BSInvalidatable;
@class NSString, _UIViewServiceInterface, _UIRemoteViewService, NSArray, _UIAsyncInvocation, _UISizeTrackingView, _UIRemoteView, _UITextEffectsRemoteView, UIView, FBSDisplayIdentity, NSError, _UITextServiceSession, UIDimmingView, UIAlertController, BKSTouchDeliveryPolicyAssertion, _UISheetPresentationControllerConfiguration;

@interface _UIRemoteViewController : UIViewController <UIDimmingViewDelegate, _UIRemoteViewController_ViewControllerOperatorInterface> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	NSString* _serviceBundleIdentifier;
	_UIViewServiceInterface* _serviceInterface;
	_UIRemoteViewService* _remoteViewService;
	id _serviceViewControllerProxy;
	id _serviceViewControllerControlMessageProxy;
	NSArray* _serviceViewControllerSupportedInterfaceOrientations;
	unsigned _serviceAccessibilityServerPort;
	unsigned long long _serviceRegisteredScrollToTopViewCount;
	int _applicationDeactivationReason;
	BOOL _systemAppIsLocked;
	BOOL _observesLockNotifications;
	id _viewControllerOperatorProxy;
	_UIAsyncInvocation* _viewControllerOperatorHalfDisconnectionInvocation;
	id _textEffectsOperatorProxy;
	_UIAsyncInvocation* _textEffectsOperatorHalfDisconnectionInvocation;
	_UISizeTrackingView* _sizeTrackingView;
	_UIRemoteView* _serviceViewControllerRemoteView;
	_UITextEffectsRemoteView* _fullScreenTextEffectsRemoteView;
	_UITextEffectsRemoteView* _textEffectsAboveStatusBarRemoteView;
	_UITextEffectsRemoteView* _remoteKeyboardRemoteView;
	UIView* _fullScreenTextEffectsSnapshotView;
	BOOL _snapshotTextEffectsAfterRotation;
	FBSDisplayIdentity* _serviceScreenDisplayIdentity;
	_UIAsyncInvocation* _terminationInvocation;
	os_unfair_lock_s _terminationErrorLock;
	NSError* _terminationError;
	_UITextServiceSession* _textServiceSession;
	UIDimmingView* _hostedDimmingView;
	UIView* _touchGrabbingView;
	long long _preferredStatusBarStyle;
	int _preferredStatusBarVisibility;
	long long _preferredStatusBarUpdateAnimation;
	id<BSInvalidatable> _eventFocusDeferralToken;
	BOOL _isFocusDeferred;
	NSString* _deferredDisplayUUID;
	unsigned _deferredContextID;
	BOOL _focusWasDeferredBeforeDeactivation;
	BOOL _focusWasDeferredBeforeResignKey;
	/*^block*/id _contextDidAttachFocusDeferralAction;
	/*^block*/id _contextDidDetachFocusDeferralAction;
	NSArray* _allowedNotifications;
	NSArray* _sizeTrackingConstraints;
	BOOL _sizeTrackingViewShouldTranslateAutoResizeMaskIntoConstraints;
	int _sizeTrackingViewAutoResizeMask;
	CGSize _serviceScreenSize;
	UIView* _viewServiceTouchInterdictionView;
	UIAlertController* _proxiedEditAlertController;
	long long _proxiedEditAlertToken;
	long long _preferredAdaptivityStyle;
	unsigned long long _preferredScreenEdgesDeferringSystemGestures;
	BOOL _prefersHomeIndicatorAutoHidden;
	BOOL _prefersPointerLocked;
	NSArray* _multitaskingDragExclusionRects;
	BOOL _isUnderlappingStatusBar;
	BOOL __shouldUpdateRemoteTextEffectsWindow;
	long long _preferredUserInterfaceStyle;
	BOOL _isUpdatingSize;
	BOOL _isUpdatingSizeInHost;
	BOOL _serviceViewShouldShareTouchesWithHost;
	BOOL __viewClipsToBounds;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;
	_UISheetPresentationControllerConfiguration* __sheetConfiguration;

}

@property (setter=_setTouchDeliveryPolicyAssertion:,nonatomic,retain) BKSTouchDeliveryPolicyAssertion * _touchDeliveryPolicyAssertion;              //@synthesize touchDeliveryPolicyAssertion=_touchDeliveryPolicyAssertion - In the implementation block
@property (assign,setter=_setIsUpdatingSize:,nonatomic) BOOL _isUpdatingSize;                                                                       //@synthesize isUpdatingSize=_isUpdatingSize - In the implementation block
@property (assign,setter=_setIsUpdatingSizeInHost:,nonatomic) BOOL _isUpdatingSizeInHost;                                                           //@synthesize isUpdatingSizeInHost=_isUpdatingSizeInHost - In the implementation block
@property (setter=_setSheetConfiguration:,nonatomic,retain) _UISheetPresentationControllerConfiguration * _sheetConfiguration;                      //@synthesize _sheetConfiguration=__sheetConfiguration - In the implementation block
@property (nonatomic,readonly) NSString * serviceBundleIdentifier; 
@property (nonatomic,readonly) int serviceProcessIdentifier; 
@property (nonatomic,readonly) SCD_Struct_UI61 serviceAuditToken; 
@property (assign,setter=_setShouldUpdateRemoteTextEffectsWindow:,nonatomic) BOOL _shouldUpdateRemoteTextEffectsWindow; 
@property (assign,nonatomic) BOOL serviceViewShouldShareTouchesWithHost;                                                                            //@synthesize serviceViewShouldShareTouchesWithHost=_serviceViewShouldShareTouchesWithHost - In the implementation block
@property (assign,setter=_setViewClipsToBounds:,nonatomic) BOOL _viewClipsToBounds;                                                                 //@synthesize _viewClipsToBounds=__viewClipsToBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 connectionHandler:(/*^block*/id)arg4 ;
+(id)_requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 service:(id)arg4 connectionHandler:(/*^block*/id)arg5 ;
+(id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)requestViewControllerWithService:(id)arg1 traitCollection:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)exportedInterface;
+(BOOL)__shouldHostRemoteTextEffectsWindow;
+(BOOL)shouldPropagateAppearanceCustomizations;
+(BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+(BOOL)__shouldAllowHostProcessToTakeFocus;
+(id)requestViewControllerWithService:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)serviceViewControllerInterface;
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
-(long long)preferredWhitePointAdaptivityStyle;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(id)disconnect;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4 ;
-(void)__viewServiceSheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(id)arg4 ;
-(void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4 ;
-(oneway void)release;
-(void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(long long)preferredUserInterfaceStyle;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(id)arg2 ;
-(void)__showServiceForText:(id)arg1 selectedTextRangeValue:(id)arg2 type:(long long)arg3 fromRectValue:(id)arg4 replyHandler:(/*^block*/id)arg5 ;
-(int)__automatic_invalidation_logic;
-(void)_sceneWillEnterForeground:(id)arg1 ;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(id)_multitaskingDragExclusionRects;
-(BOOL)inheritsSecurity;
-(CGSize)intrinsicContentSizeForServiceSize:(CGSize)arg1 ;
-(void)viewDidInvalidateIntrinsicContentSize;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)__viewServiceDidRegisterScrollToTopView;
-(id)retain;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)_hostDidEnterBackground:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)_hostWillEnterForeground:(id)arg1 ;
-(SCD_Struct_UI61)serviceAuditToken;
-(void)_updateTintColor;
-(int)_preferredStatusBarVisibility;
-(unsigned long long)supportedInterfaceOrientations;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(BOOL)prefersPointerLocked;
-(id)_appearanceSource;
-(BOOL)_serviceHasScrollToTopView;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)_viewClipsToBounds;
-(BOOL)_shouldUpdateRemoteTextEffectsWindow;
-(BOOL)_isUpdatingSize;
-(void)_screenDidConnect:(id)arg1 ;
-(BOOL)_needsUnderflowPropertyUpdate;
-(void)_updateUnderflowProperties;
-(void)_noteWindowState:(BOOL)arg1 ;
-(id)_fenceForSynchronizedDrawing;
-(void)synchronizeAnimationsInActions:(/*^block*/id)arg1 ;
-(void)updateTouchInterdictionViewLayout;
-(void)_prepareTouchDeliveryPolicy;
-(void)_scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)serviceViewShouldShareTouchesWithHost;
-(void)_setTouchDeliveryPolicyAssertion:(id)arg1 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_screenDidUpdate:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(id)_initWithViewServiceBundleIdentifier:(id)arg1 ;
-(BOOL)shouldPropagateAppearanceCustomizations;
-(void)_awakeWithConnectionInfo:(id)arg1 ;
-(void)_statusBarOrientationDidChange:(id)arg1 ;
-(void)_hostSceneWillEnterForeground:(id)arg1 ;
-(void)_hostSceneDidEnterBackground:(id)arg1 ;
-(void)_applicationDidFinishSuspendSnapshot:(id)arg1 ;
-(void)_appearanceInvocationsDidChange:(id)arg1 ;
-(id)_addAutoAllowedNotifications:(id)arg1 ;
-(id)forbiddenNotifications;
-(long long)__getPreferredInterfaceOrientation;
-(void)_configureFocusDeferralForEnteringForeground;
-(int)serviceProcessIdentifier;
-(id)_hostDeferralPredicate;
-(id)_clientDeferralTarget;
-(void)_removeTextEffectsRemoteViews;
-(void)_cancelProxiedEditAlertViewAnimated:(BOOL)arg1 ;
-(id)textEffectsWindowForServiceScreen;
-(void)_configureFocusDeferralForEnteringBackground;
-(void)_restoreTextEffectsRemoteView;
-(void)_snapshotAndRemoveTextEffectsRemoteView;
-(void)_updateLockStatusHostingVisibility;
-(BOOL)_shouldDeferEventsForFocusOnScreen:(id)arg1 ;
-(void)_systemApplicationWillLock:(id)arg1 ;
-(void)_statusBarHeightDidChange:(id)arg1 ;
-(void)_systemApplicationDidUnlock:(id)arg1 ;
-(id)_sheetPresentationController;
-(void)_screenIDChanged:(id)arg1 ;
-(void)__updateDeferralPropertiesForScreen:(id)arg1 ;
-(void)_setIsUpdatingSize:(BOOL)arg1 ;
-(NSString *)serviceBundleIdentifier;
-(void)_updateTouchGrabbingView;
-(void)__setInterdictServiceViewTouches:(BOOL)arg1 ;
-(void)_configureSizeViewConstraintsForWindow:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(id)allowedNotifications;
-(void)setAllowedNotifications:(id)arg1 ;
-(void)_setIsUpdatingSizeInHost:(BOOL)arg1 ;
-(BOOL)_isUpdatingSizeInHost;
-(void)_endNoPresentingViewControllerAlertController:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)__viewServiceDidPromoteFirstResponder;
-(void)__viewServiceDidChangeKeyWindow:(BOOL)arg1 ;
-(void)__setSupportedInterfaceOrientations:(id)arg1 ;
-(void)__showServiceForType:(long long)arg1 withContext:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)__setServiceMaxFrameSize:(CGSize)arg1 ;
-(void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(_UISheetPresentationControllerConfiguration *)_sheetConfiguration;
-(void)__dismissTextServiceSessionAnimated:(BOOL)arg1 ;
-(void)__setViewServiceIsDisplayingPopover:(BOOL)arg1 ;
-(void)__viewServicePopoverDidChangeContentSize:(CGSize)arg1 animated:(BOOL)arg2 fence:(id)arg3 withReplyHandler:(/*^block*/id)arg4 ;
-(void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1 ;
-(void)setObservesLockNotifications:(BOOL)arg1 ;
-(void)__viewServicePreferredContentSizeDidChange:(CGSize)arg1 fence:(id)arg2 ;
-(void)__viewServiceInstrinsicContentSizeDidChange:(CGSize)arg1 fence:(id)arg2 ;
-(void)_uirvc_windowBecameKey:(id)arg1 ;
-(void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(unsigned long long)arg1 ;
-(id)autorelease;
-(BOOL)_requiresKeyboardWindowWhenFirstResponder;
-(void)__viewServiceDidUpdatePrefersHomeIndicatorAutoHidden:(BOOL)arg1 ;
-(void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)__viewServiceDidUpdatePrefersPointerLocked:(BOOL)arg1 ;
-(BOOL)observesLockNotifications;
-(void)__viewServiceDidUpdateMultitaskingDragExclusionRects:(id)arg1 ;
-(void)__trampolineButtonPressData:(id)arg1 canceled:(BOOL)arg2 ;
-(void)restoreStateForSession:(id)arg1 anchor:(id)arg2 ;
-(void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(BOOL)arg2 canRedo:(BOOL)arg3 ;
-(void)__handleFocusMovementAction:(id)arg1 ;
-(void)_setShouldUpdateRemoteTextEffectsWindow:(BOOL)arg1 ;
-(void)_uirvc_windowResignedKey:(id)arg1 ;
-(void)_initializeAccessibilityPortInformation;
-(void)saveStateForSession:(id)arg1 anchor:(id)arg2 ;
-(BOOL)__interdictServiceViewTouches;
-(void)setServiceViewShouldShareTouchesWithHost:(BOOL)arg1 ;
-(id)_cancelTouchesForCurrentEventInHostedContent;
-(BKSTouchDeliveryPolicyAssertion *)_touchDeliveryPolicyAssertion;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)serviceViewControllerProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serviceViewControllerProxy;
-(unsigned long long)retainCount;
-(BOOL)_tryRetain;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_windowDidAttachContext:(id)arg1 ;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(void)_terminateUnconditionallyThen:(/*^block*/id)arg1 ;
-(BOOL)_isDeallocating;
-(void)_setSheetConfiguration:(id)arg1 ;
-(void)_setViewClipsToBounds:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)_ignoreAppSupportedOrientations;
-(BOOL)canBecomeFirstResponder;
-(void)loadView;
-(void)_traitCollectionDidChange:(id)arg1 ;
-(long long)preferredStatusBarUpdateAnimation;
-(void)_setSecurityModeForViewsLayer;
-(void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)__setMediaOverridePID:(int)arg1 ;
-(void)_windowDidDetachContext:(id)arg1 ;
-(void)_setDeferred:(BOOL)arg1 forDisplayUUID:(id)arg2 ;
-(void)_applicationWillDeactivate:(id)arg1 ;
-(void)dealloc;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(id)_terminateWithError:(id)arg1 ;
@end
