/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FlightUtilitiesCore/FlightUtilitiesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone, CLPlacemark;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding> {

	NSString* _IATACode;
	NSString* _name;
	NSString* _city;
	NSTimeZone* _timeZone;
	CLPlacemark* _placemark;
	CLLocationCoordinate2D _location;

}

@property (retain) NSString * IATACode;                          //@synthesize IATACode=_IATACode - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * city;                              //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign) CLLocationCoordinate2D location;              //@synthesize location=_location - In the implementation block
@property (retain) CLPlacemark * placemark;                      //@synthesize placemark=_placemark - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)city;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(CLLocationCoordinate2D)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(CLPlacemark *)placemark;
-(void)setLocation:(CLLocationCoordinate2D)arg1 ;
-(NSString *)name;
-(id)description;
-(NSTimeZone *)timeZone;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)IATACode;
-(void)setIATACode:(NSString *)arg1 ;
-(void)fetchPlacemarkWithCompletionHandler:(/*^block*/id)arg1 ;
@end
