//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class NSString, SBDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, UIView;

@interface SBInlineAppExposeLiveContentOverlayView : NSObject <SBSwitcherLiveContentOverlay>
{
    _Bool _transitioning;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
}


// Remaining properties
@property(readonly, nonatomic) UIView *contentOverlayView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBDeviceApplicationSceneViewController *deviceApplicationSceneViewController; // @synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBSceneViewStatusBarAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@end
