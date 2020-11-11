/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDecimalNumber, NSDate;

@interface NFECommercePaymentRequest : NSObject <NSSecureCoding> {

	unsigned char _merchantCapabilities;
	unsigned _unpredictableNumber;
	NSString* _appletIdentifier;
	NSData* _merchantData;
	NSString* _currencyCode;
	NSString* _countryCode;
	NSDecimalNumber* _transactionAmount;
	NSDate* _transactionDate;
	NSData* _networkMerchantIdentifier;

}

@property (nonatomic,retain) NSString * appletIdentifier;                      //@synthesize appletIdentifier=_appletIdentifier - In the implementation block
@property (nonatomic,retain) NSData * merchantData;                            //@synthesize merchantData=_merchantData - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                          //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * transactionAmount;              //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                         //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) unsigned char merchantCapabilities;               //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (assign,nonatomic) unsigned unpredictableNumber;                     //@synthesize unpredictableNumber=_unpredictableNumber - In the implementation block
@property (nonatomic,retain) NSData * networkMerchantIdentifier;               //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)countryCode;
-(void)setMerchantCapabilities:(unsigned char)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setNetworkMerchantIdentifier:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)networkMerchantIdentifier;
-(unsigned char)merchantCapabilities;
-(NSDate *)transactionDate;
-(void)setMerchantData:(NSData *)arg1 ;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(void)setAppletIdentifier:(NSString *)arg1 ;
-(void)setUnpredictableNumber:(unsigned)arg1 ;
-(NSString *)appletIdentifier;
-(NSData *)merchantData;
-(unsigned)unpredictableNumber;
@end
