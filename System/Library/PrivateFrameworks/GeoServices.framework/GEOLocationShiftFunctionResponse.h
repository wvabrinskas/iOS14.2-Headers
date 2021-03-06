/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	GEOCoarseLocationLatLng _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;
	unsigned _version;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) unsigned version;                                        //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)radius;
-(unsigned)version;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValidForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(GEOCoarseLocationLatLng)shiftedCoordinateForCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOCoarseLocationLatLng)originalCoordinate;
-(id)contractFunctionTo:(id)arg1 withRadius:(double)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(GEOCoarseLocationLatLng)arg2 version:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

