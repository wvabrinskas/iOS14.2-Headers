/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ICMigrationUtilities : NSObject
+(void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 didMigrateOnMac:(BOOL)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1 ;
+(void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)updateAllLegacyAccountMigrationStatesInContext:(id)arg1 ;
+(void)deleteMigratedHTMLAccountsInContext:(id)arg1 ;
+(void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1 ;
@end
