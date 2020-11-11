/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOMapRegion, GEOPDPoiIconCategoryFilter;

@interface GEOPDSpatialPlaceLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _categoryFilters;
	SCD_Struct_GE17* _excludeIconCategoryFilters;
	SCD_Struct_GE17* _includeIconCategoryFilters;
	GEOLatLng* _center;
	GEOMapRegion* _mapRegion;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _count;
	int _radius;
	struct {
		unsigned has_count : 1;
		unsigned has_radius : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categoryFilters : 1;
		unsigned read_excludeIconCategoryFilters : 1;
		unsigned read_includeIconCategoryFilters : 1;
		unsigned read_center : 1;
		unsigned read_mapRegion : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) int radius; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) int count; 
@property (nonatomic,readonly) unsigned long long categoryFiltersCount; 
@property (nonatomic,readonly) int* categoryFilters; 
@property (nonatomic,readonly) unsigned long long includeIconCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* includeIconCategoryFilters; 
@property (nonatomic,readonly) unsigned long long excludeIconCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* excludeIconCategoryFilters; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setRadius:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCount:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(BOOL)hasCount;
-(id)init;
-(int)radius;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(BOOL)hasPoiIconCategoryFilter;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)count;
-(BOOL)readFrom:(id)arg1 ;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasCenter;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(BOOL)hasMapRegion;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasRadius;
-(void)writeTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(void)dealloc;
-(void)addCategoryFilter:(int)arg1 ;
-(unsigned long long)categoryFiltersCount;
-(void)clearCategoryFilters;
-(int)categoryFilterAtIndex:(unsigned long long)arg1 ;
-(int*)categoryFilters;
-(void)setCategoryFilters:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categoryFiltersAsString:(int)arg1 ;
-(int)StringAsCategoryFilters:(id)arg1 ;
-(void)addIncludeIconCategoryFilter:(unsigned)arg1 ;
-(void)addExcludeIconCategoryFilter:(unsigned)arg1 ;
-(unsigned*)excludeIconCategoryFilters;
-(unsigned long long)includeIconCategoryFiltersCount;
-(void)clearIncludeIconCategoryFilters;
-(unsigned*)includeIconCategoryFilters;
-(unsigned)includeIconCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)excludeIconCategoryFiltersCount;
-(void)clearExcludeIconCategoryFilters;
-(unsigned)excludeIconCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(void)setIncludeIconCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setExcludeIconCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end
