/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying> {

	NSString* _channelId;
	NSString* _country;
	NSString* _email;
	NSString* _iapId;
	NSString* _language;
	NSString* _purchaseReceipt;

}

@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                    //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,readonly) BOOL hasEmail; 
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseReceipt; 
@property (nonatomic,retain) NSString * purchaseReceipt;              //@synthesize purchaseReceipt=_purchaseReceipt - In the implementation block
@property (nonatomic,readonly) BOOL hasIapId; 
@property (nonatomic,retain) NSString * iapId;                        //@synthesize iapId=_iapId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                      //@synthesize country=_country - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasLanguage;
-(unsigned long long)hash;
-(NSString *)iapId;
-(NSString *)email;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)country;
-(void)setIapId:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCountry;
-(BOOL)hasEmail;
-(void)setChannelId:(NSString *)arg1 ;
-(BOOL)hasIapId;
-(BOOL)hasChannelId;
-(NSString *)purchaseReceipt;
-(void)setPurchaseReceipt:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)channelId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasPurchaseReceipt;
@end

