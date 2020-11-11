/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKProtobufAppletSubcredentialSharingInvitation : PBCodable <NSCopying> {

	NSString* _deviceModel;
	int _deviceType;
	unsigned _entitlement;
	NSString* _identifier;
	NSData* _invitation;
	NSString* _issuer;
	NSString* _pairedReaderIdentifier;
	NSString* _partnerIdentifier;
	NSString* _recipientName;
	NSData* _sharingSessionIdentifier;
	unsigned _version;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) unsigned version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasInvitation; 
@property (nonatomic,retain) NSData * invitation;                             //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPartnerIdentifier; 
@property (nonatomic,retain) NSString * partnerIdentifier;                    //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPairedReaderIdentifier; 
@property (nonatomic,retain) NSString * pairedReaderIdentifier;               //@synthesize pairedReaderIdentifier=_pairedReaderIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipientName; 
@property (nonatomic,retain) NSString * recipientName;                        //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,readonly) BOOL hasSharingSessionIdentifier; 
@property (nonatomic,retain) NSData * sharingSessionIdentifier;               //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasEntitlement; 
@property (assign,nonatomic) unsigned entitlement;                            //@synthesize entitlement=_entitlement - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType; 
@property (assign,nonatomic) int deviceType;                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIssuer; 
@property (nonatomic,retain) NSString * issuer;                               //@synthesize issuer=_issuer - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                          //@synthesize deviceModel=_deviceModel - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDeviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(NSString *)deviceModel;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(NSString *)recipientName;
-(NSString *)issuer;
-(NSString *)pairedReaderIdentifier;
-(void)setRecipientName:(NSString *)arg1 ;
-(unsigned)version;
-(unsigned)entitlement;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(void)setEntitlement:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)deviceTypeAsString:(int)arg1 ;
-(int)StringAsDeviceType:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)partnerIdentifier;
-(NSData *)invitation;
-(BOOL)hasIssuer;
-(BOOL)hasEntitlement;
-(void)writeTo:(id)arg1 ;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(NSData *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSData *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(BOOL)hasPartnerIdentifier;
-(BOOL)hasPairedReaderIdentifier;
-(BOOL)hasRecipientName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSharingSessionIdentifier;
-(void)setHasEntitlement:(BOOL)arg1 ;
-(void)setInvitation:(NSData *)arg1 ;
-(BOOL)hasInvitation;
-(BOOL)hasDeviceType;
-(void)setPairedReaderIdentifier:(NSString *)arg1 ;
@end
