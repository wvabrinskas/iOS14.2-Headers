/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOTileCoordinate;

@interface GEOVLDataTile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _buildIndexs;
	SCD_Struct_GE17* _precisionIndexs;
	GEOTileCoordinate* _coord;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_buildIndexs : 1;
		unsigned read_precisionIndexs : 1;
		unsigned read_coord : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCoord; 
@property (nonatomic,retain) GEOTileCoordinate * coord; 
@property (nonatomic,readonly) unsigned long long buildIndexsCount; 
@property (nonatomic,readonly) unsigned* buildIndexs; 
@property (nonatomic,readonly) unsigned long long precisionIndexsCount; 
@property (nonatomic,readonly) unsigned* precisionIndexs; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOTileCoordinate *)coord;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCoord;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addBuildIndex:(unsigned)arg1 ;
-(unsigned*)precisionIndexs;
-(void)addPrecisionIndex:(unsigned)arg1 ;
-(unsigned long long)buildIndexsCount;
-(void)clearBuildIndexs;
-(unsigned)buildIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)precisionIndexsCount;
-(void)clearPrecisionIndexs;
-(unsigned*)buildIndexs;
-(unsigned)precisionIndexAtIndex:(unsigned long long)arg1 ;
-(void)setBuildIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setPrecisionIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 ;
-(void)setCoord:(GEOTileCoordinate *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
@end

