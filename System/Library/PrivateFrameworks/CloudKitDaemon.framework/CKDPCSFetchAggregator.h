/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKDClientContext, NSObject, NSOperationQueue, NSMutableArray;

@interface CKDPCSFetchAggregator : NSObject {

	BOOL _skipQueuedFetchCycleDetection;
	CKDClientContext* _context;
	NSObject*<OS_dispatch_queue> _opQueue;
	NSOperationQueue* _queue;
	NSMutableArray* _queuedFetches;
	NSMutableArray* _runningFetches;
	NSObject*<OS_dispatch_source> _fetchSource;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (assign,nonatomic,__weak) CKDClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> opQueue;                   //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedFetches;                         //@synthesize queuedFetches=_queuedFetches - In the implementation block
@property (nonatomic,retain) NSMutableArray * runningFetches;                        //@synthesize runningFetches=_runningFetches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> fetchSource;              //@synthesize fetchSource=_fetchSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (assign,nonatomic) BOOL skipQueuedFetchCycleDetection;                     //@synthesize skipQueuedFetchCycleDetection=_skipQueuedFetchCycleDetection - In the implementation block
-(void)cancelAllOperations;
-(NSObject*<OS_dispatch_source>)timerSource;
-(BOOL)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2 ;
-(void)setFetchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_lockedTearDownFetchTimer;
-(id)init;
-(NSMutableArray *)queuedFetches;
-(void)setSkipQueuedFetchCycleDetection:(BOOL)arg1 ;
-(void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)skipQueuedFetchCycleDetection;
-(void)setRunningFetches:(NSMutableArray *)arg1 ;
-(CKDClientContext *)context;
-(void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setQueuedFetches:(NSMutableArray *)arg1 ;
-(void)_lockedFetchesAreReady;
-(void)setOpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)fetchSource;
-(void)_lockedRescheduleFetchTimer;
-(NSMutableArray *)runningFetches;
-(NSObject*<OS_dispatch_queue>)opQueue;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)dealloc;
@end

