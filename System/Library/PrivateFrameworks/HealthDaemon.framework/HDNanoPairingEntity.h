/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@class NSUUID, NSString;

@interface HDNanoPairingEntity : HDHealthEntity {

	BOOL _restoreComplete;
	NSUUID* _nanoRegistryUUID;
	NSUUID* _persistentUUID;
	NSUUID* _healthDatabaseUUID;
	NSString* _defaultSourceBundleIdentifier;
	NSString* _deviceIdentifier;
	long long _syncProvenance;
	HDNanoPairingEntity* _entity;

}

@property (nonatomic,retain) HDNanoPairingEntity * entity;                               //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy) NSUUID * nanoRegistryUUID;                                    //@synthesize nanoRegistryUUID=_nanoRegistryUUID - In the implementation block
@property (assign,nonatomic) long long syncProvenance;                                   //@synthesize syncProvenance=_syncProvenance - In the implementation block
@property (nonatomic,copy) NSUUID * persistentUUID;                                      //@synthesize persistentUUID=_persistentUUID - In the implementation block
@property (nonatomic,copy) NSUUID * healthDatabaseUUID;                                  //@synthesize healthDatabaseUUID=_healthDatabaseUUID - In the implementation block
@property (nonatomic,copy) NSString * defaultSourceBundleIdentifier;                     //@synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,getter=isRestoreComplete,nonatomic) BOOL restoreComplete;              //@synthesize restoreComplete=_restoreComplete - In the implementation block
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(long long)protectionClass;
+(id)nanoPairingEntityWithRegistryUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_nanoPairingEntitiesWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_predicateWithRegistryUUID:(id)arg1 ;
+(id)nanoPairingEntityWithRegistryUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)sourceEntityForRegistryUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(void)setEntity:(HDNanoPairingEntity *)arg1 ;
-(NSString *)defaultSourceBundleIdentifier;
-(BOOL)isRestoreComplete;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSUUID *)persistentUUID;
-(void)setPersistentUUID:(NSUUID *)arg1 ;
-(HDNanoPairingEntity *)entity;
-(NSString *)deviceIdentifier;
-(void)setDefaultSourceBundleIdentifier:(NSString *)arg1 ;
-(long long)syncProvenance;
-(NSUUID *)nanoRegistryUUID;
-(id)_initWithNanoRegistryUUID:(id)arg1 persistentUUID:(id)arg2 healthDatabaseUUID:(id)arg3 sourceBundleIdentifier:(id)arg4 deviceIdentifier:(id)arg5 syncStoreEntity:(id)arg6 restoreComplete:(BOOL)arg7 database:(id)arg8 error:(id*)arg9 ;
-(void)setNanoRegistryUUID:(NSUUID *)arg1 ;
-(void)setHealthDatabaseUUID:(NSUUID *)arg1 ;
-(void)setSyncProvenance:(long long)arg1 ;
-(void)setRestoreComplete:(BOOL)arg1 ;
-(BOOL)saveWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(NSUUID *)healthDatabaseUUID;
@end

