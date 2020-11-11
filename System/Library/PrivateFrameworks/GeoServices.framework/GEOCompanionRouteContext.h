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

@interface GEOCompanionRouteContext : PBCodable <NSCopying> {

	int _origin;
	unsigned _timestamp;
	struct {
		unsigned has_origin : 1;
		unsigned has_timestamp : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned timestamp; 
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin; 
+(int)defaultOrigin;
+(id)context;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasOrigin;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(id)jsonRepresentation;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(long long)compare:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isForeignOrigin;
-(BOOL)isStaleComparedToContext:(id)arg1 ;
-(id)description;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)simpleDescription;
-(void)writeTo:(id)arg1 ;
-(unsigned)timestamp;
-(void)setTimestamp:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
