/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueBuilding : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _directoryGroupingIds;
	SCD_Struct_GE92* _levelIds;
	unsigned long long _buildingId;
	GEOPDVenueLabel* _label;
	unsigned long long _muid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_buildingId : 1;
		unsigned has_muid : 1;
		unsigned read_unknownFields : 1;
		unsigned read_directoryGroupingIds : 1;
		unsigned read_levelIds : 1;
		unsigned read_label : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (nonatomic,readonly) unsigned long long levelIdsCount; 
@property (nonatomic,readonly) unsigned long long* levelIds; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) unsigned long long directoryGroupingIdsCount; 
@property (nonatomic,readonly) unsigned long long* directoryGroupingIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)muid;
-(unsigned long long)buildingId;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDVenueLabel *)label;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long*)levelIds;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)addLevelId:(unsigned long long)arg1 ;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)addDirectoryGroupingId:(unsigned long long)arg1 ;
-(unsigned long long)levelIdsCount;
-(void)clearLevelIds;
-(unsigned long long)levelIdAtIndex:(unsigned long long)arg1 ;
-(void)setLevelIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)directoryGroupingIdsCount;
-(void)clearDirectoryGroupingIds;
-(unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long*)directoryGroupingIds;
-(void)setDirectoryGroupingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasBuildingId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasMuid;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
@end
