/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCPurchaseManagerDelegate
@required
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2;
-(void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4;
-(void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;

@end
