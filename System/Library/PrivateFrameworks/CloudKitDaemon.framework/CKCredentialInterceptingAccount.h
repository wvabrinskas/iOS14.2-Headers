/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Accounts/ACAccount.h>

@class CKDBackingFakeAccount;

@interface CKCredentialInterceptingAccount : ACAccount {

	CKDBackingFakeAccount* _backingFakeAccount;

}

@property (assign,nonatomic,__weak) CKDBackingFakeAccount * backingFakeAccount;              //@synthesize backingFakeAccount=_backingFakeAccount - In the implementation block
-(BOOL)aa_updateTokensWithProvisioningResponse:(id)arg1 ;
-(CKDBackingFakeAccount *)backingFakeAccount;
-(void)setBackingFakeAccount:(CKDBackingFakeAccount *)arg1 ;
@end
