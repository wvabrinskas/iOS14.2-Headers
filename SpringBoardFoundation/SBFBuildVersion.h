//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBFBuildVersion : NSObject
{
    NSString *_stringRepresentation;
    long long _majorBuildNumber;
    NSString *_majorBuildLetterString;
    long long _minorBuildNumber;
    NSString *_minorBuildLetterString;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSString *majorBuildLetterString; // @synthesize majorBuildLetterString=_majorBuildLetterString;
@property(readonly, nonatomic) long long majorBuildNumber; // @synthesize majorBuildNumber=_majorBuildNumber;
@property(readonly, copy, nonatomic) NSString *minorBuildLetterString; // @synthesize minorBuildLetterString=_minorBuildLetterString;
@property(readonly, nonatomic) long long minorBuildNumber; // @synthesize minorBuildNumber=_minorBuildNumber;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
@end
