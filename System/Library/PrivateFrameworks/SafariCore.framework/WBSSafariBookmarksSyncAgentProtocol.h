/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSSafariBookmarksSyncAgentProtocol <WBSCyclerCloudBookmarksAssistant>
@required
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(void)userAccountDidChange:(long long)arg1;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)collectDiagnosticsDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)registerForPushNotificationsIfNeeded;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(/*^block*/id)arg1;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg1;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(/*^block*/id)arg1;
-(void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchCloudTabDevicesAndCloseRequests;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)beginMigrationFromDAV;
-(void)userDidUpdateBookmarkDatabase;
-(void)observeRemoteMigrationStateForSecondaryMigration;

@end

