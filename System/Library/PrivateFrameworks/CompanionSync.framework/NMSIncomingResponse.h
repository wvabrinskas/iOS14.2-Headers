/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NMSDeviceSourced.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSString, NSData, NSDate, NSDictionary, IDSMessageContext;

@interface NMSIncomingResponse : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding> {

	unsigned short _messageID;
	NSString* sourceDeviceID;
	NSData* _data;
	NSString* _idsIdentifier;
	NSString* _requestIDSIdentifier;
	NSDate* _requestSent;
	NSDictionary* _requestPersistentUserInfo;
	id _pbResponse;
	IDSMessageContext* _idsContext;

}

@property (assign,nonatomic) unsigned short messageID;                              //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) id pbResponse;                                         //@synthesize pbResponse=_pbResponse - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIDSIdentifier;                         //@synthesize requestIDSIdentifier=_requestIDSIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * requestSent;                                  //@synthesize requestSent=_requestSent - In the implementation block
@property (nonatomic,retain) NSDictionary * requestPersistentUserInfo;              //@synthesize requestPersistentUserInfo=_requestPersistentUserInfo - In the implementation block
@property (nonatomic,retain) NSString * sourceDeviceID; 
@property (nonatomic,retain) IDSMessageContext * idsContext;                        //@synthesize idsContext=_idsContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)description;
-(NSString *)idsIdentifier;
-(NSData *)data;
-(id)CPObfuscatedDescriptionObject;
-(unsigned short)messageID;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(NSString *)sourceDeviceID;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setPbResponse:(id)arg1 ;
-(id)pbResponse;
-(NSString *)requestIDSIdentifier;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(void)setRequestIDSIdentifier:(NSString *)arg1 ;
-(void)setRequestSent:(NSDate *)arg1 ;
-(void)setRequestPersistentUserInfo:(NSDictionary *)arg1 ;
-(IDSMessageContext *)idsContext;
-(NSDate *)requestSent;
-(NSDictionary *)requestPersistentUserInfo;
@end

