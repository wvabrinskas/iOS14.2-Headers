/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {

	NSString* _identifier;
	long long _eligibilityStatus;
	long long _cardType;
	unsigned long long _deviceProvisioningDataExpected;
	NSURL* _termsURL;
	NSString* _termsID;
	NSString* _applicationIdentifier;
	NSString* _region;
	NSString* _nonce;
	NSURL* _learnMoreURL;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long eligibilityStatus;                                    //@synthesize eligibilityStatus=_eligibilityStatus - In the implementation block
@property (nonatomic,readonly) long long cardType;                                             //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceProvisioningDataExpected;              //@synthesize deviceProvisioningDataExpected=_deviceProvisioningDataExpected - In the implementation block
@property (nonatomic,copy,readonly) NSURL * termsURL;                                          //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * termsID;                                        //@synthesize termsID=_termsID - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;                          //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * region;                                         //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                                          //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy,readonly) NSURL * learnMoreURL;                                      //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)region;
-(NSString *)applicationIdentifier;
-(NSURL *)termsURL;
-(NSString *)termsID;
-(NSString *)identifier;
-(unsigned long long)deviceProvisioningDataExpected;
-(long long)cardType;
-(id)initWithData:(id)arg1 ;
-(NSString *)nonce;
-(NSURL *)learnMoreURL;
-(long long)eligibilityStatus;
@end

