/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying> {

	NSMutableArray* _conflictLoserEtags;

}

@property (nonatomic,retain) NSMutableArray * conflictLoserEtags;              //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
+(Class)conflictLoserEtagsType;
-(void)mergeFrom:(id)arg1 ;
-(id)conflictLoserEtagsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)clearConflictLoserEtags;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)conflictLoserEtagsCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addConflictLoserEtags:(id)arg1 ;
@end

