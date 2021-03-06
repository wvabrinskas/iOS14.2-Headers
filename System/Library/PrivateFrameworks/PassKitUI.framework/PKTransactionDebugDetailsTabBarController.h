/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITabBarController.h>

@class UIBarButtonItem, PKPaymentTransaction, PKTransactionSource, PKTransactionCloudKitDebugDetailsViewController, PKTransactionSpotlightDebugDetailsViewController;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {

	UIBarButtonItem* _shareButton;
	PKPaymentTransaction* _transaction;
	PKTransactionSource* _transactionSource;
	PKTransactionCloudKitDebugDetailsViewController* _cloudKitViewController;
	PKTransactionSpotlightDebugDetailsViewController* _spotlightViewController;

}
-(void)_handleShareButton:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 transactionSource:(id)arg2 ;
@end

