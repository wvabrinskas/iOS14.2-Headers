//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface SBSRemoteAlertHandleContext : NSObject <NSSecureCoding>
{
    _Bool _active;
    NSString *_handleID;
}


// Remaining properties
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
@end
