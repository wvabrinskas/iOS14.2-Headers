//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHCenterZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings
{
    double _appHeadStart;
    SBFAnimationSettings *_appZoomSettings;
    SBFAnimationSettings *_appFadeSettings;
}


// Remaining properties
@property(retain, nonatomic) SBFAnimationSettings *appFadeSettings; // @synthesize appFadeSettings=_appFadeSettings;
@property(nonatomic) double appHeadStart; // @synthesize appHeadStart=_appHeadStart;
@property(retain, nonatomic) SBFAnimationSettings *appZoomSettings; // @synthesize appZoomSettings=_appZoomSettings;
@end
