//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSUIScrollViewDelegate-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyPathObserver-Protocol.h>
#import <SpringBoard/SBAppSwitcherReusableSnapshotViewDelegate-Protocol.h>
#import <SpringBoard/SBAppSwitcherSnapshotImageCacheDelegate-Protocol.h>
#import <SpringBoard/SBC2GroupCompletionDelegate-Protocol.h>
#import <SpringBoard/SBChainableModifierDelegate-Protocol.h>
#import <SpringBoard/SBFluidSwitcherItemContainerDelegate-Protocol.h>
#import <SpringBoard/SBFluidSwitcherPageContentViewProviderDelegate-Protocol.h>
#import <SpringBoard/SBHistorianSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBIconViewObserver-Protocol.h>
#import <SpringBoard/SBSearchGestureObserver-Protocol.h>
#import <SpringBoard/SBSwitcherContentViewControlling-Protocol.h>
#import <SpringBoard/SBSwitcherLiveContentOverlayCoordinatorDelegate-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class BSAnimationSettings, NSArray, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString, SBAppSwitcherScrollView, SBAppSwitcherSettings, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBBestAppSuggestion, SBFHomeGrabberSettings, SBFloatingDockBehaviorAssertion, SBFloatingDockWindowLevelAssertion, SBFluidSwitcherButton, SBFluidSwitcherContentView, SBFluidSwitcherLayoutContext, SBFluidSwitcherModifierTimelineController, SBFluidSwitcherPageContentViewProvider, SBFluidSwitcherTitledButton, SBHomeScreenBackdropViewBase, SBLayoutStateTransitionCoordinator, SBSceneManager, SBSwitcherAccessoryLayoutElement, SBSwitcherModifier, SBViewMorphAnimator, SBWorkspaceApplicationSceneTransitionContext, UIApplicationSceneDeactivationAssertion, UILabel, UINotificationFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol BSInvalidatable, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherLiveContentOverlayCoordinating;

@interface SBFluidSwitcherViewController : UIViewController <SBFluidSwitcherPageContentViewProviderDelegate, SBChainableModifierDelegate, SBAppSwitcherSnapshotImageCacheDelegate, BSUIScrollViewDelegate, SBFluidSwitcherItemContainerDelegate, SBIconViewObserver, BSDescriptionProviding, UIGestureRecognizerDelegate, SBSearchGestureObserver, PTSettingsKeyObserver, PTSettingsKeyPathObserver, SBHistorianSwitcherModifierDelegate, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBAppSwitcherReusableSnapshotViewDelegate, SBC2GroupCompletionDelegate, SBSwitcherContentViewControlling>
{
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    SBSceneManager *_sceneManager;
    id <SBSwitcherLiveContentOverlayCoordinating> _liveContentOverlayCoordinator;
    NSMutableDictionary *_liveContentOverlays;
    NSMutableDictionary *_appLayoutToHeaderItemController;
    struct CGPoint _scrollViewLastContentOffset;
    _Bool _scrollViewLastScrolledForward;
    SBFluidSwitcherPageContentViewProvider *_pageContentViewProvider;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    SBAppSwitcherSettings *_settings;
    UIApplicationSceneDeactivationAssertion *_transitionBeginResignActiveAssertion;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSString *_fluidSwitcherAssertionReason;
    NSString *_tapticEngineEmptySwitcherReason;
    NSString *_tapticEngineForcePressPreviewReason;
    NSString *_tapticEngineForcePressCommitReason;
    SBWorkspaceApplicationSceneTransitionContext *_pendingTransitionContext;
    UINotificationFeedbackGenerator *_emptySwitcherFeedbackGenerator;
    UINotificationFeedbackGenerator *_flyInFeedbackGenerator;
    UINotificationFeedbackGenerator *_reduceMotionFeedbackGenerator;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    UIView *_crossfadeSnapshotView;
    UIView *_hitTestBlockerView;
    _Bool _currentWallpaperRequiredForSwitcher;
    long long _currentWallpaperStyle;
    _Bool _currentHomeScreenContentRequired;
    long long _currentHomeScreenBackdropBlurType;
    long long _currentSwitcherBackdropBlurType;
    long long _currentKeyboardSuppressionMode;
    SBFluidSwitcherModifierTimelineController *_modifierTimelineController;
    NSArray *_cachedAdjustedAppLayouts;
    unsigned long long _appLayoutsGenerationCount;
    CDUnknownBlockType _activeTransitionSubcompletionGenerator;
    NSString *_debugName;
    _Bool _isShowingModifierTimeline;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    NSPointerArray *_outstandingAnimations;
    UIPanGestureRecognizer *_borrowableScrollViewPanGestureRecognizer;
    SBFluidSwitcherContentView *_stashedContentView;
    SBHomeScreenBackdropViewBase *_backdropView;
    SBSwitcherAccessoryLayoutElement *_backdropLayoutElement;
    UIView *_dimmingView;
    SBSwitcherAccessoryLayoutElement *_dimmingViewLayoutElement;
    SBSwitcherAccessoryLayoutElement *_genericAccessoryLayoutElement;
    _Bool _liveContentRasterizationDisabled;
    id <SBSwitcherContentViewControllerDelegate> _delegate;
    id <SBSwitcherContentViewControllerDataSource> _dataSource;
    SBBestAppSuggestion *_bestAppSuggestion;
    long long _contentOrientation;
    SBAppSwitcherScrollView *_scrollView;
    SBFluidSwitcherContentView *_contentView;
    SBFluidSwitcherLayoutContext *_layoutContext;
    NSMutableDictionary *_visibleItemContainers;
    NSMutableArray *_hiddenRecycledItemContainers;
    SBFluidSwitcherButton *_plusButton;
    SBFluidSwitcherTitledButton *_reopenClosedWindowsButton;
    SBSwitcherModifier *_rootModifier;
    SBSwitcherModifier *_reduceMotionModifier;
    NSMutableDictionary *_hiddenIconViews;
    unsigned long long _traceType;
    SBFloatingDockBehaviorAssertion *_inAppFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_transientOverlayFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_switcherFloatingDockBehaviorAssertion;
    SBFloatingDockWindowLevelAssertion *_switcherFloatingDockWindowLevelAssertion;
    SBFloatingDockWindowLevelAssertion *_transientOverlayFloatingDockWindowLevelAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    SBViewMorphAnimator *_pipViewMorphAnimator;
    UILabel *_modifierStackDebugLabel;
    id <BSInvalidatable> _wallpaperRequireAssertion;
}


// Remaining properties
@property(readonly, nonatomic) NSArray *appLayouts;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // @synthesize bestAppSuggestion=_bestAppSuggestion;
@property(readonly, nonatomic) _Bool canInterruptActiveTransition;
@property(nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
@property(retain, nonatomic) SBFluidSwitcherContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBFHomeGrabberSettings *grabberSettings; // @synthesize grabberSettings=_grabberSettings;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *hiddenIconViews; // @synthesize hiddenIconViews=_hiddenIconViews;
@property(retain, nonatomic) NSMutableArray *hiddenRecycledItemContainers; // @synthesize hiddenRecycledItemContainers=_hiddenRecycledItemContainers;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *inAppFloatingDockBehaviorAssertion; // @synthesize inAppFloatingDockBehaviorAssertion=_inAppFloatingDockBehaviorAssertion;
@property(retain, nonatomic) SBFluidSwitcherLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(nonatomic, getter=isLiveContentRasterizationDisabled) _Bool liveContentRasterizationDisabled; // @synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled;
@property(retain, nonatomic) UILabel *modifierStackDebugLabel; // @synthesize modifierStackDebugLabel=_modifierStackDebugLabel;
@property(nonatomic) __weak SBViewMorphAnimator *pipViewMorphAnimator; // @synthesize pipViewMorphAnimator=_pipViewMorphAnimator;
@property(retain, nonatomic) SBFluidSwitcherButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) SBSwitcherModifier *reduceMotionModifier; // @synthesize reduceMotionModifier=_reduceMotionModifier;
@property(retain, nonatomic) SBFluidSwitcherTitledButton *reopenClosedWindowsButton; // @synthesize reopenClosedWindowsButton=_reopenClosedWindowsButton;
@property(retain, nonatomic) SBSwitcherModifier *rootModifier; // @synthesize rootModifier=_rootModifier;
@property(retain, nonatomic) SBAppSwitcherScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic, getter=isShowingModifierTimeline) _Bool showModifierTimeline;
@property(readonly) Class superclass;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *switcherFloatingDockBehaviorAssertion; // @synthesize switcherFloatingDockBehaviorAssertion=_switcherFloatingDockBehaviorAssertion;
@property(retain, nonatomic) SBFloatingDockWindowLevelAssertion *switcherFloatingDockWindowLevelAssertion; // @synthesize switcherFloatingDockWindowLevelAssertion=_switcherFloatingDockWindowLevelAssertion;
@property(nonatomic) unsigned long long traceType; // @synthesize traceType=_traceType;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *transientOverlayFloatingDockBehaviorAssertion; // @synthesize transientOverlayFloatingDockBehaviorAssertion=_transientOverlayFloatingDockBehaviorAssertion;
@property(retain, nonatomic) SBFloatingDockWindowLevelAssertion *transientOverlayFloatingDockWindowLevelAssertion; // @synthesize transientOverlayFloatingDockWindowLevelAssertion=_transientOverlayFloatingDockWindowLevelAssertion;
@property(retain, nonatomic) NSMutableDictionary *visibleItemContainers; // @synthesize visibleItemContainers=_visibleItemContainers;
@property(retain, nonatomic) id <BSInvalidatable> wallpaperRequireAssertion; // @synthesize wallpaperRequireAssertion=_wallpaperRequireAssertion;
@end
