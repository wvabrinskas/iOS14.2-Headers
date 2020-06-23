//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBProximitySensorManager;

@protocol SBProximitySensorManagerObserver <NSObject>

@optional
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 proximityDetectionPermittedDidChange:(_Bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 proximityDetectionEnabledDidChange:(_Bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 objectWithinProximityDidChange:(_Bool)arg2;
@end
