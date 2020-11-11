/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDNanoSyncDiagnosticOperation : HDDiagnosticOperation
-(void)run;
-(id)reportFilename;
-(void)_collectNanoSyncMessageDatabase;
-(id)_sortedPairedDevices;
-(void)_reportSummaryWithDevices:(id)arg1 ;
-(void)_reportQuickSwitchSummaryWithDevicesByPairingID:(id)arg1 ;
-(id)nanoSyncDatabaseURL;
-(id)_reportDetailsForDevice:(id)arg1 database:(id)arg2 ;
-(void)_reportIDSSummaryForDeviceIdentifier:(id)arg1 database:(id)arg2 ;
-(long long)_countOfMessagesForDeviceIdentifier:(id)arg1 description:(id)arg2 predicateSQL:(id)arg3 date:(id)arg4 database:(id)arg5 ;
-(void)_reportMostRecentMessageDateWithDeviceIdentifier:(id)arg1 description:(id)arg2 field:(id)arg3 predicateSQL:(id)arg4 database:(id)arg5 ;
-(void)_reportMostRecentMessageErrorsWithDeviceIdentifier:(id)arg1 database:(id)arg2 ;
@end
