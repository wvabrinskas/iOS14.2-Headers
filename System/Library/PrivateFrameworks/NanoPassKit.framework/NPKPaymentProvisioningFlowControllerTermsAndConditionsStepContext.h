/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct, NSURL;

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _allowNonSecureHTTP;
	PKPaymentSetupProduct* _product;
	NSURL* _termsURL;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSURL * termsURL;                             //@synthesize termsURL=_termsURL - In the implementation block
@property (assign,nonatomic) BOOL allowNonSecureHTTP;                      //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
-(NSURL *)termsURL;
-(id)description;
-(id)initWithRequestContext:(id)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setTermsURL:(NSURL *)arg1 ;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(BOOL)allowNonSecureHTTP;
@end
