/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTSyncStatusProviderDelegate.h>
#import <libobjc.A.dylib/MTSyncServiceDelegate.h>
#import <libobjc.A.dylib/MTSyncManager.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTSyncService, MTSyncStatusProvider, MTSyncDataModel, NAScheduler;
@class MTSyncChangeQueue, MTMetrics, NSString;

@interface MTSyncServiceManager : NSObject <MTSyncStatusProviderDelegate, MTSyncServiceDelegate, MTSyncManager, MTAgentDiagnosticDelegate> {

	BOOL _started;
	id<MTSyncService> _syncService;
	id<MTSyncStatusProvider> _syncStatusProvider;
	id<MTSyncDataModel> _syncDataModel;
	MTSyncChangeQueue* _syncChangeQueue;
	MTMetrics* _syncMetrics;
	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) id<MTSyncService> syncService;                            //@synthesize syncService=_syncService - In the implementation block
@property (nonatomic,retain) id<MTSyncStatusProvider> syncStatusProvider;              //@synthesize syncStatusProvider=_syncStatusProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MTSyncDataModel> syncDataModel;                 //@synthesize syncDataModel=_syncDataModel - In the implementation block
@property (nonatomic,retain) MTSyncChangeQueue * syncChangeQueue;                      //@synthesize syncChangeQueue=_syncChangeQueue - In the implementation block
@property (nonatomic,retain) MTMetrics * syncMetrics;                                  //@synthesize syncMetrics=_syncMetrics - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                               //@synthesize serializer=_serializer - In the implementation block
@property (assign,nonatomic) BOOL started;                                             //@synthesize started=_started - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSyncService:(id<MTSyncService>)arg1 ;
-(id)pendingChanges;
-(MTMetrics *)syncMetrics;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(void)setSyncMetrics:(MTMetrics *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)setSyncDataModel:(id<MTSyncDataModel>)arg1 ;
-(BOOL)started;
-(id<NAScheduler>)serializer;
-(void)syncChange:(id)arg1 ;
-(id)requestSync:(unsigned long long)arg1 ;
-(void)checkForPendingChanges;
-(void)pendingChangesSent:(id)arg1 ;
-(id)initWithSyncService:(id)arg1 syncStatusProvider:(id)arg2 syncDataModel:(id)arg3 syncMetrics:(id)arg4 ;
-(void)setSyncChangeQueue:(MTSyncChangeQueue *)arg1 ;
-(id<MTSyncDataModel>)syncDataModel;
-(id<MTSyncStatusProvider>)syncStatusProvider;
-(void)applyChange:(id)arg1 ;
-(void)setSyncStatusProvider:(id<MTSyncStatusProvider>)arg1 ;
-(id)initWithSyncService:(id)arg1 syncStatusProvider:(id)arg2 syncDataModel:(id)arg3 syncMetrics:(id)arg4 syncChangeStore:(id)arg5 ;
-(void)resetDataStore;
-(void)syncStatusProvider:(id)arg1 didChangeSyncStatus:(unsigned long long)arg2 ;
-(id<MTSyncService>)syncService;
-(void)stopSyncService;
-(MTSyncChangeQueue *)syncChangeQueue;
-(void)startSyncService;
@end

