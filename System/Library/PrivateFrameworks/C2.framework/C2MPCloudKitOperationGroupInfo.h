/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying> {

	NSString* _operationGroupId;
	NSString* _operationGroupName;
	BOOL _operationGroupTriggered;
	SCD_Struct_C25 _has;

}

@property (nonatomic,readonly) BOOL hasOperationGroupId; 
@property (nonatomic,retain) NSString * operationGroupId;                  //@synthesize operationGroupId=_operationGroupId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (assign,nonatomic) BOOL hasOperationGroupTriggered; 
@property (assign,nonatomic) BOOL operationGroupTriggered;                 //@synthesize operationGroupTriggered=_operationGroupTriggered - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)operationGroupName;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)operationGroupId;
-(void)setOperationGroupId:(NSString *)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(void)setOperationGroupTriggered:(BOOL)arg1 ;
-(BOOL)hasOperationGroupId;
-(BOOL)hasOperationGroupName;
-(void)setHasOperationGroupTriggered:(BOOL)arg1 ;
-(BOOL)hasOperationGroupTriggered;
-(BOOL)operationGroupTriggered;
@end
