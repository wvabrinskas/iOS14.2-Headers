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

@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEOWiFiQualityLocationSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _ess;
	GEOLocation* _location;
	unsigned long long _tileKey;
	NSMutableArray* _tiles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_tileKey : 1;
		unsigned has_status : 1;
		unsigned read_ess : 1;
		unsigned read_location : 1;
		unsigned read_tiles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasTileKey; 
@property (assign,nonatomic) unsigned long long tileKey; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * ess; 
@property (nonatomic,retain) NSMutableArray * tiles; 
+(Class)essType;
+(Class)tileType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearEss;
-(BOOL)hasStatus;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setHasStatus:(BOOL)arg1 ;
-(NSMutableArray *)tiles;
-(int)status;
-(NSMutableArray *)ess;
-(GEOLocation *)location;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasLocation;
-(void)setStatus:(int)arg1 ;
-(void)setEss:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)addTile:(id)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(void)addEss:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(void)setTileKey:(unsigned long long)arg1 ;
-(void)setHasTileKey:(BOOL)arg1 ;
-(unsigned long long)essCount;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTiles:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)tileKey;
-(unsigned long long)tilesCount;
-(void)clearTiles;
-(id)tileAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasTileKey;
@end

