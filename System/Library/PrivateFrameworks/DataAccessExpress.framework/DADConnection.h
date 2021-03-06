/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface DADConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _muckingWithConn;
	NSObject*<OS_dispatch_queue> _muckingWithInFlightCollections;
	NSMutableSet* _accountIdsWithAlreadyResetCerts;
	NSMutableSet* _accountIdsWithAlreadyResetThrottleTimers;
	/*^block*/id _statusReportBlock;
	NSMutableDictionary* _inFlightSearchQueries;
	NSMutableDictionary* _inFlightFolderChanges;
	NSMutableDictionary* _inFlightAttachmentDownloads;
	NSMutableDictionary* _inFlightCalendarAvailabilityRequests;
	NSMutableDictionary* _inFlightCalendarDirectorySearches;
	NSMutableDictionary* _inFlightShareRequests;
	NSMutableDictionary* _inFlightOofSettingsRequests;
	NSMutableDictionary* _inFlightOfficeHoursRequests;
	NSMutableDictionary* _inFlightGrantedDelegatesListRequests;
	NSMutableDictionary* _inFlightUpdateGrantedDelegatePermissionRequests;
	NSMutableDictionary* _inFlightSubscribedCalendarDownloads;
	BOOL _registered;

}

@property (assign,nonatomic) BOOL registered;              //@synthesize registered=_registered - In the implementation block
+(unsigned long long)_nextStopMonitoringStatusToken;
+(id)sharedConnection;
+(void)setShouldIgnoreAccountChanges;
-(void)handleURL:(id)arg1 ;
-(id)_connection;
-(void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2 ;
-(void)_initializeConnection;
-(id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)externalIdentificationInfoForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(BOOL)registered;
-(void)_dispatchMessage:(id)arg1 ;
-(BOOL)registerForInterrogationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_tearDownInFlightObjects;
-(void)_downloadFinished:(id)arg1 ;
-(id)init;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4 ;
-(void)_calendarDirectorySearchFinished:(id)arg1 ;
-(void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1 ;
-(void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setRegistered:(BOOL)arg1 ;
-(id)updateGrantedDelegatePermissionForAccountID:(id)arg1 grantedDelegate:(id)arg2 resultsBlock:(/*^block*/id)arg3 ;
-(void)cancelServerContactsSearch:(id)arg1 ;
-(void)_serverDiedWithReason:(id)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_downloadSubscribedCalendarRequiresPassword:(id)arg1 ;
-(BOOL)_validateXPCReply:(id)arg1 ;
-(void)cancelDownloadingSubscriptionCalendarWithDownloadID:(id)arg1 ;
-(void)_updateGrantedDelegatePermissionRequestFinished:(id)arg1 ;
-(void)_downloadProgress:(id)arg1 ;
-(void)handleAccountChange:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(void)_grantedDelegatesListRequestFinished:(id)arg1 ;
-(BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(void)_downloadSubscribedCalendarProgress:(id)arg1 ;
-(BOOL)_checkInvalidIdExistsInXPCRely:(id)arg1 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(unsigned long long)requestDaemonStopMonitoringAgentsSync;
-(void)_folderChangeFinished:(id)arg1 ;
-(void)reallyRegisterForInterrogation;
-(void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(void)_initializeConnectionWithXPCEndpoint:(id)arg1 ;
-(void)_resetThrottleTimersForAccountId:(id)arg1 ;
-(void)cancelGrantedDelegatesListRequestWithID:(id)arg1 ;
-(void)_foldersUpdated:(id)arg1 ;
-(void)_calendarAvailabilityRequestReturnedResults:(id)arg1 ;
-(BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)_registerForAppResumedNotification;
-(id)currentPolicyKeyForAccountID:(id)arg1 ;
-(void)_initializeXPCConnection:(id)arg1 ;
-(void)fetchOfficeHoursForAccountWithID:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 ;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(void)beginCalDAVServerSimulationWithHostname:(id)arg1 ;
-(BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)_calendarAvailabilityRequestFinished:(id)arg1 ;
-(void)endCalDAVServerSimulationWithHostname:(id)arg1 ;
-(void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
-(id)activeSyncDeviceIdentifier;
-(BOOL)requestPolicyUpdateForAccountID:(id)arg1 ;
-(void)_officeHoursRequestFinished:(id)arg1 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)_getStatusReportsFromClient:(id)arg1 ;
-(void)resetTimersAndWarnings;
-(BOOL)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(id)requestGrantedDelegatesListForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(void)setOfficeHours:(id)arg1 forAccountWithID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)decodedErrorFromData:(id)arg1 ;
-(id)_init;
-(void)_oofSettingsRequestsFinished:(id)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_calendarDirectorySearchReturnedResults:(id)arg1 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(unsigned long long)requestDaemonStopMonitoringAgents;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 ;
-(void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 withToken:(unsigned long long)arg2 waitForReply:(BOOL)arg3 ;
-(void)fillOutCurrentEASTimeZoneInfo;
-(BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(BOOL)arg3 ;
-(id)downloadSubscribedCalendarWithURL:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)_policyKeyChanged:(id)arg1 ;
-(BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(void)_shareResponseFinished:(id)arg1 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 ;
-(id)statusReports;
-(void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_serverContactsSearchQueryFinished:(id)arg1 ;
-(void)_logDataAccessStatus:(id)arg1 ;
-(void)dealloc;
-(BOOL)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(BOOL)arg3 ;
-(void)_downloadSubscribedCalendarFinished:(id)arg1 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
@end

