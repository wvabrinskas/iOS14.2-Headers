/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocationOfInterest, NSDate, NSArray, RTSource;

@interface RTPredictedLocationOfInterest : NSObject <NSSecureCoding> {

	RTLocationOfInterest* _locationOfInterest;
	double _confidence;
	NSDate* _nextEntryTime;
	long long _modeOfTransportation;
	NSArray* _sources;

}

@property (assign,nonatomic) long long modeOfTransportation;                           //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (nonatomic,readonly) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * nextEntryTime;                                 //@synthesize nextEntryTime=_nextEntryTime - In the implementation block
@property (nonatomic,readonly) RTSource * source; 
@property (nonatomic,readonly) NSArray * sources;                                      //@synthesize sources=_sources - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)sources;
-(unsigned long long)hash;
-(RTLocationOfInterest *)locationOfInterest;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(RTSource *)source;
-(double)confidence;
-(NSDate *)nextEntryTime;
-(long long)modeOfTransportation;
-(void)setModeOfTransportation:(long long)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 confidence:(double)arg2 nextEntryTime:(id)arg3 modeOfTransportation:(long long)arg4 sources:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
@end

