/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _includeName;
	BOOL _includeSpokenNames;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasIncludeSpokenNames; 
@property (assign,nonatomic) BOOL includeSpokenNames; 
@property (assign,nonatomic) BOOL hasIncludeName; 
@property (assign,nonatomic) BOOL includeName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setIncludeSpokenNames:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIncludeName:(BOOL)arg1 ;
-(BOOL)includeSpokenNames;
-(void)setHasIncludeSpokenNames:(BOOL)arg1 ;
-(BOOL)hasIncludeSpokenNames;
-(BOOL)includeName;
-(void)setHasIncludeName:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIncludeName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

