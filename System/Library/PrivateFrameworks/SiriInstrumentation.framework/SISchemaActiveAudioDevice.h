/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaActiveAudioDevice : PBCodable {

	NSString* _vendorIdentifier;
	NSString* _productIdentifier;
	BOOL _hasVendorIdentifier;
	BOOL _hasProductIdentifier;

}

@property (nonatomic,copy) NSString * vendorIdentifier;               //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVendorIdentifier;                //@synthesize hasVendorIdentifier=_hasVendorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProductIdentifier;               //@synthesize hasProductIdentifier=_hasProductIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)jsonData;
-(NSString *)vendorIdentifier;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(BOOL)hasVendorIdentifier;
-(BOOL)hasProductIdentifier;
-(void)setHasVendorIdentifier:(BOOL)arg1 ;
-(void)setHasProductIdentifier:(BOOL)arg1 ;
@end

