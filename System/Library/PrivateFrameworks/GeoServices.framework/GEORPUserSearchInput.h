/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDAutocompleteEntry, GEOLatLng, GEOPDPlace, NSString;

@interface GEORPUserSearchInput : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOLatLng* _coordinate;
	GEOPDPlace* _place;
	NSString* _searchString;
	NSString* _singleLineAddressString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _origin;
	struct {
		unsigned has_origin : 1;
		unsigned read_autocompleteEntry : 1;
		unsigned read_coordinate : 1;
		unsigned read_place : 1;
		unsigned read_searchString : 1;
		unsigned read_singleLineAddressString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,readonly) BOOL hasSingleLineAddressString; 
@property (nonatomic,retain) NSString * singleLineAddressString; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)searchString;
-(void)mergeFrom:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)hasOrigin;
-(int)origin;
-(GEOPDPlace *)place;
-(void)setOrigin:(int)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOLatLng *)coordinate;
-(unsigned long long)hash;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(BOOL)hasCoordinate;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPlace;
-(BOOL)hasSearchString;
-(id)description;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAutocompleteEntry;
-(NSString *)singleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(BOOL)hasSingleLineAddressString;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
