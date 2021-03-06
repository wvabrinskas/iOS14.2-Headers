/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNACAccountProvider.h>

@class ACAccountStore;

@interface _CNACAccountStoreBasedProvider : CNACAccountProvider {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)initWithAccountStore:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1 ;
-(id)allAccountTypes;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(ACAccountStore *)accountStore;
@end

