/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject, br_pacer, brc_task_tracker, NSString;

@interface BRCRecentsEnumerator : NSObject <BRCModule> {

	BRCAccountSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	br_pacer* _pacer;
	BOOL _readyForIndexing;
	unsigned long long _flushedNotifRank;
	brc_task_tracker* _tracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
+(id)fileProviderManager;
+(void)dropLegacyCoreSpotlightIndexIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dropRecentsForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)close;
-(BOOL)isCancelled;
-(void)resume;
-(void)cancel;
-(void)dealloc;
-(void)maxNotifRankWasFlushed;
-(id)initWithAccountSession:(id)arg1 ;
-(void)dropIndexForClientZone:(id)arg1 ;
-(void)fileObjectID:(id)arg1 isNoLongerIndexableForNotifRank:(unsigned long long)arg2 itemIsLive:(BOOL)arg3 ;
-(void)_signalActiveSetDidChange;
-(void)_readyForIndexingWithAckedRank:(unsigned long long)arg1 ;
-(id)changeTokenForNotifRank:(unsigned long long)arg1 ;
-(void)_deleteAllRanks;
-(id)_deletedDocIdResultSetFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(void)garbageCollectRanksPreceding:(unsigned long long)arg1 ;
-(void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_activeSetDidChange;
-(void)enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

