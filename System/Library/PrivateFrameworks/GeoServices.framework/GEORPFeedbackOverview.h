/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPTimestamp, NSString;

@interface GEORPFeedbackOverview : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPTimestamp* _createdAt;
	GEORPTimestamp* _lastUpdatedAt;
	NSString* _stateDescription;
	NSString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _feedbackState;
	int _type;
	struct {
		unsigned has_feedbackState : 1;
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_createdAt : 1;
		unsigned read_lastUpdatedAt : 1;
		unsigned read_stateDescription : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) BOOL hasCreatedAt; 
@property (nonatomic,retain) GEORPTimestamp * createdAt; 
@property (nonatomic,readonly) BOOL hasLastUpdatedAt; 
@property (nonatomic,retain) GEORPTimestamp * lastUpdatedAt; 
@property (assign,nonatomic) BOOL hasFeedbackState; 
@property (assign,nonatomic) int feedbackState; 
@property (nonatomic,readonly) BOOL hasStateDescription; 
@property (nonatomic,retain) NSString * stateDescription; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stateDescription;
-(GEORPTimestamp *)lastUpdatedAt;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEORPTimestamp *)createdAt;
-(id)typeAsString:(int)arg1 ;
-(void)setLastUpdatedAt:(GEORPTimestamp *)arg1 ;
-(BOOL)hasCreatedAt;
-(void)setCreatedAt:(GEORPTimestamp *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTitle;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(NSString *)title;
-(int)type;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)feedbackState;
-(void)setFeedbackState:(int)arg1 ;
-(void)setStateDescription:(NSString *)arg1 ;
-(BOOL)hasLastUpdatedAt;
-(void)setHasFeedbackState:(BOOL)arg1 ;
-(BOOL)hasFeedbackState;
-(id)feedbackStateAsString:(int)arg1 ;
-(int)StringAsFeedbackState:(id)arg1 ;
-(BOOL)hasStateDescription;
@end
