/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@protocol OS_dispatch_queue;
@class NSDate, NSError, CKRecordID, NSNumber, NSObject, IMDRecordZoneManager, IMDCKDatabaseManager;

@interface IMDCKExitManager : IMDCKAbstractSyncController {

	BOOL _fetchedExitDateOnLaunch;
	NSDate* _exitRecordDate;
	NSError* _errorFetchingExitDate;
	CKRecordID* _exitRecordID;
	NSNumber* _saltZoneCreatedOverride;
	NSNumber* _subscriptionCreatedOverride;
	NSObject*<OS_dispatch_queue> _ckQueue;
	IMDRecordZoneManager* _recordZoneManager;
	IMDCKDatabaseManager* _databaseManager;

}

@property (nonatomic,retain) CKRecordID * exitRecordID;                             //@synthesize exitRecordID=_exitRecordID - In the implementation block
@property (nonatomic,retain) NSNumber * saltZoneCreatedOverride;                    //@synthesize saltZoneCreatedOverride=_saltZoneCreatedOverride - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionCreatedOverride;                //@synthesize subscriptionCreatedOverride=_subscriptionCreatedOverride - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;                //@synthesize ckQueue=_ckQueue - In the implementation block
@property (nonatomic,retain) IMDRecordZoneManager * recordZoneManager;              //@synthesize recordZoneManager=_recordZoneManager - In the implementation block
@property (nonatomic,retain) IMDCKDatabaseManager * databaseManager;                //@synthesize databaseManager=_databaseManager - In the implementation block
@property (nonatomic,retain) NSDate * exitRecordDate;                               //@synthesize exitRecordDate=_exitRecordDate - In the implementation block
@property (nonatomic,retain) NSError * errorFetchingExitDate;                       //@synthesize errorFetchingExitDate=_errorFetchingExitDate - In the implementation block
@property (assign,nonatomic) BOOL fetchedExitDateOnLaunch;                          //@synthesize fetchedExitDateOnLaunch=_fetchedExitDateOnLaunch - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_sharedCKUtilities;
-(BOOL)_canSubmitCloudKitAnalytic;
-(void)_scheduleOperation:(id)arg1 ;
-(void)_setUpSubscription;
-(BOOL)_subscriptionCreated;
-(void)_submitCloudKitMetricWithOperationGroupName:(id)arg1 record:(id)arg2 useManatee:(BOOL)arg3 ignoreZoneNotFoundError:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_analyticZoneCreated;
-(void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
-(void)_fetchExitRecordDateWithCompletion:(/*^block*/id)arg1 ;
-(void)setSubscriptionCreatedOverride:(NSNumber *)arg1 ;
-(long long)derivedQualityOfService;
-(void)writeExitRecordWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFetchedExitDateOnLaunch:(BOOL)arg1 ;
-(IMDCKDatabaseManager *)databaseManager;
-(void)submitCloudKitAnalyticWithDictionary:(id)arg1 operationGroupName:(id)arg2 useManatee:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initRecordZoneManager:(id)arg1 databaseManager:(id)arg2 ;
-(void)submitCloudKitMetricWithOperationGroupName:(id)arg1 useManatee:(BOOL)arg2 ;
-(void)exitRecordDateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_saltZoneCreated;
-(void)setRecordZoneManager:(IMDRecordZoneManager *)arg1 ;
-(id)analyticZoneRecordID;
-(void)submitCloudKitAnalyticWithOperationGroupName:(id)arg1 useManatee:(BOOL)arg2 analyticDictionary:(id)arg3 ;
-(void)submitCloudKitMetricWithData:(id)arg1 operationGroupName:(id)arg2 useManatee:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setExitRecordDate:(NSDate *)arg1 ;
-(NSError *)errorFetchingExitDate;
-(void)deleteExitRecordWithCompletion:(/*^block*/id)arg1 ;
-(void)writeInitialSyncCompletedRecordIfNeeded;
-(IMDRecordZoneManager *)recordZoneManager;
-(void)setErrorFetchingExitDate:(NSError *)arg1 ;
-(void)setSaltZoneCreatedOverride:(NSNumber *)arg1 ;
-(void)handleNotificationForSubscriptionID:(id)arg1 ;
-(CKRecordID *)exitRecordID;
-(BOOL)_canSubmitCloudKitMetric;
-(id)_modifiedOpGroupName:(id)arg1 useManatee:(BOOL)arg2 ;
-(NSNumber *)subscriptionCreatedOverride;
-(void)_evalToggleiCloudSettingsSwitch;
-(void)writeSyncCompletedRecordWithDate:(id)arg1 useManatee:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_scheduleMetricOperation:(id)arg1 useManate:(BOOL)arg2 ;
-(BOOL)fetchedExitDateOnLaunch;
-(NSNumber *)saltZoneCreatedOverride;
-(id)exitConfiguration;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(void)setExitRecordID:(CKRecordID *)arg1 ;
-(id)syncCompleteRecordID;
-(NSDate *)exitRecordDate;
-(void)dealloc;
-(void)setDatabaseManager:(IMDCKDatabaseManager *)arg1 ;
@end
