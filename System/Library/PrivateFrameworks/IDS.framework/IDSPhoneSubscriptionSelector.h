/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSXPCDaemonController;

@interface IDSPhoneSubscriptionSelector : NSObject {

	id _syncDaemonController;
	/*^block*/id _syncDaemonControllerBuilder;

}

@property (nonatomic,retain) IDSXPCDaemonController * syncDaemonController;              //@synthesize syncDaemonController=_syncDaemonController - In the implementation block
@property (nonatomic,copy) id syncDaemonControllerBuilder;                               //@synthesize syncDaemonControllerBuilder=_syncDaemonControllerBuilder - In the implementation block
-(id)init;
-(void)setSyncDaemonController:(IDSXPCDaemonController *)arg1 ;
-(id)syncDaemonControllerBuilder;
-(void)setSyncDaemonControllerBuilder:(id)arg1 ;
-(void)requestSelectedSubscriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)selectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unselectSubscription:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSelectedSubscriptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)enableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)disableTemporaryPhoneAlias:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(IDSXPCDaemonController *)syncDaemonController;
-(id)initWithSyncDaemonControllerBuilder:(/*^block*/id)arg1 ;
-(void)_performSyncAction:(/*^block*/id)arg1 ;
-(void)requestUnselectedTemporaryPhoneAliasesWithError:(/*^block*/id)arg1 ;
-(id)selectedSubscriptionsWithError:(id*)arg1 ;
-(id)selectSubscription:(id)arg1 withError:(id*)arg2 ;
-(id)unselectSubscription:(id)arg1 withError:(id*)arg2 ;
-(id)setSelectedSubscriptions:(id)arg1 withError:(id*)arg2 ;
-(BOOL)removeTemporaryPhoneAlias:(id)arg1 withError:(id*)arg2 ;
-(BOOL)enableTemporaryPhoneAlias:(id)arg1 withError:(id*)arg2 ;
-(BOOL)disableTemporaryPhoneAlias:(id)arg1 withError:(id*)arg2 ;
-(id)unselectedTemporaryPhoneAliasesWithError:(id*)arg1 ;
@end

