/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMessageVersion, NSData;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying> {

	double _deletionDate;
	HDCodableMessageVersion* _messageVersion;
	NSData* _syncIdentifier;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSData * syncIdentifier;                               //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDeletionDate; 
@property (assign,nonatomic) double deletionDate;                                   //@synthesize deletionDate=_deletionDate - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageVersion; 
@property (nonatomic,retain) HDCodableMessageVersion * messageVersion;              //@synthesize messageVersion=_messageVersion - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)syncIdentifier;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)deletionDate;
-(void)setDeletionDate:(double)arg1 ;
-(void)setMessageVersion:(HDCodableMessageVersion *)arg1 ;
-(BOOL)hasMessageVersion;
-(HDCodableMessageVersion *)messageVersion;
-(void)setSyncIdentifier:(NSData *)arg1 ;
-(BOOL)hasSyncIdentifier;
-(void)setHasDeletionDate:(BOOL)arg1 ;
-(BOOL)hasDeletionDate;
@end

