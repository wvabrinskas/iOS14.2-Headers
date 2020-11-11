/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TAInterVisitMetricPerDeviceSettings : NSObject <NSSecureCoding> {

	double _sampledObservationLocationsInterval;
	unsigned long long _sampledObservationLocationsBufferSize;

}

@property (assign,nonatomic) double sampledObservationLocationsInterval;                            //@synthesize sampledObservationLocationsInterval=_sampledObservationLocationsInterval - In the implementation block
@property (assign,nonatomic) unsigned long long sampledObservationLocationsBufferSize;              //@synthesize sampledObservationLocationsBufferSize=_sampledObservationLocationsBufferSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSampledObservationLocationsInterval:(double)arg1 sampledObservationLocationsBufferSize:(unsigned long long)arg2 ;
-(double)sampledObservationLocationsInterval;
-(unsigned long long)sampledObservationLocationsBufferSize;
-(void)setSampledObservationLocationsInterval:(double)arg1 ;
-(void)setSampledObservationLocationsBufferSize:(unsigned long long)arg1 ;
@end
