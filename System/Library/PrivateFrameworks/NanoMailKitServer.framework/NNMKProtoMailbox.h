/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoMailbox : PBCodable <NSCopying> {

	NSString* _accountId;
	NSString* _customName;
	unsigned _filterType;
	NSString* _mailboxId;
	unsigned _type;
	NSString* _url;
	BOOL _syncEnabled;
	BOOL _syncRequested;
	SCD_Struct_NN5 _has;

}

@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;               //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;               //@synthesize mailboxId=_mailboxId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomName; 
@property (nonatomic,retain) NSString * customName;              //@synthesize customName=_customName - In the implementation block
@property (assign,nonatomic) BOOL hasFilterType; 
@property (assign,nonatomic) unsigned filterType;                //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) BOOL hasSyncEnabled; 
@property (assign,nonatomic) BOOL syncEnabled;                   //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSyncRequested; 
@property (assign,nonatomic) BOOL syncRequested;                 //@synthesize syncRequested=_syncRequested - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                     //@synthesize url=_url - In the implementation block
+(id)protoMailboxFromMailbox:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFilterType:(unsigned)arg1 ;
-(unsigned)filterType;
-(unsigned long long)hash;
-(void)setHasFilterType:(BOOL)arg1 ;
-(BOOL)hasFilterType;
-(void)setCustomName:(NSString *)arg1 ;
-(NSString *)url;
-(BOOL)hasUrl;
-(id)mailbox;
-(id)dictionaryRepresentation;
-(NSString *)customName;
-(void)setType:(unsigned)arg1 ;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(unsigned)type;
-(NSString *)accountId;
-(void)writeTo:(id)arg1 ;
-(BOOL)syncEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(BOOL)hasCustomName;
-(BOOL)hasAccountId;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(void)setHasSyncEnabled:(BOOL)arg1 ;
-(BOOL)hasSyncEnabled;
-(void)setSyncRequested:(BOOL)arg1 ;
-(void)setHasSyncRequested:(BOOL)arg1 ;
-(BOOL)hasSyncRequested;
-(BOOL)syncRequested;
@end
