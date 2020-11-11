/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOURLCamera : PBCodable <NSCopying> {

	double _altitude;
	double _heading;
	double _latitude;
	double _longitude;
	double _pitch;
	struct {
		unsigned has_altitude : 1;
		unsigned has_heading : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_pitch : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasHeading; 
@property (assign,nonatomic) double heading; 
@property (assign,nonatomic) BOOL hasPitch; 
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLatitude;
-(double)altitude;
-(double)latitude;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(double)heading;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(id)dictionaryRepresentation;
-(void)setAltitude:(double)arg1 ;
-(void)setPitch:(double)arg1 ;
-(void)setHeading:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasHeading;
-(void)setHasHeading:(BOOL)arg1 ;
-(double)longitude;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLongitude;
-(void)copyTo:(id)arg1 ;
-(void)setHasPitch:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasPitch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(double)pitch;
@end
