//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, SBModalAlertPresentationCoordinator;

@protocol SBModalAlertPresentationCoordinatorDelegate <NSObject>
- (void)modalAlertPresentationCoordinator:(SBModalAlertPresentationCoordinator *)arg1 didChangeShowingSystemModalAlert:(_Bool)arg2;
- (NSSet *)modalAlertPresentationCoordinatorRequestedForegroundScenes:(SBModalAlertPresentationCoordinator *)arg1;
@end
