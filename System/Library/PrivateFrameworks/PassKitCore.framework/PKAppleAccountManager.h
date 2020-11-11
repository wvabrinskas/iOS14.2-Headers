/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) PKAppleAccountInformation * appleAccountInformation; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
+(id)sharedInstance;
-(PKAppleAccountInformation *)appleAccountInformation;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_aidaAccount;
-(ACAccountStore *)accountStore;
-(id)_primaryAppleAccount;
@end
