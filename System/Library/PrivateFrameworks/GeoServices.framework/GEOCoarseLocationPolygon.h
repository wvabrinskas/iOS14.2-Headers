/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOCoarseLocationRing;

@interface GEOCoarseLocationPolygon : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _holes;
	GEOCoarseLocationRing* _shell;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_holes : 1;
		unsigned read_shell : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasShell; 
@property (nonatomic,retain) GEOCoarseLocationRing * shell; 
@property (nonatomic,retain) NSMutableArray * holes; 
+(Class)holesType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOCoarseLocationRing *)shell;
-(NSMutableArray *)holes;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasShell;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setShell:(GEOCoarseLocationRing *)arg1 ;
-(void)addHoles:(id)arg1 ;
-(void)setHoles:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(unsigned long long)holesCount;
-(void)clearHoles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)holesAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

