//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, UIViewController;
@protocol SBHUDViewControlling;

@protocol SBHUDControlling <NSObject>
@property(readonly, nonatomic) _Bool isVisible;
@property(readonly, nonatomic) _Bool isDismissed;
@property(readonly, nonatomic) _Bool isDismissing;
@property(readonly, nonatomic) _Bool isPresenting;
@property(readonly, nonatomic) _Bool isPresented;
@property(readonly, nonatomic, getter=isDismissalScheduled) _Bool dismissalScheduled;
@property(readonly, nonatomic) UIViewController<SBHUDViewControlling> *HUDViewController;
@property(readonly, nonatomic) NSString *identifier;
- (void)rescheduleDismissalTimer;
- (void)scheduleDismissalTimer;
- (void)invalidateDismissalTimer;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)presentWithDismissalInterval:(double)arg1 animated:(_Bool)arg2;
- (void)presentWithDismissalInterval:(double)arg1;
@end
