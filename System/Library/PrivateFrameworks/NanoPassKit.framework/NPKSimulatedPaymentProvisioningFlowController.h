/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NPKPaymentProvisioningFlowController.h>

@interface NPKSimulatedPaymentProvisioningFlowController : NPKPaymentProvisioningFlowController
+(id)_passWithDescription:(id)arg1 credentialType:(long long)arg2 ;
+(id)_broadwayCredential;
+(id)_easyProvisioningCredentials;
-(void)_performTerms:(id)arg1 ;
-(void)_performEligibility:(id)arg1 ;
-(void)_startProvisioningForCredential:(id)arg1 requestContext:(id)arg2 ;
-(void)_requestRequirements:(id)arg1 ;
-(void)_performProvision:(id)arg1 ;
-(void)startProvisioningFlow:(id)arg1 ;
-(void)acknowledgeWelcome:(id)arg1 ;
-(void)chooseFlowForPickerItem:(id)arg1 requestContext:(id)arg2 ;
-(void)handleManualEntryFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3 ;
@end
