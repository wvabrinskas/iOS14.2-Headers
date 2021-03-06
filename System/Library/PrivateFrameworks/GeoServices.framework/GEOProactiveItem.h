/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOProactiveItem : PBCodable <NSCopying> {

	int _proactiveItemType;
	int _timeSinceStart;
	BOOL _deleted;
	BOOL _edited;
	BOOL _shared;
	BOOL _tapped;
	BOOL _visible;
	struct {
		unsigned has_proactiveItemType : 1;
		unsigned has_timeSinceStart : 1;
		unsigned has_deleted : 1;
		unsigned has_edited : 1;
		unsigned has_shared : 1;
		unsigned has_tapped : 1;
		unsigned has_visible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasProactiveItemType; 
@property (assign,nonatomic) int proactiveItemType; 
@property (assign,nonatomic) BOOL hasTimeSinceStart; 
@property (assign,nonatomic) int timeSinceStart; 
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL hasTapped; 
@property (assign,nonatomic) BOOL tapped; 
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared; 
@property (assign,nonatomic) BOOL hasEdited; 
@property (assign,nonatomic) BOOL edited; 
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)shared;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(BOOL)tapped;
-(void)setEdited:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)deleted;
-(void)setShared:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(int)proactiveItemType;
-(void)setProactiveItemType:(int)arg1 ;
-(void)setTimeSinceStart:(int)arg1 ;
-(void)setHasProactiveItemType:(BOOL)arg1 ;
-(BOOL)hasProactiveItemType;
-(id)proactiveItemTypeAsString:(int)arg1 ;
-(int)StringAsProactiveItemType:(id)arg1 ;
-(int)timeSinceStart;
-(void)setHasTimeSinceStart:(BOOL)arg1 ;
-(BOOL)hasTimeSinceStart;
-(void)setHasVisible:(BOOL)arg1 ;
-(void)setHasTapped:(BOOL)arg1 ;
-(void)setHasShared:(BOOL)arg1 ;
-(void)setHasEdited:(BOOL)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTapped;
-(BOOL)hasShared;
-(BOOL)hasEdited;
-(BOOL)edited;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setTapped:(BOOL)arg1 ;
-(BOOL)hasVisible;
-(BOOL)hasDeleted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

