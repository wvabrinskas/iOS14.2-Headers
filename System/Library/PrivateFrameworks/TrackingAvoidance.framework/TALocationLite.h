/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TALocationLite : NSObject <TAEventProtocol> {

	BOOL _isSimulatedOrSpoofed;
	NSDate* _timestamp;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	double _altitude;
	double _verticalAccuracy;
	double _speed;
	double _speedAccuracy;
	double _course;
	double _courseAccuracy;
	double _deltaDistance;
	double _deltaDistanceAccuracy;
	double _groundAltitude;
	double _groundAltitudeUncertainty;
	double _pressure;
	double _pressureUncertainty;

}

@property (nonatomic,copy,readonly) NSDate * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                     //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) double altitude;                               //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double verticalAccuracy;                       //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,readonly) double speed;                                  //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double speedAccuracy;                          //@synthesize speedAccuracy=_speedAccuracy - In the implementation block
@property (nonatomic,readonly) double course;                                 //@synthesize course=_course - In the implementation block
@property (nonatomic,readonly) double courseAccuracy;                         //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
@property (nonatomic,readonly) double deltaDistance;                          //@synthesize deltaDistance=_deltaDistance - In the implementation block
@property (nonatomic,readonly) double deltaDistanceAccuracy;                  //@synthesize deltaDistanceAccuracy=_deltaDistanceAccuracy - In the implementation block
@property (nonatomic,readonly) double groundAltitude;                         //@synthesize groundAltitude=_groundAltitude - In the implementation block
@property (nonatomic,readonly) double groundAltitudeUncertainty;              //@synthesize groundAltitudeUncertainty=_groundAltitudeUncertainty - In the implementation block
@property (nonatomic,readonly) double pressure;                               //@synthesize pressure=_pressure - In the implementation block
@property (nonatomic,readonly) double pressureUncertainty;                    //@synthesize pressureUncertainty=_pressureUncertainty - In the implementation block
@property (nonatomic,readonly) BOOL isSimulatedOrSpoofed;                     //@synthesize isSimulatedOrSpoofed=_isSimulatedOrSpoofed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)residualDistanceFromLocation:(id)arg1 toLocation:(id)arg2 nSigma:(unsigned long long)arg3 ;
+(SCD_Struct_TA2)estimateSpeedFrom:(id)arg1 to:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(BOOL)distanceFromLocation:(id)arg1 toLocation:(id)arg2 satisfyNSigma:(unsigned long long)arg3 satisfyMinDistance:(double)arg4 ;
-(double)course;
-(double)speed;
-(id)getDate;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(double)altitude;
-(double)latitude;
-(double)pressure;
-(unsigned long long)hash;
-(id)descriptionDictionary;
-(BOOL)distanceToLocation:(id)arg1 satisfyNSigma:(unsigned long long)arg2 satisfyMinDistance:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)horizontalAccuracy;
-(double)deltaDistance;
-(double)longitude;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 ;
-(NSString *)description;
-(double)verticalAccuracy;
-(BOOL)isSimulatedOrSpoofed;
-(double)pressureUncertainty;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)groundAltitudeUncertainty;
-(double)speedAccuracy;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 deltaDistance:(double)arg11 deltaDistanceAccuracy:(double)arg12 groundAltitude:(double)arg13 groundAltitudeUncertainty:(double)arg14 pressure:(double)arg15 pressureUncertainty:(double)arg16 isSimulatedOrSpoofed:(BOOL)arg17 ;
-(NSDate *)timestamp;
-(double)groundAltitude;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)distanceFromLocation:(id)arg1 ;
-(double)courseAccuracy;
-(double)deltaDistanceAccuracy;
@end
