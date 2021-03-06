/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>

@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {

	PKAccountAutomaticPaymentsController* _controller;
	unsigned long long _featureIdentifier;

}
-(id)_doneButton;
-(id)initWithController:(id)arg1 ;
-(id)_paymentDateString;
-(long long)_paymentDay;
-(id)_paymentDayString;
-(id)_paymentDayNameString;
-(void)_donePressed;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)bodyString;
@end

