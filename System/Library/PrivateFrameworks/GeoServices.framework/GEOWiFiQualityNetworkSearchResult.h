/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOWiFiQualityNetworkSearchResult : PBCodable <NSCopying> {

	NSMutableArray* _matches;

}

@property (nonatomic,retain) NSMutableArray * matches; 
+(Class)matchesType;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)matches;
-(void)mergeFrom:(id)arg1 ;
-(void)setMatches:(NSMutableArray *)arg1 ;
-(unsigned long long)matchesCount;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(void)clearMatches;
-(BOOL)isEqual:(id)arg1 ;
-(void)addMatches:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)matchesAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

