/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEORPScorecard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _categoryRatings;
	NSString* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _recommended;
	struct {
		unsigned has_recommended : 1;
		unsigned read_categoryRatings : 1;
		unsigned read_version : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version; 
@property (assign,nonatomic) BOOL hasRecommended; 
@property (assign,nonatomic) BOOL recommended; 
@property (nonatomic,retain) NSMutableArray * categoryRatings; 
+(Class)categoryRatingsType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(NSString *)version;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecommended:(BOOL)arg1 ;
-(void)addCategoryRatings:(id)arg1 ;
-(unsigned long long)categoryRatingsCount;
-(void)clearCategoryRatings;
-(BOOL)recommended;
-(id)categoryRatingsAtIndex:(unsigned long long)arg1 ;
-(void)setHasRecommended:(BOOL)arg1 ;
-(BOOL)hasRecommended;
-(NSMutableArray *)categoryRatings;
-(void)setCategoryRatings:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
