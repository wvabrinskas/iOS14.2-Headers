/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapItemClientAttributes, GEOPDPlaceRefinementParameters, GEOMapItemInitialRequestData;

@interface GEOMapItemHandle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPDPlaceRefinementParameters* _placeRefinementParameters;
	GEOMapItemInitialRequestData* _placeRequestData;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _handleType;
	struct {
		unsigned has_handleType : 1;
		unsigned read_clientAttributes : 1;
		unsigned read_placeRefinementParameters : 1;
		unsigned read_placeRequestData : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHandleType; 
@property (assign,nonatomic) int handleType; 
@property (nonatomic,readonly) BOOL hasPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDPlaceRefinementParameters * placeRefinementParameters; 
@property (nonatomic,readonly) BOOL hasPlaceRequestData; 
@property (nonatomic,retain) GEOMapItemInitialRequestData * placeRequestData; 
@property (nonatomic,readonly) BOOL hasClientAttributes; 
@property (nonatomic,retain) GEOMapItemClientAttributes * clientAttributes; 
+(BOOL)isValid:(id)arg1 ;
+(id)handleDataForMapItem:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasHandleType:(BOOL)arg1 ;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setHandleType:(int)arg1 ;
-(GEOMapItemClientAttributes *)clientAttributes;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(BOOL)hasPlaceRequestData;
-(id)dictionaryRepresentation;
-(id)handleTypeAsString:(int)arg1 ;
-(void)setClientAttributes:(GEOMapItemClientAttributes *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPlaceRefinementParameters;
-(void)clearSensitiveFields;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(int)handleType;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasClientAttributes;
-(BOOL)hasHandleType;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setPlaceRequestData:(GEOMapItemInitialRequestData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsHandleType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOMapItemInitialRequestData *)placeRequestData;
@end
