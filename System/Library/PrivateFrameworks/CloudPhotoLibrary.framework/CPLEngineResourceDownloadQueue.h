/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDate, CPLPlatformObject, NSString;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject> {

	NSObject*<OS_dispatch_queue> _downloadLock;
	NSArray* _allQueues;
	NSArray* _allHighPriorityQueues;
	NSArray* _allLowPriorityQueues;
	NSArray* _bestCancellableLowPriorityQueues;
	/*^block*/id _highPriorityQueuePerResourceTypeAndTransferIntent;
	/*^block*/id _lowPriorityQueuePerResourceTypeAndTransferIntent;
	unsigned long long _inflightTransferTasksCount;
	unsigned long long _transferTasksBurstCount;
	unsigned long long _lastTransferTasksBurstCount;
	NSDate* _lastTransferTaskBurstDate;
	BOOL _shouldRequestABackgroundDownloadSyncPhase;

}

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldRetryDownloadOnError:(id)arg1 ;
-(void)barrier;
-(id)status;
-(unsigned long long)scopeType;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(id)cloudResourceForLocalResource:(id*)arg1 shouldNotTrustCaches:(BOOL*)arg2 transportScope:(id*)arg3 error:(id*)arg4 ;
-(id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 intent:(unsigned long long)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(/*^block*/id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 intent:(unsigned long long)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(/*^block*/id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_failedTaskWithCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 resource:(id)arg3 taskIdentifier:(id)arg4 intent:(unsigned long long)arg5 ;
-(id)_resourceStorageCopyTaskForResource:(id)arg1 taskIdentifier:(id)arg2 cloudResource:(id)arg3 didStartHandler:(/*^block*/id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_realDownloadTaskForLocalResource:(id)arg1 taskIdentifier:(id)arg2 cloudResource:(id)arg3 didStartHandler:(/*^block*/id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)_shouldTryLowPriorityDownloadWithError:(id*)arg1 ;
-(unsigned long long)_transportTaskCount;
-(id)_bestLowPriorityQueueWithCancellableTransportTasks;
-(BOOL)_canScheduleBackgroundDownloads;
-(BOOL)_launchTransportTaskForQueue:(id)arg1 ;
-(void)_dispatchTransportTasksIfNecessary;
-(id)_activeQueueForTransferTask:(id)arg1 ;
-(id)createGroupForBackgroundDownloadsOfResourceType:(unsigned long long)arg1 transferIntent:(unsigned long long)arg2 transport:(id)arg3 ;
-(void)_enqueueTransferTaskInActiveQueue:(id)arg1 ;
-(void)_dequeueTransferTaskInActiveQueue:(id)arg1 ;
-(void)_scheduleBackgroundDownloadsIfNecessary;
-(void)_requestBackgroundDownloads;
-(void)_unscheduleBackgroundDownloads;
-(BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 intent:(unsigned long long)arg2 downloading:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 bumpRetryCount:(BOOL)arg2 didDiscard:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 error:(id*)arg2 ;
-(id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 andIntent:(unsigned long long)arg2 maximumSize:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1 ;
-(BOOL)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorForDownloadedResources;
-(unsigned long long)countOfQueuedDownloadTasks;
-(BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
-(id)_queuesStatus;
@end
