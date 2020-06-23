//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAuthenticationFeedback, SBLockScreenUnlockRequest;
@protocol SBBiometricUnlockBehavior;

@protocol SBBiometricUnlockBehaviorDelegate <NSObject>
- (_Bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsUnlock:(SBLockScreenUnlockRequest *)arg2 withFeedback:(SBAuthenticationFeedback *)arg3;
- (_Bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsFeedback:(SBAuthenticationFeedback *)arg2;
@end
