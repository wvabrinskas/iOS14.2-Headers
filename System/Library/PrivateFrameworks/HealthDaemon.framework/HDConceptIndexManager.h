/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@protocol HDBlockDispatcher;
@class HDProfile, HKObserverSet, NSMutableArray, HDConceptIndexer, NSString;

@interface HDConceptIndexManager : NSObject <HDDataObserver> {

	id<HDBlockDispatcher> _dispatcher;
	unsigned long long _batchSize;
	HDProfile* _profile;
	BOOL _isEnabled;
	HKObserverSet* _observerSet;
	NSMutableArray* _completionBlocks;
	os_unfair_lock_s _executionStateLock;
	unsigned long long _executionState;
	HDConceptIndexer* _conceptIndexer;

}

@property (nonatomic,readonly) HDConceptIndexer * conceptIndexer;              //@synthesize conceptIndexer=_conceptIndexer - In the implementation block
@property (readonly) unsigned long long currentExecutionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateConceptIndexWithBlockDispatcher:(id)arg1 conceptIndexer:(id)arg2 batchSize:(long long)arg3 initialCount:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)updateWithDescription:(id)arg1 ;
-(void)startWithDescription:(id)arg1 ;
-(void)resetWithReindex:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)updateConceptIndexWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)currentExecutionState;
-(void)addObserver:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(HDConceptIndexer *)conceptIndexer;
-(id)initWithBlockDispatcher:(id)arg1 batchSize:(unsigned long long)arg2 profile:(id)arg3 ;
-(void)stopWithDescription:(id)arg1 ;
-(void)invalidateAndWait;
@end
