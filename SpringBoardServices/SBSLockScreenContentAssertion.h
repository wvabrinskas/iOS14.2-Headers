//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBSLockScreenContentAction;

@interface SBSLockScreenContentAssertion : NSObject
{
    NSString *_slot;
    NSString *_identifier;
    id _configurationObject;
    SBSLockScreenContentAction *_action;
    CDUnknownBlockType _errorHandler;
}


// Remaining properties
@property(retain, nonatomic) SBSLockScreenContentAction *action; // @synthesize action=_action;
@property(retain, nonatomic) id configurationObject; // @synthesize configurationObject=_configurationObject;
@property(copy, nonatomic, getter=_errorHandler, setter=_setErrorHandler:) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *slot; // @synthesize slot=_slot;
@end
