/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMethod, NSString, NSData, NSURL;

@interface PKPaymentToken : NSObject <NSSecureCoding> {

	PKPaymentMethod* _paymentMethod;
	NSString* _paymentInstrumentName;
	NSString* _paymentNetwork;
	NSString* _transactionIdentifier;
	NSData* _paymentData;
	NSURL* _redeemURL;
	NSString* _retryNonce;

}

@property (nonatomic,retain) PKPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy) NSString * paymentInstrumentName;               //@synthesize paymentInstrumentName=_paymentInstrumentName - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                      //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;               //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                           //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,retain) NSURL * redeemURL;                            //@synthesize redeemURL=_redeemURL - In the implementation block
@property (nonatomic,copy) NSString * retryNonce;                          //@synthesize retryNonce=_retryNonce - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)paymentTokenWithProtobuf:(id)arg1 ;
+(id)simulatedTokenForNetwork:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)paymentData;
-(NSString *)paymentNetwork;
-(NSURL *)redeemURL;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(id)description;
-(void)setRetryNonce:(NSString *)arg1 ;
-(NSString *)paymentInstrumentName;
-(id)protobuf;
-(NSString *)retryNonce;
-(id)initWithCoder:(id)arg1 ;
-(void)setRedeemURL:(NSURL *)arg1 ;
-(void)setPaymentInstrumentName:(NSString *)arg1 ;
-(void)setPaymentData:(NSData *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(PKPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKPaymentMethod *)arg1 ;
@end
