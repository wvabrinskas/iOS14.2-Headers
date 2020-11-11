/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NPKPeerPaymentAccountManager.h>

@protocol OS_dispatch_queue;
@class PKPeerPaymentAccount, NSObject;

@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager {

	PKPeerPaymentAccount* _mockAccount;
	NSObject*<OS_dispatch_queue> _accountQueue;
	unsigned long long _balanceOffset;

}
+(id)sharedInstance;
-(id)account;
-(id)initWithPeerPaymentService:(id)arg1 ;
-(void)dealloc;
-(void)_updateMockBalance;
@end
