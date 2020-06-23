//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifierEvent.h>

@class NSArray, NSMutableDictionary, NSString, SBAppLayout, SBBannerUnfurlSourceContext;

@interface SBMainTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent
{
    NSMutableDictionary *_appLayoutToRemovalContext;
    _Bool _fromAppLayoutWantsExclusiveForeground;
    _Bool _toAppLayoutWantsExclusiveForeground;
    _Bool _fromFloatingSwitcherVisible;
    _Bool _toFloatingSwitcherVisible;
    _Bool _prefersCrossfadeTransition;
    _Bool _gestureInitiated;
    _Bool _dragAndDropTransition;
    _Bool _breadcrumbTransition;
    _Bool _inlineAppExposeTransition;
    _Bool _morphToPiPTransition;
    _Bool _morphFromPiPTransition;
    _Bool _continuityTransition;
    _Bool _bannerUnfurlTransition;
    _Bool _iconZoomDisabled;
    _Bool _spotlightTransition;
    SBAppLayout *_fromFloatingAppLayout;
    long long _fromFloatingConfiguration;
    SBAppLayout *_toFloatingAppLayout;
    long long _toFloatingConfiguration;
    NSString *_fromAppExposeBundleID;
    NSString *_toAppExposeBundleID;
    unsigned long long _fromInlineAppExposeRoles;
    unsigned long long _toInlineAppExposeRoles;
    SBBannerUnfurlSourceContext *_bannerUnfurlSourceContext;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSArray *appLayoutsWithRemovalContexts;
@property(copy, nonatomic) SBBannerUnfurlSourceContext *bannerUnfurlSourceContext; // @synthesize bannerUnfurlSourceContext=_bannerUnfurlSourceContext;
@property(nonatomic, getter=isBannerUnfurlTransition) _Bool bannerUnfurlTransition; // @synthesize bannerUnfurlTransition=_bannerUnfurlTransition;
@property(nonatomic, getter=isBreadcrumbTransition) _Bool breadcrumbTransition; // @synthesize breadcrumbTransition=_breadcrumbTransition;
@property(nonatomic, getter=isContinuityTransition) _Bool continuityTransition; // @synthesize continuityTransition=_continuityTransition;
@property(nonatomic, getter=isDragAndDropTransition) _Bool dragAndDropTransition; // @synthesize dragAndDropTransition=_dragAndDropTransition;
@property(copy, nonatomic) NSString *fromAppExposeBundleID; // @synthesize fromAppExposeBundleID=_fromAppExposeBundleID;
@property(nonatomic) _Bool fromAppLayoutWantsExclusiveForeground; // @synthesize fromAppLayoutWantsExclusiveForeground=_fromAppLayoutWantsExclusiveForeground;
@property(retain, nonatomic) SBAppLayout *fromFloatingAppLayout; // @synthesize fromFloatingAppLayout=_fromFloatingAppLayout;
@property(nonatomic) long long fromFloatingConfiguration; // @synthesize fromFloatingConfiguration=_fromFloatingConfiguration;
@property(nonatomic) _Bool fromFloatingSwitcherVisible; // @synthesize fromFloatingSwitcherVisible=_fromFloatingSwitcherVisible;
@property(nonatomic) unsigned long long fromInlineAppExposeRoles; // @synthesize fromInlineAppExposeRoles=_fromInlineAppExposeRoles;
@property(nonatomic, getter=isGestureInitiated) _Bool gestureInitiated; // @synthesize gestureInitiated=_gestureInitiated;
@property(nonatomic, getter=isIconZoomDisabled) _Bool iconZoomDisabled; // @synthesize iconZoomDisabled=_iconZoomDisabled;
@property(nonatomic, getter=isInlineAppExposeTransition) _Bool inlineAppExposeTransition; // @synthesize inlineAppExposeTransition=_inlineAppExposeTransition;
@property(nonatomic, getter=isMorphFromPiPTransition) _Bool morphFromPiPTransition; // @synthesize morphFromPiPTransition=_morphFromPiPTransition;
@property(nonatomic, getter=isMorphToPiPTransition) _Bool morphToPiPTransition; // @synthesize morphToPiPTransition=_morphToPiPTransition;
@property(nonatomic) _Bool prefersCrossfadeTransition; // @synthesize prefersCrossfadeTransition=_prefersCrossfadeTransition;
@property(nonatomic, getter=isSpotlightTransition) _Bool spotlightTransition; // @synthesize spotlightTransition=_spotlightTransition;
@property(copy, nonatomic) NSString *toAppExposeBundleID; // @synthesize toAppExposeBundleID=_toAppExposeBundleID;
@property(nonatomic) _Bool toAppLayoutWantsExclusiveForeground; // @synthesize toAppLayoutWantsExclusiveForeground=_toAppLayoutWantsExclusiveForeground;
@property(retain, nonatomic) SBAppLayout *toFloatingAppLayout; // @synthesize toFloatingAppLayout=_toFloatingAppLayout;
@property(nonatomic) long long toFloatingConfiguration; // @synthesize toFloatingConfiguration=_toFloatingConfiguration;
@property(nonatomic) _Bool toFloatingSwitcherVisible; // @synthesize toFloatingSwitcherVisible=_toFloatingSwitcherVisible;
@property(nonatomic) unsigned long long toInlineAppExposeRoles; // @synthesize toInlineAppExposeRoles=_toInlineAppExposeRoles;
@end
