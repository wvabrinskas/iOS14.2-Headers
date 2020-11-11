/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext {

	NSArray* _moreInfoItems;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,retain) NSArray * moreInfoItems;                  //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
-(id)description;
-(id)initWithRequestContext:(id)arg1 ;
-(NSArray *)moreInfoItems;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setMoreInfoItems:(NSArray *)arg1 ;
@end
