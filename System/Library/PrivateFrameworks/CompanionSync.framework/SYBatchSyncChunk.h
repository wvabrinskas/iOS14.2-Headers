/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSMutableArray, NSString;

@interface SYBatchSyncChunk : PBCodable <NSCopying> {

	unsigned _chunkIndex;
	SYMessageHeader* _header;
	NSMutableArray* _objects;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                     //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned chunkIndex;                   //@synthesize chunkIndex=_chunkIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
+(Class)objectsType;
-(void)mergeFrom:(id)arg1 ;
-(void)addObjects:(id)arg1 ;
-(NSString *)syncID;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(NSMutableArray *)objects;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(void)setChunkIndex:(unsigned)arg1 ;
-(unsigned)chunkIndex;
-(unsigned long long)objectsCount;
-(void)clearObjects;
-(id)objectsAtIndex:(unsigned long long)arg1 ;
@end

