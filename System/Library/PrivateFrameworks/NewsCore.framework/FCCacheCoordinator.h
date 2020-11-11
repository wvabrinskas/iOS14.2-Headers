/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol FCCacheCoordinatorDelegate, FCCacheCoordinatorLocking, FCOperationThrottler;
@class NSMutableSet, NSCountedSet, FCThreadSafeMutableDictionary, NFUnfairLock, FCCacheCoordinatorFlushPolicy, NSSet, NSString;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate> {

	BOOL _flushingEnabled;
	id<FCCacheCoordinatorDelegate> _delegate;
	NSMutableSet* _storedKeys;
	NSCountedSet* _interestedKeys;
	FCThreadSafeMutableDictionary* _cacheHintsByKey;
	NFUnfairLock* _interestLock;
	id<FCCacheCoordinatorLocking> _underlyingLock;
	id<FCOperationThrottler> _flushThrottler;
	FCCacheCoordinatorFlushPolicy* _flushPolicy;

}

@property (nonatomic,retain) NSMutableSet * storedKeys;                                    //@synthesize storedKeys=_storedKeys - In the implementation block
@property (nonatomic,retain) NSCountedSet * interestedKeys;                                //@synthesize interestedKeys=_interestedKeys - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableDictionary * cacheHintsByKey;              //@synthesize cacheHintsByKey=_cacheHintsByKey - In the implementation block
@property (nonatomic,retain) NFUnfairLock * interestLock;                                  //@synthesize interestLock=_interestLock - In the implementation block
@property (nonatomic,retain) id<FCCacheCoordinatorLocking> underlyingLock;                 //@synthesize underlyingLock=_underlyingLock - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> flushThrottler;                      //@synthesize flushThrottler=_flushThrottler - In the implementation block
@property (retain) FCCacheCoordinatorFlushPolicy * flushPolicy;                            //@synthesize flushPolicy=_flushPolicy - In the implementation block
@property (getter=isFlushingEnabled) BOOL flushingEnabled;                                 //@synthesize flushingEnabled=_flushingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<FCCacheCoordinatorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * keysWithZeroInterest; 
@property (nonatomic,readonly) NSSet * keysWithNonZeroInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performReadSync:(/*^block*/id)arg1 ;
-(id)init;
-(void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2 ;
-(id<FCCacheCoordinatorDelegate>)delegate;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)setFlushThrottler:(id<FCOperationThrottler>)arg1 ;
-(void)performCacheWrite:(/*^block*/id)arg1 ;
-(void)addInterestInKeys:(id)arg1 ;
-(void)setupWithInitialKeys:(id)arg1 ;
-(FCCacheCoordinatorFlushPolicy *)flushPolicy;
-(void)removeInterestInKeys:(id)arg1 ;
-(NFUnfairLock *)interestLock;
-(void)setDelegate:(id<FCCacheCoordinatorDelegate>)arg1 ;
-(NSCountedSet *)interestedKeys;
-(NSMutableSet *)storedKeys;
-(id)holdTokenForKey:(id)arg1 ;
-(void)didAccessKeys:(id)arg1 ;
-(id)holdTokensForKeys:(id)arg1 ;
-(void)setInterestedKeys:(NSCountedSet *)arg1 ;
-(BOOL)cacheContainsKey:(id)arg1 ;
-(id<FCOperationThrottler>)flushThrottler;
-(id<FCCacheCoordinatorLocking>)underlyingLock;
-(void)setStoredKeys:(NSMutableSet *)arg1 ;
-(void)setFlushPolicy:(FCCacheCoordinatorFlushPolicy *)arg1 ;
-(void)_modifyCacheHintForKeys:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performCacheRead:(/*^block*/id)arg1 ;
-(FCThreadSafeMutableDictionary *)cacheHintsByKey;
-(id)holdTokenForKeys:(id)arg1 ;
-(void)setUnderlyingLock:(id<FCCacheCoordinatorLocking>)arg1 ;
-(id)persistableHints;
-(void)setCacheHintsByKey:(FCThreadSafeMutableDictionary *)arg1 ;
-(void)setInterestLock:(NFUnfairLock *)arg1 ;
-(void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2 ;
-(BOOL)isFlushingEnabled;
-(void)enableFlushingWithPolicy:(id)arg1 ;
-(void)didRemoveKeysFromCache:(id)arg1 ;
-(void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2 ;
-(NSSet *)keysWithZeroInterest;
-(void)setFlushingEnabled:(BOOL)arg1 ;
-(id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2 ;
-(void)dealloc;
-(NSSet *)keysWithNonZeroInterest;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
@end
