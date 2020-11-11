/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOSurchargeType.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString, NSString;

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _name;
	int _enumValue;
	struct {
		unsigned has_enumValue : 1;
	}  _flags;

}

@property (nonatomic,readonly) int value; 
@property (nonatomic,readonly) id<GEOServerFormattedString> formattedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasEnumValue; 
@property (assign,nonatomic) int enumValue; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOFormattedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasName;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(GEOFormattedString *)name;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)value;
-(PBUnknownFields *)unknownFields;
-(int)enumValue;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id<GEOServerFormattedString>)formattedName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setName:(GEOFormattedString *)arg1 ;
-(void)setEnumValue:(int)arg1 ;
-(void)setHasEnumValue:(BOOL)arg1 ;
-(BOOL)hasEnumValue;
@end
