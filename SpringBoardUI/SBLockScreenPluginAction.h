//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject
{
    BSAction *_action;
    NSString *_label;
    long long _authenticationPolicy;
    CDUnknownBlockType _completion;
}


// Remaining properties
@property(nonatomic) long long authenticationPolicy; // @synthesize authenticationPolicy=_authenticationPolicy;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@end
