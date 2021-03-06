/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackClientImageInfo, NSString, GEOPDPlace;

@interface GEORPPoiImageFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackClientImageInfo* _imageInfo;
	NSString* _imageUrl;
	GEOPDPlace* _place;
	NSString* _providerImageId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_imageInfo : 1;
		unsigned read_imageUrl : 1;
		unsigned read_place : 1;
		unsigned read_providerImageId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasProviderImageId; 
@property (nonatomic,retain) NSString * providerImageId; 
@property (nonatomic,readonly) BOOL hasImageUrl; 
@property (nonatomic,retain) NSString * imageUrl; 
@property (nonatomic,readonly) BOOL hasImageInfo; 
@property (nonatomic,retain) GEORPFeedbackClientImageInfo * imageInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlace *)place;
-(id)init;
-(GEORPFeedbackClientImageInfo *)imageInfo;
-(BOOL)hasImageInfo;
-(void)setImageInfo:(GEORPFeedbackClientImageInfo *)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPlace;
-(NSString *)imageUrl;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)providerImageId;
-(void)setProviderImageId:(NSString *)arg1 ;
-(void)setImageUrl:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasProviderImageId;
-(BOOL)hasImageUrl;
-(void)readAll:(BOOL)arg1 ;
@end

