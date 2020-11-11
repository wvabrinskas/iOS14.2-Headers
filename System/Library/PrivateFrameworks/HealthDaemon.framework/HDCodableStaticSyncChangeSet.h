/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying> {

	NSMutableArray* _changes;

}

@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
+(Class)changesType;
+(id)changeSetWithChanges:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)changes;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addChanges:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)changesCount;
-(void)clearChanges;
-(id)changesAtIndex:(unsigned long long)arg1 ;
@end
