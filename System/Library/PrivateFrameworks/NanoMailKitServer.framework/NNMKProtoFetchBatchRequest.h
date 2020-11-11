/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoFetchBatchRequest : PBRequest <NSCopying> {

	NSMutableArray* _fetchRequests;
	unsigned _fullSyncVersion;
	BOOL _wantsBatchedResponse;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                    //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchRequests;              //@synthesize fetchRequests=_fetchRequests - In the implementation block
@property (assign,nonatomic) BOOL hasWantsBatchedResponse; 
@property (assign,nonatomic) BOOL wantsBatchedResponse;                   //@synthesize wantsBatchedResponse=_wantsBatchedResponse - In the implementation block
+(Class)fetchRequestType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)fetchRequests;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(BOOL)wantsBatchedResponse;
-(void)addFetchRequest:(id)arg1 ;
-(unsigned long long)fetchRequestsCount;
-(void)clearFetchRequests;
-(id)fetchRequestAtIndex:(unsigned long long)arg1 ;
-(void)setWantsBatchedResponse:(BOOL)arg1 ;
-(void)setHasWantsBatchedResponse:(BOOL)arg1 ;
-(BOOL)hasWantsBatchedResponse;
-(void)setFetchRequests:(NSMutableArray *)arg1 ;
@end
