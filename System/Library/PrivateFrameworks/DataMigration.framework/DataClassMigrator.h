/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;
	BOOL _didUpgrade;
	unsigned _userDataDisposition;
	NSString* _restoredBackupBuildVersion;
	NSString* _restoredBackupProductType;
	NSString* _dmBundleIdentifier;

}

@property (assign,nonatomic) unsigned userDataDisposition;                            //@synthesize userDataDisposition=_userDataDisposition - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupBuildVersion;                   //@synthesize restoredBackupBuildVersion=_restoredBackupBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * restoredBackupProductType;                    //@synthesize restoredBackupProductType=_restoredBackupProductType - In the implementation block
@property (nonatomic,copy) NSString * dmBundleIdentifier;                             //@synthesize dmBundleIdentifier=_dmBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) BOOL wasPasscodeSetInBackup; 
@property (assign,nonatomic) BOOL didUpgrade;                                         //@synthesize didUpgrade=_didUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL didRestoreFromBackup; 
@property (nonatomic,readonly) BOOL didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) BOOL didRestoreFromCloudBackup; 
@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
+(id)dataClassMigratorForBundleAtPath:(id)arg1 ;
-(NSDictionary *)context;
-(BOOL)didUpgrade;
-(void)setDidUpgrade:(BOOL)arg1 ;
-(NSString *)dmBundleIdentifier;
-(void)setDmBundleIdentifier:(NSString *)arg1 ;
-(BOOL)didRestoreFromBackup;
-(BOOL)didMigrateBackupFromDifferentDevice;
-(BOOL)didRestoreFromCloudBackup;
-(BOOL)shouldPreserveSettingsAfterRestore;
-(BOOL)wasPasscodeSetInBackup;
-(void)setUserDataDisposition:(unsigned)arg1 ;
-(NSString *)restoredBackupBuildVersion;
-(void)setRestoredBackupBuildVersion:(NSString *)arg1 ;
-(BOOL)performMigration;
-(NSString *)restoredBackupProductType;
-(void)setRestoredBackupProductType:(NSString *)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(unsigned)userDataDisposition;
@end
