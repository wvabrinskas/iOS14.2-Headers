/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>
#import <libobjc.A.dylib/HDApplicationStateMonitorProvider.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol OS_dispatch_queue, HDNanoAlertSuppressionService, HDDaemonTester;
@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, _HKBehavior, NSString, NSObject, HDContentProtectionManager, HDCloudSyncCoordinator, HDPeriodicActivity, HDProcessStateManager, HDProfileManager, NSMutableArray, NSDictionary, HDAnalyticsSubmissionCoordinator, HDAutoBugCaptureReporter, HDRemoteFeatureAvailabilityAssetManager, HDMaintenanceWorkCoordinator, HDQueryManager, HDDaemonConnectionManager, HDTaskServerRegistry, HDDevicePowerMonitor, HDXPCAlarmScheduler, HDXPCEventManager, HDWorkoutPluginDaemonExtension, NSURL;

@interface HDDaemon : NSObject <HDTaskServerClassProvider, HDApplicationStateMonitorProvider, HDDiagnosticObject, LSApplicationWorkspaceObserverProtocol, HDHealthDaemon> {

	_HKBehavior* _behavior;
	NSString* _healthDirectoryPath;
	NSObject*<OS_dispatch_queue> _queue;
	int _languageChangeNotifyToken;
	HDBackgroundTaskScheduler* _backgroundTaskScheduler;
	HDContentProtectionManager* _contentProtectionManager;
	HDCloudSyncCoordinator* _cloudSyncCoordinator;
	HDPeriodicActivity* _periodicActivity;
	HDPluginManager* _pluginManager;
	HDProcessStateManager* _processStateManager;
	HDProfileManager* _profileManager;
	HDPrimaryProfile* _primaryProfile;
	MGNotificationTokenStructRef _deviceNameChangesToken;
	os_unfair_lock_s _daemonReadyLock;
	NSMutableArray* _daemonReadyBlocks;
	long long _numberOfDaemonReadyObserversBeforeReady;
	long long _numberOfDaemonReadyObserversAfterReady;
	BOOL _daemonReady;
	atomic_flag _didStart;
	NSMutableArray* _daemonActivatedBlocks;
	NSDictionary* _daemonExtensionsByIdentifier;
	BOOL _shouldEnqueueMaintenanceWork;
	NSString* _medicalIDDirectoryPath;
	HDAnalyticsSubmissionCoordinator* _analyticsSubmissionCoordinator;
	HDAutoBugCaptureReporter* _autoBugCaptureReporter;
	id<HDNanoAlertSuppressionService> _alertSuppressionService;
	HDRemoteFeatureAvailabilityAssetManager* _remoteFeatureAvailabilityAssetManager;
	HDMaintenanceWorkCoordinator* _maintenanceWorkCoordinator;
	HDQueryManager* _queryManager;
	id<HDDaemonTester> _daemonTester;
	HDDaemonConnectionManager* _connectionManager;
	HDTaskServerRegistry* _taskServerRegistry;
	HDDevicePowerMonitor* _devicePowerMonitor;
	HDXPCAlarmScheduler* _alarmScheduler;
	HDXPCEventManager* _xpcEventManager;

}

@property (assign,nonatomic,__weak) id<HDDaemonTester> daemonTester;                                                         //@synthesize daemonTester=_daemonTester - In the implementation block
@property (assign,nonatomic) BOOL shouldEnqueueMaintenanceWork;                                                              //@synthesize shouldEnqueueMaintenanceWork=_shouldEnqueueMaintenanceWork - In the implementation block
@property (nonatomic,readonly) HDDaemonConnectionManager * connectionManager;                                                //@synthesize connectionManager=_connectionManager - In the implementation block
@property (nonatomic,readonly) HDTaskServerRegistry * taskServerRegistry;                                                    //@synthesize taskServerRegistry=_taskServerRegistry - In the implementation block
@property (nonatomic,readonly) HDDevicePowerMonitor * devicePowerMonitor;                                                    //@synthesize devicePowerMonitor=_devicePowerMonitor - In the implementation block
@property (nonatomic,readonly) HDXPCAlarmScheduler * alarmScheduler;                                                         //@synthesize alarmScheduler=_alarmScheduler - In the implementation block
@property (nonatomic,readonly) HDXPCEventManager * xpcEventManager;                                                          //@synthesize xpcEventManager=_xpcEventManager - In the implementation block
@property (nonatomic,readonly) HDWorkoutPluginDaemonExtension * workoutPluginExtension; 
@property (readonly) _HKBehavior * behavior; 
@property (copy,readonly) NSString * healthDirectoryPath; 
@property (copy,readonly) NSURL * healthDirectoryURL; 
@property (copy,readonly) NSString * medicalIDDirectoryPath;                                                                 //@synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath - In the implementation block
@property (nonatomic,readonly) HDAnalyticsSubmissionCoordinator * analyticsSubmissionCoordinator;                            //@synthesize analyticsSubmissionCoordinator=_analyticsSubmissionCoordinator - In the implementation block
@property (nonatomic,readonly) HDAutoBugCaptureReporter * autoBugCaptureReporter;                                            //@synthesize autoBugCaptureReporter=_autoBugCaptureReporter - In the implementation block
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService;                                      //@synthesize alertSuppressionService=_alertSuppressionService - In the implementation block
@property (nonatomic,readonly) HDCloudSyncCoordinator * cloudSyncCoordinator;                                                //@synthesize cloudSyncCoordinator=_cloudSyncCoordinator - In the implementation block
@property (nonatomic,readonly) HDContentProtectionManager * contentProtectionManager; 
@property (nonatomic,readonly) HDRemoteFeatureAvailabilityAssetManager * remoteFeatureAvailabilityAssetManager;              //@synthesize remoteFeatureAvailabilityAssetManager=_remoteFeatureAvailabilityAssetManager - In the implementation block
@property (nonatomic,readonly) HDMaintenanceWorkCoordinator * maintenanceWorkCoordinator;                                    //@synthesize maintenanceWorkCoordinator=_maintenanceWorkCoordinator - In the implementation block
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile;                                                            //@synthesize primaryProfile=_primaryProfile - In the implementation block
@property (nonatomic,readonly) HDProcessStateManager * processStateManager; 
@property (nonatomic,readonly) HDProfileManager * profileManager; 
@property (nonatomic,readonly) HDQueryManager * queryManager;                                                                //@synthesize queryManager=_queryManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
-(HDDaemonConnectionManager *)connectionManager;
-(HDAutoBugCaptureReporter *)autoBugCaptureReporter;
-(id)_newPrimaryProfile;
-(void)unitTest_taskServerDidInit:(id)arg1 ;
-(id)IDSServiceWithIdentifier:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(void)_terminationCleanup;
-(void)start;
-(id)_newBackgroundTaskScheduler;
-(BOOL)_shouldInitializeDaemon;
-(NSString *)healthDirectoryPath;
-(void)_handleDistributedNotificationWithName:(const char*)arg1 event:(id)arg2 ;
-(HDDevicePowerMonitor *)devicePowerMonitor;
-(id)init;
-(void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nanoPairedDeviceRegistry;
-(id)pairedSyncCoordinatorWithServiceName:(id)arg1 ;
-(id)_newProcessStateManager;
-(id)_newProfileManager;
-(void)_handleDarwinNotificationWithName:(const char*)arg1 event:(id)arg2 ;
-(_HKBehavior *)behavior;
-(HDQueryManager *)queryManager;
-(id<HDDaemonTester>)daemonTester;
-(HDPrimaryProfile *)primaryProfile;
-(HDAnalyticsSubmissionCoordinator *)analyticsSubmissionCoordinator;
-(HDXPCEventManager *)xpcEventManager;
-(id)mainQueue;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(id)daemonExtensionWithIdentifier:(id)arg1 ;
-(id)_newMaintenanceWorkCoordinator;
-(id)_newConnectionManager;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 ;
-(void)registerDaemonActivatedObserver:(id)arg1 queue:(id)arg2 ;
-(void)_setUpDarwinNotificationEventHandler;
-(void)_handleLaunchServicesEvent:(id)arg1 name:(id)arg2 ;
-(HDCloudSyncCoordinator *)cloudSyncCoordinator;
-(void)_notifyDaemonReadyObservers;
-(NSURL *)healthDirectoryURL;
-(id)_newBehavior;
-(id)_newReferenceOntologyAsset;
-(id)_newAutoBugCaptureReporter;
-(id)_newCloudSyncCoordinator;
-(void)_setUpDistributedNotificationEventHandler;
-(void)_unregisterLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(void)terminateClean:(BOOL)arg1 reason:(id)arg2 ;
-(void)_registerLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(HDRemoteFeatureAvailabilityAssetManager *)remoteFeatureAvailabilityAssetManager;
-(id)initWithContainerDirectoryPath:(id)arg1 ;
-(id)taskServerClasses;
-(HDWorkoutPluginDaemonExtension *)workoutPluginExtension;
-(id)healthDirectorySizeInBytes;
-(void)_setUpLaunchEventHandlers;
-(void)_localeOrLanguageChanged:(id)arg1 ;
-(void)_resetPrivacySettings;
-(void)unitTest_didCreateProfile:(id)arg1 ;
-(void)unitTest_queryServerDidInit:(id)arg1 ;
-(id)daemonExtensionsConformingToProtocol:(id)arg1 ;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4 ;
-(id)_bundleIdentifiersToTerminateAfterObliteration;
-(void)_registerForDeviceNameChanges;
-(void)_setupMemoryWarningHandler;
-(HDTaskServerRegistry *)taskServerRegistry;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(id)createApplicationStateMonitor;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2 ;
-(void)_updateCurrentDeviceName;
-(void)setAlertSuppressionService:(id<HDNanoAlertSuppressionService>)arg1 ;
-(void)setShouldEnqueueMaintenanceWork:(BOOL)arg1 ;
-(void)_notifyDaemonActivatedObservers;
-(id)_newContentProtectionManager;
-(id)_newAnalyticsSubmissionCoordinator;
-(id)_newPluginManager;
-(NSString *)medicalIDDirectoryPath;
-(id)healthLiteUserDefaultsDomain;
-(void)registerForDaemonReady:(id)arg1 ;
-(id)healthDomainAccessorWithPairedDevice:(id)arg1 ;
-(void)_postDaemonLaunchDarwinNotification;
-(BOOL)shouldEnqueueMaintenanceWork;
-(id)createApplicationStateMonitorWithBundleIDs:(id)arg1 states:(unsigned)arg2 elevatedPriority:(BOOL)arg3 ;
-(void)invalidateAllServersForProfile:(id)arg1 ;
-(void)_handleSigterm;
-(HDXPCAlarmScheduler *)alarmScheduler;
-(void)setDaemonTester:(id<HDDaemonTester>)arg1 ;
-(void)invalidateAndWait;
-(void)exitClean:(BOOL)arg1 reason:(id)arg2 ;
-(void)_terminateAndKillClientsForObliteration:(id)arg1 ;
-(HDProcessStateManager *)processStateManager;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)_setUpSignalHandlers;
-(void)obliterateAndTerminateProfiles:(id)arg1 options:(unsigned long long)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(HDMaintenanceWorkCoordinator *)maintenanceWorkCoordinator;
-(HDContentProtectionManager *)contentProtectionManager;
-(id)diagnosticDescription;
-(HDPluginManager *)pluginManager;
-(void)dealloc;
-(HDProfileManager *)profileManager;
@end

