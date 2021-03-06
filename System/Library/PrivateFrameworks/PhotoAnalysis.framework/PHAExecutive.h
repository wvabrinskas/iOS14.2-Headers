/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol PFDTransactionDispatchQueue, OS_voucher, OS_xpc_object, OS_dispatch_source;
@class PFSerialQueue, NSObject, NSMutableArray, PHAActivityLog, NSMutableSet, NSMutableDictionary, PHAPhotoLibraryList, PHASleepWakeMonitor, NSString;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, NSXPCListenerDelegate> {

	BOOL _isPhotoAnalysisAgent;
	BOOL _backgroundAnalysisActivityTriggered;
	PFSerialQueue*<PFDTransactionDispatchQueue> _executiveStateQueue;
	NSObject*<OS_voucher> _turboModeBoostVoucher;
	NSMutableArray* _processingLog;
	PHAActivityLog* _currentLog;
	NSMutableArray* _cachedTurboLibraryURLs;
	NSObject*<OS_xpc_object> _turboAnalysisActivity;
	os_unfair_lock_s _turboLibrariesLock;
	NSMutableSet* _pendingBackgroundLibraries;
	os_unfair_lock_s _connectedClientsLock;
	BOOL _shouldDeferActivity;
	unsigned char _state;
	PHAActivityLog* _activityLog;
	NSMutableSet* _clients;
	NSMutableDictionary* _managersByLibraryPath;
	PHAPhotoLibraryList* _photoLibraryList;
	PHASleepWakeMonitor* _sleepWakeMonitor;
	long long _countOfCoordinatorsRunningBackgroundAnalysis;
	NSObject*<OS_dispatch_source> _backgroundAnalysisMonitorTimer;
	NSObject*<OS_xpc_object> _backgroundAnalysisActivity;

}

@property (retain) NSMutableSet * clients;                                                    //@synthesize clients=_clients - In the implementation block
@property (retain) NSMutableDictionary * managersByLibraryPath;                               //@synthesize managersByLibraryPath=_managersByLibraryPath - In the implementation block
@property (assign) unsigned char state;                                                       //@synthesize state=_state - In the implementation block
@property (retain) PHAPhotoLibraryList * photoLibraryList;                                    //@synthesize photoLibraryList=_photoLibraryList - In the implementation block
@property (retain) PHASleepWakeMonitor * sleepWakeMonitor;                                    //@synthesize sleepWakeMonitor=_sleepWakeMonitor - In the implementation block
@property (assign) long long countOfCoordinatorsRunningBackgroundAnalysis;                    //@synthesize countOfCoordinatorsRunningBackgroundAnalysis=_countOfCoordinatorsRunningBackgroundAnalysis - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> backgroundAnalysisMonitorTimer;              //@synthesize backgroundAnalysisMonitorTimer=_backgroundAnalysisMonitorTimer - In the implementation block
@property (retain) NSObject*<OS_xpc_object> backgroundAnalysisActivity;                       //@synthesize backgroundAnalysisActivity=_backgroundAnalysisActivity - In the implementation block
@property (readonly) PHAActivityLog * activityLog;                                            //@synthesize activityLog=_activityLog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootDateForTurboLibraryRegistration;
+(void)unregisterBackgroundActivities;
-(void)shutdown;
-(NSMutableSet *)clients;
-(id)statusAsDictionary;
-(void)handleOperation:(id)arg1 ;
-(void)_startBackgroundAnalysis;
-(void)_registerBackgroundActivity;
-(NSMutableDictionary *)managersByLibraryPath;
-(void)terminateManagerForPhotoLibraryURL:(id)arg1 ;
-(void)_stopAllBackgroundAnalysisWithCompletion:(/*^block*/id)arg1 ;
-(void)removeClientHandler:(id)arg1 ;
-(void)enableTurboModeForManager:(id)arg1 ;
-(void)setBackgroundAnalysisMonitorTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)setState:(unsigned char)arg1 ;
-(NSObject*<OS_dispatch_source>)backgroundAnalysisMonitorTimer;
-(void)stopAllBackgroundActivities;
-(void)writeQALog:(id)arg1 ;
-(void)_backgroundActivityDidBegin;
-(void)setClients:(NSMutableSet *)arg1 ;
-(long long)countOfCoordinatorsRunningBackgroundAnalysis;
-(BOOL)_photoAnalysisEnabled;
-(void)stopBackgroundActivityForManager:(id)arg1 ;
-(void)triggerBackgroundActivity;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(unsigned char)state;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(PHAPhotoLibraryList *)photoLibraryList;
-(void)setBackgroundAnalysisActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_installBackgroundAnalysisMonitor;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_runTurboProcessing:(id)arg1 ;
-(void)setPhotoLibraryList:(PHAPhotoLibraryList *)arg1 ;
-(BOOL)turboIsEnabledForManager:(id)arg1 ;
-(NSObject*<OS_xpc_object>)backgroundAnalysisActivity;
-(void)_registerCuratedLibraryActivity;
-(void)setSleepWakeMonitor:(PHASleepWakeMonitor *)arg1 ;
-(id)clientInfoForManager:(id)arg1 ;
-(void)checkQuiescenceForManager:(id)arg1 ;
-(void)dispatchAsyncToExecutiveStateQueue:(/*^block*/id)arg1 ;
-(void)setCountOfCoordinatorsRunningBackgroundAnalysis:(long long)arg1 ;
-(BOOL)_photoAnalysCoreDuetSchedulingDisabled;
-(void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg1 ;
-(PHASleepWakeMonitor *)sleepWakeMonitor;
-(void)setupAnalyticsEnvironment;
-(BOOL)hasConnectedClientsForManager:(id)arg1 ;
-(void)disableTurboModeForManager:(id)arg1 ;
-(id)managerForPhotoLibraryURL:(id)arg1 ;
-(void)setManagersByLibraryPath:(NSMutableDictionary *)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)_registerTurboActivity;
-(void)dumpStatusToLog;
-(void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)arg1 skipActivityStateCheck:(BOOL)arg2 ;
-(void)startup;
-(void)addProcessingActivityToStatusDictionary:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasPhotosConnectionForManager:(id)arg1 ;
-(PHAActivityLog *)activityLog;
@end

