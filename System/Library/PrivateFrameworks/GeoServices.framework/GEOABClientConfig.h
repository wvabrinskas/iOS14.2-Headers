/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOABClientConfig : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _assignedAbBranchId;
	NSMutableArray* _configKeyValues;
	NSMutableArray* _debugExperimentBranchs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_assignedAbBranchId : 1;
		unsigned read_configKeyValues : 1;
		unsigned read_debugExperimentBranchs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * configKeyValues; 
@property (nonatomic,readonly) BOOL hasAssignedAbBranchId; 
@property (nonatomic,retain) NSString * assignedAbBranchId; 
@property (nonatomic,retain) NSMutableArray * debugExperimentBranchs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)configKeyValueType;
+(Class)debugExperimentBranchType;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(id)debugExperimentBranchAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setConfigKeyValues:(NSMutableArray *)arg1 ;
-(void)addDebugExperimentBranch:(id)arg1 ;
-(unsigned long long)configKeyValuesCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)addConfigKeyValue:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)assignedAbBranchId;
-(void)clearDebugExperimentBranchs;
-(id)initWithData:(id)arg1 ;
-(void)clearConfigKeyValues;
-(void)setDebugExperimentBranchs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)debugExperimentBranchs;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAssignedAbBranchId;
-(id)initWithJSON:(id)arg1 ;
-(void)setAssignedAbBranchId:(NSString *)arg1 ;
-(id)configKeyValueAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)configKeyValues;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)debugExperimentBranchsCount;
-(void)readAll:(BOOL)arg1 ;
@end

