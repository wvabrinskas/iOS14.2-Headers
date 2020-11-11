/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectAssociation : PBCodable <NSCopying> {

	NSData* _associationUuid;
	NSData* _objectUuids;

}

@property (nonatomic,readonly) BOOL hasAssociationUuid; 
@property (nonatomic,retain) NSData * associationUuid;               //@synthesize associationUuid=_associationUuid - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectUuids; 
@property (nonatomic,retain) NSData * objectUuids;                   //@synthesize objectUuids=_objectUuids - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAssociationUUID:(id)arg1 ;
-(void)setObjectUuids:(NSData *)arg1 ;
-(id)decodedAssociationUUID;
-(NSData *)objectUuids;
-(void)setAssociationUuid:(NSData *)arg1 ;
-(BOOL)hasAssociationUuid;
-(BOOL)hasObjectUuids;
-(NSData *)associationUuid;
@end
