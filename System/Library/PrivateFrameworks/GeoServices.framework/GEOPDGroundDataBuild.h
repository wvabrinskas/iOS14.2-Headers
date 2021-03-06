/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOPDGroundDataBuild : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _capabilitys;
	SCD_Struct_GE17* _lodWithTextures;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _bucketId;
	unsigned _buildId;
	unsigned _dataFormatVersion;
	unsigned _dataOutputVersion;
	float _heightAboveGroundM;
	unsigned _index;
	unsigned _metricsVersion;
	int _type;
	struct {
		unsigned has_bucketId : 1;
		unsigned has_buildId : 1;
		unsigned has_dataFormatVersion : 1;
		unsigned has_dataOutputVersion : 1;
		unsigned has_heightAboveGroundM : 1;
		unsigned has_index : 1;
		unsigned has_metricsVersion : 1;
		unsigned has_type : 1;
		unsigned read_capabilitys : 1;
		unsigned read_lodWithTextures : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index; 
@property (assign,nonatomic) BOOL hasBuildId; 
@property (assign,nonatomic) unsigned buildId; 
@property (assign,nonatomic) BOOL hasDataFormatVersion; 
@property (assign,nonatomic) unsigned dataFormatVersion; 
@property (assign,nonatomic) BOOL hasDataOutputVersion; 
@property (assign,nonatomic) unsigned dataOutputVersion; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasHeightAboveGroundM; 
@property (assign,nonatomic) float heightAboveGroundM; 
@property (nonatomic,readonly) unsigned long long capabilitysCount; 
@property (nonatomic,readonly) int* capabilitys; 
@property (assign,nonatomic) BOOL hasBucketId; 
@property (assign,nonatomic) unsigned bucketId; 
@property (nonatomic,readonly) unsigned long long lodWithTexturesCount; 
@property (nonatomic,readonly) unsigned* lodWithTextures; 
@property (assign,nonatomic) BOOL hasMetricsVersion; 
@property (assign,nonatomic) unsigned metricsVersion; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(BOOL)hasBucketId;
-(void)setHasBucketId:(BOOL)arg1 ;
-(unsigned)bucketId;
-(void)setBucketId:(unsigned)arg1 ;
-(BOOL)hasDataFormatVersion;
-(void)setMetricsVersion:(unsigned)arg1 ;
-(int*)capabilitys;
-(id)typeAsString:(int)arg1 ;
-(unsigned)lodWithTexturesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lodWithTexturesCount;
-(id)init;
-(unsigned)buildId;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(int)StringAsCapabilitys:(id)arg1 ;
-(void)setHeightAboveGroundM:(float)arg1 ;
-(unsigned long long)capabilitysCount;
-(void)setBuildId:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)dataOutputVersion;
-(void)setLodWithTextures:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setType:(int)arg1 ;
-(BOOL)hasIndex;
-(void)addCapability:(int)arg1 ;
-(int)capabilityAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned*)lodWithTextures;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasBuildId:(BOOL)arg1 ;
-(id)description;
-(id)capabilitysAsString:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)index;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)hasMetricsVersion;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDataOutputVersion;
-(unsigned)dataFormatVersion;
-(BOOL)hasType;
-(int)type;
-(void)clearCapabilitys;
-(id)initWithData:(id)arg1 ;
-(unsigned)metricsVersion;
-(void)writeTo:(id)arg1 ;
-(void)setCapabilitys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasDataFormatVersion:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)clearLodWithTextures;
-(void)setHasDataOutputVersion:(BOOL)arg1 ;
-(void)addLodWithTextures:(unsigned)arg1 ;
-(void)setDataOutputVersion:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasBuildId;
-(void)setDataFormatVersion:(unsigned)arg1 ;
-(void)dealloc;
-(void)setHasMetricsVersion:(BOOL)arg1 ;
-(BOOL)hasHeightAboveGroundM;
-(float)heightAboveGroundM;
-(void)setHasHeightAboveGroundM:(BOOL)arg1 ;
@end

