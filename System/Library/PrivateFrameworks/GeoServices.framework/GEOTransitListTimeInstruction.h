/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteStepTransitInstructionMerging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSString;

@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _primaryText;
	GEOFormattedString* _secondaryText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _hideWhenListCollapsed;
	struct {
		unsigned has_hideWhenListCollapsed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_primaryText : 1;
		unsigned read_secondaryText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPrimaryText; 
@property (nonatomic,retain) GEOFormattedString * primaryText; 
@property (nonatomic,readonly) BOOL hasSecondaryText; 
@property (nonatomic,retain) GEOFormattedString * secondaryText; 
@property (assign,nonatomic) BOOL hasHideWhenListCollapsed; 
@property (assign,nonatomic) BOOL hideWhenListCollapsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(GEOFormattedString *)secondaryText;
-(id)initWithDictionary:(id)arg1 ;
-(GEOFormattedString *)primaryText;
-(void)setSecondaryText:(GEOFormattedString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPrimaryText:(GEOFormattedString *)arg1 ;
-(void)setHideWhenListCollapsed:(BOOL)arg1 ;
-(BOOL)hasPrimaryText;
-(BOOL)hasSecondaryText;
-(BOOL)hideWhenListCollapsed;
-(void)setHasHideWhenListCollapsed:(BOOL)arg1 ;
-(BOOL)hasHideWhenListCollapsed;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

