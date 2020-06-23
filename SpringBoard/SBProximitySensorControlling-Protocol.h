//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBHIDUILockAssertion;

@protocol SBProximitySensorControlling <NSObject>
@property(nonatomic) _Bool pocketTouchesExpected;
@property(nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
- (SBHIDUILockAssertion *)suspendMultitouchForSource:(long long)arg1 reason:(NSString *)arg2;
- (SBHIDUILockAssertion *)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 disableTapToWake:(_Bool)arg2 reason:(NSString *)arg3;
- (SBHIDUILockAssertion *)suspendProximityDetectionForSource:(long long)arg1 reason:(NSString *)arg2;
- (void)resetProximityCalibration;
@end
