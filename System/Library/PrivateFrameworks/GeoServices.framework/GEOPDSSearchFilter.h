/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDSBrandFilter, GEOPDSCategoryFilter, GEOPDPoiIconCategoryFilter, GEOPDSSearchVenueFilter;

@interface GEOPDSSearchFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDSBrandFilter* _brandFilter;
	GEOPDSCategoryFilter* _categoryFilter;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	GEOPDSSearchVenueFilter* _venueFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _searchIntentFilter;
	struct {
		unsigned has_searchIntentFilter : 1;
		unsigned read_unknownFields : 1;
		unsigned read_brandFilter : 1;
		unsigned read_categoryFilter : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned read_venueFilter : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDSSearchVenueFilter * venueFilter; 
@property (nonatomic,readonly) BOOL hasCategoryFilter; 
@property (nonatomic,retain) GEOPDSCategoryFilter * categoryFilter; 
@property (nonatomic,readonly) BOOL hasBrandFilter; 
@property (nonatomic,retain) GEOPDSBrandFilter * brandFilter; 
@property (assign,nonatomic) BOOL hasSearchIntentFilter; 
@property (assign,nonatomic) int searchIntentFilter; 
@property (nonatomic,readonly) BOOL hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(BOOL)hasPoiIconCategoryFilter;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDSSearchVenueFilter *)venueFilter;
-(void)setVenueFilter:(GEOPDSSearchVenueFilter *)arg1 ;
-(BOOL)hasVenueFilter;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDSCategoryFilter *)categoryFilter;
-(GEOPDSBrandFilter *)brandFilter;
-(void)setCategoryFilter:(GEOPDSCategoryFilter *)arg1 ;
-(void)setBrandFilter:(GEOPDSBrandFilter *)arg1 ;
-(void)setSearchIntentFilter:(int)arg1 ;
-(BOOL)hasCategoryFilter;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasBrandFilter;
-(int)searchIntentFilter;
-(void)setHasSearchIntentFilter:(BOOL)arg1 ;
-(BOOL)hasSearchIntentFilter;
-(id)searchIntentFilterAsString:(int)arg1 ;
-(int)StringAsSearchIntentFilter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
