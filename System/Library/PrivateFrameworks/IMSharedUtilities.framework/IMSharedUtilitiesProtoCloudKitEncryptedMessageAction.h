/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageAction : PBCodable <NSCopying> {

	long long _messageActionType;
	NSString* _originalMessageGuid;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM6 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                            //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasMessageActionType; 
@property (assign,nonatomic) long long messageActionType;                 //@synthesize messageActionType=_messageActionType - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;                      //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalMessageGuid; 
@property (nonatomic,retain) NSString * originalMessageGuid;              //@synthesize originalMessageGuid=_originalMessageGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                            //@synthesize padding=_padding - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPadding;
-(id)description;
-(NSData *)padding;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)otherHandle;
-(void)setPadding:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasOtherHandle;
-(BOOL)hasVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOtherHandle:(NSString *)arg1 ;
-(void)setOriginalMessageGuid:(NSString *)arg1 ;
-(void)setMessageActionType:(long long)arg1 ;
-(void)setHasMessageActionType:(BOOL)arg1 ;
-(BOOL)hasMessageActionType;
-(BOOL)hasOriginalMessageGuid;
-(long long)messageActionType;
-(NSString *)originalMessageGuid;
-(void)dealloc;
@end

