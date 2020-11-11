/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>

@protocol PKPaymentDataProvider, PKDashboardTransactionFetcherDelegate, OS_dispatch_queue;
@class PKTransactionSource, NSObject, PKMerchant, NSSet, PKInstallmentPlan, NSArray, PKCurrencyAmount, NSDecimalNumber, PKPaymentPass, NSString, NSDictionary, NSDate;

@interface PKDashboardTransactionFetcher : NSObject <PKPaymentDataProviderDelegate> {

	PKTransactionSource* _transactionSource;
	id<PKPaymentDataProvider> _paymentDataProvider;
	id<PKDashboardTransactionFetcherDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	os_unfair_lock_s _lockUpdate;
	BOOL _pendingUpdate;
	BOOL _hasMoreUpdates;
	PKMerchant* _merchant;
	NSSet* _counterpartHandles;
	long long _merchantCategory;
	long long _transactionType;
	PKInstallmentPlan* _installmentPlan;
	NSArray* _regions;
	NSArray* _types;
	NSArray* _sources;
	NSArray* _statuses;
	PKCurrencyAmount* _amount;
	long long _amountComparison;
	NSSet* _tags;
	NSDecimalNumber* _rewardsValue;
	unsigned long long _rewardsValueUnit;
	long long _subType;
	unsigned long long _limit;
	PKPaymentPass* _cashbackPass;
	NSString* _cashbackPassUniqueID;
	NSSet* _cashbackPassTransactionSourceIdentifiers;
	BOOL _needsCashbackUniqueID;
	NSDictionary* _cashbackGroups;
	BOOL _needsInstantWithdrawalFees;
	NSArray* _instantWithdrawalFeeGroups;
	unsigned long long _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic,__weak) id<PKDashboardTransactionFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSSet * counterpartHandles;                                           //@synthesize counterpartHandles=_counterpartHandles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRegions:(id)arg1 transactionSource:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)filterMerchant:(id)arg1 ;
-(void)filterCategory:(long long)arg1 ;
-(id)initWithMerchantCategory:(long long)arg1 transactionSource:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)filterRegions:(id)arg1 ;
-(id)initWithMerchant:(id)arg1 transactionSource:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)reloadTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(NSDate *)endDate;
-(id<PKDashboardTransactionFetcherDelegate>)delegate;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(id)initWithCounterpartHandles:(id)arg1 transactionSource:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)filterTypes:(id)arg1 ;
-(void)filterSources:(id)arg1 ;
-(void)filterStatuses:(id)arg1 ;
-(void)filterAmount:(id)arg1 comparison:(long long)arg2 ;
-(void)filterRewardsValue:(id)arg1 unit:(unsigned long long)arg2 ;
-(void)filterPeerPaymentSubType:(long long)arg1 ;
-(NSDate *)startDate;
-(id)cashbackGroupForDateComponents:(id)arg1 ;
-(id)_sortedTransactions:(id)arg1 ascending:(BOOL)arg2 ;
-(void)setDelegate:(id<PKDashboardTransactionFetcherDelegate>)arg1 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)_commonSetup;
-(unsigned long long)type;
-(id)instantWithdrawalFeesTransactionGroups;
-(id)initWithTransactionSource:(id)arg1 paymentDataProvider:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)_processPaymentPassTransactionsWithTransactions:(id)arg1 sendTransactionsBlock:(/*^block*/id)arg2 ;
-(id)_transactionRequestForCurrentFilters;
-(id)_feeTotalForTransaction:(id)arg1 ;
-(void)_addCashbackTransactions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addInstantWidthdrawalTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)filterTags:(id)arg1 ;
-(void)_sendUpdatedTransactions;
-(id)cashbackPass;
-(NSSet *)counterpartHandles;
-(id)initWithTransactionType:(long long)arg1 transactionSource:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)cashbackGroupForTransactionWithIdentifier:(id)arg1 ;
-(void)transactionsYearlyCountsWithCompletion:(/*^block*/id)arg1 ;
-(void)transactionsMonthlyAmountsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithInstallmentPlan:(id)arg1 transactionSource:(id)arg2 paymentDataProvider:(id)arg3 ;
@end
