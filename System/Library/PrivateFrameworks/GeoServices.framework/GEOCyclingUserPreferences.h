/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOCyclingUserPreferences : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _avoidBusyRoads;
	BOOL _avoidHills;
	BOOL _avoidStairs;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasAvoidStairs; 
@property (assign,nonatomic) BOOL avoidStairs; 
@property (assign,nonatomic) BOOL hasAvoidHills; 
@property (assign,nonatomic) BOOL avoidHills; 
@property (assign,nonatomic) BOOL hasAvoidBusyRoads; 
@property (assign,nonatomic) BOOL avoidBusyRoads; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setAvoidStairs:(BOOL)arg1 ;
-(BOOL)hasAvoidHills;
-(void)setAvoidBusyRoads:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAvoidStairs;
-(void)setHasAvoidStairs:(BOOL)arg1 ;
-(BOOL)avoidHills;
-(BOOL)hasAvoidBusyRoads;
-(void)setHasAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)avoidStairs;
-(void)setHasAvoidHills:(BOOL)arg1 ;
-(void)setAvoidHills:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)avoidBusyRoads;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
