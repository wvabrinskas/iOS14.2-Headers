//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBApplicationSceneViewController.h>

#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProviderDelegate-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBSceneViewDelegate-Protocol.h>
#import <SpringBoard/SBSceneViewStatusBarAssertionObserver-Protocol.h>

@class MTLumaDodgePillSettings, NSHashTable, NSMutableArray, NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneView, SBFHomeGrabberSettings, SBHomeGrabberView, SBSceneViewStatusBarAssertion, UIApplicationSceneDeactivationAssertion, UIStatusBar, UIView;
@protocol BSInvalidatable, SBApplicationSceneBackgroundView, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneHandleObserver, SBSceneViewDelegate, SBSceneViewStatusBarAssertionObserver, SBDeviceApplicationSceneViewControlling>
{
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSMutableArray *_overlayViewProviders;
    NSMutableArray *_activeOverlayViewProviders;
    SBSceneViewStatusBarAssertion *_activeOverlayStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_placeholderStatusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    id <BSInvalidatable> _liveContentDisableAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    _Bool _rendersWhileLocked;
    _Bool _shouldRasterizeSceneHostView;
    long long _homeGrabberDisplayMode;
    NSHashTable *_statusBarAssertions;
    NSString *_sceneHostViewMinificationFilter;
    MTLumaDodgePillSettings *_homeGrabberPillSettings;
}


// Remaining properties
@property(nonatomic) __weak id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property(retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long homeGrabberDisplayMode; // @synthesize homeGrabberDisplayMode=_homeGrabberDisplayMode;
@property(retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings; // @synthesize homeGrabberPillSettings=_homeGrabberPillSettings;
@property(readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property(readonly, nonatomic) long long overrideStatusBarStyle;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(nonatomic) _Bool rendersWhileLocked; // @synthesize rendersWhileLocked=_rendersWhileLocked;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property(copy, nonatomic) NSString *sceneHostViewMinificationFilter; // @synthesize sceneHostViewMinificationFilter=_sceneHostViewMinificationFilter;
@property(readonly, nonatomic, getter=_sceneView) SBDeviceApplicationSceneView *sceneView; // @dynamic sceneView;
@property(nonatomic) _Bool shouldRasterizeSceneHostView; // @synthesize shouldRasterizeSceneHostView=_shouldRasterizeSceneHostView;
@property(readonly, nonatomic) double statusBarAlpha;
@property(retain, nonatomic, getter=_statusBarAssertions, setter=_setStatusBarAssertions:) NSHashTable *statusBarAssertions; // @synthesize statusBarAssertions=_statusBarAssertions;
@property(readonly) Class superclass;
@end
