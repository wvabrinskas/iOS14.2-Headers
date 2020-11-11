/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, MSPPlaceBookmark, MSPRegionBookmark, MSPRouteBookmark, MSPTransitLineBookmark;

@interface MSPBookmarkStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	NSString* _identifier;
	MSPPlaceBookmark* _placeBookmark;
	MSPRegionBookmark* _regionBookmark;
	MSPRouteBookmark* _routeBookmark;
	MSPTransitLineBookmark* _transitLineBookmark;
	int _type;
	SCD_Struct_MS4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceBookmark; 
@property (nonatomic,retain) MSPPlaceBookmark * placeBookmark;                          //@synthesize placeBookmark=_placeBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteBookmark; 
@property (nonatomic,retain) MSPRouteBookmark * routeBookmark;                          //@synthesize routeBookmark=_routeBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionBookmark; 
@property (nonatomic,retain) MSPRegionBookmark * regionBookmark;                        //@synthesize regionBookmark=_regionBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineBookmark; 
@property (nonatomic,retain) MSPTransitLineBookmark * transitLineBookmark;              //@synthesize transitLineBookmark=_transitLineBookmark - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPosition;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(double)position;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPosition:(double)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasPosition:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPlaceBookmark;
-(void)setPlaceBookmark:(MSPPlaceBookmark *)arg1 ;
-(MSPPlaceBookmark *)placeBookmark;
-(void)setRouteBookmark:(MSPRouteBookmark *)arg1 ;
-(MSPRouteBookmark *)routeBookmark;
-(void)setRegionBookmark:(MSPRegionBookmark *)arg1 ;
-(MSPRegionBookmark *)regionBookmark;
-(void)setTransitLineBookmark:(MSPTransitLineBookmark *)arg1 ;
-(MSPTransitLineBookmark *)transitLineBookmark;
-(BOOL)hasRouteBookmark;
-(BOOL)hasRegionBookmark;
-(BOOL)hasTransitLineBookmark;
@end
