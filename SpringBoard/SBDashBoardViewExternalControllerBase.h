//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/CSExternalAppearanceProviding-Protocol.h>
#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>
#import <SpringBoard/CSExternalEventHandling-Protocol.h>
#import <SpringBoard/CSExternalPresentationProviding-Protocol.h>

@class NSArray, NSSet, NSString, UIColor, _UILegibilitySettings;
@protocol UICoordinateSpace;

@interface SBDashBoardViewExternalControllerBase : CSCoverSheetViewControllerBase <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalEventHandling>
{
    _Bool _externalToDashBoard;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isExternalToDashBoard) _Bool externalToDashBoard; // @synthesize externalToDashBoard=_externalToDashBoard;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly) Class superclass;
@end
