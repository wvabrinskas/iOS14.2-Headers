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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _geoIds;
	NSString* _matchedToken;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _geoType;
	struct {
		unsigned has_geoType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_geoIds : 1;
		unsigned read_matchedToken : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * matchedToken; 
@property (assign,nonatomic) BOOL hasGeoType; 
@property (assign,nonatomic) int geoType; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(unsigned long long*)geoIds;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)addGeoId:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)geoType;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGeoType;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)matchedToken;
-(void)setMatchedToken:(NSString *)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(void)setHasGeoType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
@end
