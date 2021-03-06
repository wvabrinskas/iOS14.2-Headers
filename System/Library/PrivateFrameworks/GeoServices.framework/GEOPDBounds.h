/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion;

@interface GEOPDBounds : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	GEOMapRegion* _mapRegion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _maxZoom;
	float _minZoom;
	struct {
		unsigned has_maxZoom : 1;
		unsigned has_minZoom : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_mapRegion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) float minZoom; 
@property (assign,nonatomic) BOOL hasMaxZoom; 
@property (assign,nonatomic) float maxZoom; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)boundsInfoForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMaxZoom:(float)arg1 ;
-(void)setMinZoom:(float)arg1 ;
-(id)init;
-(BOOL)hasMinZoom;
-(GEOMapRegion *)displayMapRegion;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setHasMaxZoom:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasMaxZoom;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(GEOMapRegion *)mapRegion;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(float)minZoom;
-(void)copyTo:(id)arg1 ;
-(float)maxZoom;
-(PBUnknownFields *)unknownFields;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

