/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOAbAssignInfo, GEOABClientConfig, GEOPDDatasetABStatus, GEOABExperimentAssignment;

@interface GEOLogMsgStateExperiments : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOAbAssignInfo* _abAssignInfo;
	GEOABClientConfig* _clientAbExperimentAssignment;
	GEOPDDatasetABStatus* _datasetAbStatus;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_abAssignInfo : 1;
		unsigned read_clientAbExperimentAssignment : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_tilesAbExperimentAssignment : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment; 
@property (nonatomic,readonly) BOOL hasClientAbExperimentAssignment; 
@property (nonatomic,retain) GEOABClientConfig * clientAbExperimentAssignment; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,readonly) BOOL hasAbAssignInfo; 
@property (nonatomic,retain) GEOAbAssignInfo * abAssignInfo; 
+(BOOL)isValid:(id)arg1 ;
-(void)setAbAssignInfo:(GEOAbAssignInfo *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(BOOL)hasAbAssignInfo;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(GEOAbAssignInfo *)abAssignInfo;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(GEOABClientConfig *)clientAbExperimentAssignment;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setClientAbExperimentAssignment:(GEOABClientConfig *)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
-(BOOL)hasClientAbExperimentAssignment;
-(id)initWithData:(id)arg1 ;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

