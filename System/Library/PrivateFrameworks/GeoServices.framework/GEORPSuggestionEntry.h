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

@class NSMutableArray;

@interface GEORPSuggestionEntry : PBCodable <NSCopying> {

	NSMutableArray* _displayLines;
	unsigned _serverSearchCompletionEntryIndex;
	unsigned _serverSearchCompletionSectionIndex;
	int _type;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSMutableArray * displayLines; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionSectionIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionSectionIndex; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionEntryIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionEntryIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLineType;
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setServerSearchCompletionSectionIndex:(unsigned)arg1 ;
-(void)setServerSearchCompletionEntryIndex:(unsigned)arg1 ;
-(NSMutableArray *)displayLines;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(void)writeTo:(id)arg1 ;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(unsigned)serverSearchCompletionSectionIndex;
-(void)setHasServerSearchCompletionSectionIndex:(BOOL)arg1 ;
-(BOOL)hasServerSearchCompletionSectionIndex;
-(unsigned)serverSearchCompletionEntryIndex;
-(void)setHasServerSearchCompletionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasServerSearchCompletionEntryIndex;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

