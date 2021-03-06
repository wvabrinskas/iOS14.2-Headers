/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueLevel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDVenueLabel* _label;
	unsigned long long _levelId;
	int _ordinal;
	struct {
		unsigned has_levelId : 1;
		unsigned has_ordinal : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId; 
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) int ordinal; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDVenueLabel *)label;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)levelId;
-(int)ordinal;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(PBUnknownFields *)unknownFields;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setOrdinal:(int)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLevelId;
-(BOOL)hasOrdinal;
-(void)readAll:(BOOL)arg1 ;
@end

