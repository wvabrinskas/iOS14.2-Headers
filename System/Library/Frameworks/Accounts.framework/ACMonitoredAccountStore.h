/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Accounts/ACAccountStore.h>
#import <libobjc.A.dylib/ACRemoteAccountStoreSessionDelegate.h>

@protocol ACMonitoredAccountStoreDelegateProtocol, NSObject;
@class NSSet, NSMutableDictionary, NSArray, NSString;

@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate> {

	NSSet* _accountTypesToMonitor;
	NSMutableDictionary* _accountsByID;
	id<ACMonitoredAccountStoreDelegateProtocol> _delegate;
	id<NSObject> _credentialsDidChangeObserver;

}

@property (readonly) NSArray * monitoredAccounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 accountTypes:(id)arg3 delegate:(id)arg4 ;
-(void)_registerAccountMonitorSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForCredentialChangedNotifications;
-(void)_processAccountsListForNotifications:(id)arg1 ;
-(void)_registerAccountMonitorWithCompletion:(/*^block*/id)arg1 ;
-(void)accountWasRemoved:(id)arg1 ;
-(id)initWithAccountTypes:(id)arg1 delegate:(id)arg2 ;
-(id)monitoredAccountWithIdentifier:(id)arg1 ;
-(void)credentialsChangedNotification:(id)arg1 ;
-(void)registerSynchronouslyWithError:(id*)arg1 ;
-(id)connectionDelegate;
-(NSArray *)monitoredAccounts;
-(void)accountWasAdded:(id)arg1 ;
-(void)connectionClosed;
-(void)_accountsListPopulated:(id)arg1 ;
-(void)registerWithCompletion:(/*^block*/id)arg1 ;
-(void)accountWasModified:(id)arg1 ;
-(void)_reregister;
-(void)dealloc;
@end
