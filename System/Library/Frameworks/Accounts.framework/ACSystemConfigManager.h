/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Accounts/Accounts-Structs.h>
@class NSObject;

@interface ACSystemConfigManager : NSObject {

	NSObject*<OS_dispatch_queue> _preferencesQueue;
	SCPreferencesRef _preferencesSession;
	int _applySkipCount;

}
+(id)sharedInstance;
+(void)_tearDown;
+(void)_scheduleSharedInstanceTeardown;
+(id)_livingInstance;
+(unsigned long long)_timeoutInterval;
-(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2 ;
-(id)init;
-(void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2 ;
-(void)_handleSCPreferencesSessionNotification:(unsigned)arg1 ;
-(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(void)_destroySCPreferencesSession;
-(void)_createSCPreferencesSession;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)dealloc;
@end
