//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBGestureRecognizerPanGestureProviding-Protocol.h>
#import <SpringBoard/SBGestureRecognizerTouchHistoryProviding-Protocol.h>

@class NSString, SBFluidSwitcherGestureExclusionTrapezoid, SBHomeGestureSettings, SBTouchHistory, UIView;
@protocol SBHomeGesturePanGestureRecognizerInterfaceDelegate;

@interface SBHomeGesturePanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>
{
    _Bool _preventHorizontalSwipesOutsideTrapezoid;
    _Bool _installedAsSystemGesture;
    id <SBHomeGesturePanGestureRecognizerInterfaceDelegate> _interfaceDelegate;
    SBHomeGestureSettings *_homeGestureSettings;
    SBFluidSwitcherGestureExclusionTrapezoid *_portraitExclusionTrapezoid;
    SBFluidSwitcherGestureExclusionTrapezoid *_landscapeExclusionTrapezoid;
    SBTouchHistory *_touchHistory;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(nonatomic) _Bool installedAsSystemGesture; // @synthesize installedAsSystemGesture=_installedAsSystemGesture;
@property(nonatomic) __weak id <SBHomeGesturePanGestureRecognizerInterfaceDelegate> interfaceDelegate; // @synthesize interfaceDelegate=_interfaceDelegate;
@property(retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *landscapeExclusionTrapezoid; // @synthesize landscapeExclusionTrapezoid=_landscapeExclusionTrapezoid;
@property(retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *portraitExclusionTrapezoid; // @synthesize portraitExclusionTrapezoid=_portraitExclusionTrapezoid;
@property(nonatomic) _Bool preventHorizontalSwipesOutsideTrapezoid; // @synthesize preventHorizontalSwipesOutsideTrapezoid=_preventHorizontalSwipesOutsideTrapezoid;
@property(readonly) Class superclass;
@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@property(readonly, nonatomic) __weak UIView *viewForTouchHistory;
@end
