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

@class PBDataReader, NSString;

@interface GEOVectorTileRequest : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _accessKey;
	NSString* _countryCode;
	NSString* _languageCode;
	unsigned long long _lineId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _latitudeHint;
	float _longitudeHint;
	unsigned _scale;
	unsigned _size;
	unsigned _style;
	unsigned _version;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	BOOL _preflight;
	BOOL _venuesPreflight;
	BOOL _vloc;
	struct {
		unsigned has_lineId : 1;
		unsigned has_latitudeHint : 1;
		unsigned has_longitudeHint : 1;
		unsigned has_scale : 1;
		unsigned has_size : 1;
		unsigned has_style : 1;
		unsigned has_version : 1;
		unsigned has_x : 1;
		unsigned has_y : 1;
		unsigned has_z : 1;
		unsigned has_preflight : 1;
		unsigned has_venuesPreflight : 1;
		unsigned has_vloc : 1;
		unsigned read_accessKey : 1;
		unsigned read_countryCode : 1;
		unsigned read_languageCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) unsigned x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) unsigned y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) unsigned z; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) unsigned style; 
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode; 
@property (assign,nonatomic) BOOL hasPreflight; 
@property (assign,nonatomic) BOOL preflight; 
@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned size; 
@property (assign,nonatomic) BOOL hasScale; 
@property (assign,nonatomic) unsigned scale; 
@property (nonatomic,readonly) BOOL hasAccessKey; 
@property (nonatomic,retain) NSString * accessKey; 
@property (assign,nonatomic) BOOL hasLongitudeHint; 
@property (assign,nonatomic) float longitudeHint; 
@property (assign,nonatomic) BOOL hasLatitudeHint; 
@property (assign,nonatomic) float latitudeHint; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (assign,nonatomic) BOOL hasVenuesPreflight; 
@property (assign,nonatomic) BOOL venuesPreflight; 
@property (assign,nonatomic) BOOL hasVloc; 
@property (assign,nonatomic) BOOL vloc; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)z;
-(void)mergeFrom:(id)arg1 ;
-(void)setY:(unsigned)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(BOOL)vloc;
-(void)setHasY:(BOOL)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasLanguageCode;
-(BOOL)hasX;
-(void)setHasZ:(BOOL)arg1 ;
-(void)setX:(unsigned)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)y;
-(unsigned long long)lineId;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)init;
-(void)setHasVersion:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)x;
-(unsigned long long)hash;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasY;
-(BOOL)hasSize;
-(unsigned)version;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasVloc;
-(BOOL)hasLineId;
-(id)dictionaryRepresentation;
-(BOOL)hasZ;
-(unsigned)size;
-(NSString *)countryCode;
-(void)setScale:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVloc:(BOOL)arg1 ;
-(BOOL)hasScale;
-(BOOL)hasCountryCode;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)style;
-(NSString *)accessKey;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasPreflight;
-(BOOL)preflight;
-(void)setPreflight:(BOOL)arg1 ;
-(void)setAccessKey:(NSString *)arg1 ;
-(void)setLongitudeHint:(float)arg1 ;
-(void)setLatitudeHint:(float)arg1 ;
-(void)setVenuesPreflight:(BOOL)arg1 ;
-(void)setHasPreflight:(BOOL)arg1 ;
-(void)setHasScale:(BOOL)arg1 ;
-(BOOL)hasAccessKey;
-(float)longitudeHint;
-(void)setHasLongitudeHint:(BOOL)arg1 ;
-(float)latitudeHint;
-(BOOL)hasLongitudeHint;
-(void)setHasLatitudeHint:(BOOL)arg1 ;
-(BOOL)hasLatitudeHint;
-(BOOL)venuesPreflight;
-(void)setHasVenuesPreflight:(BOOL)arg1 ;
-(BOOL)hasVenuesPreflight;
-(void)setHasVloc:(BOOL)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasStyle;
-(void)writeTo:(id)arg1 ;
-(void)setHasLineId:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setZ:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setStyle:(unsigned)arg1 ;
-(unsigned)scale;
@end
