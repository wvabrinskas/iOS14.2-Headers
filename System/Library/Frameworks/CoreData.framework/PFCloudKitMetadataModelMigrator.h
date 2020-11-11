/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSQLCore, NSManagedObjectContext, PFCloudKitMetadataMigrationContext, CKRecordZoneID, PFCloudKitMetricsClient;

@interface PFCloudKitMetadataModelMigrator : NSObject {

	NSSQLCore* _store;
	NSManagedObjectContext* _metadataContext;
	PFCloudKitMetadataMigrationContext* _context;
	long long _databaseScope;
	CKRecordZoneID* _defaultZoneID;
	PFCloudKitMetricsClient* _metricsClient;

}

@property (nonatomic,readonly) NSSQLCore * store;                                         //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * metadataContext;                  //@synthesize metadataContext=_metadataContext - In the implementation block
@property (nonatomic,readonly) PFCloudKitMetadataMigrationContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long databaseScope;                                   //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * defaultZoneID;                            //@synthesize defaultZoneID=_defaultZoneID - In the implementation block
@property (nonatomic,readonly) PFCloudKitMetricsClient * metricsClient;                   //@synthesize metricsClient=_metricsClient - In the implementation block
-(NSManagedObjectContext *)metadataContext;
-(BOOL)checkForRecordMetadataZoneCorruptionInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)commitMigrationMetadataAndCleanup:(id*)arg1 ;
-(void)addDropTableStatementsForOldMetadataTablesToContext:(id)arg1 withAdapter:(id)arg2 ;
-(BOOL)applyMigrationChangesWithConnection:(id)arg1 error:(id*)arg2 ;
-(void)addMigrationStatementForAddingAttribute:(id)arg1 toContext:(id)arg2 inStore:(id)arg3 ;
-(BOOL)migrateMetadataForObjectsInStore:(id)arg1 toNSCKRecordMetadataUsingContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)checkForCorruptedRecordMetadataInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)addMigrationStatementToContext:(id)arg1 forRenamingAttributeNamed:(id)arg2 withOldColumnName:(id)arg3 toAttributeName:(id)arg4 onOldSQLEntity:(id)arg5 andCurrentSQLEntity:(id)arg6 ;
-(BOOL)migrateBatchOfObjects:(id)arg1 forStore:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(PFCloudKitMetadataMigrationContext *)context;
-(PFCloudKitMetricsClient *)metricsClient;
-(NSSQLCore *)store;
-(BOOL)calculateMigrationStepsWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)computeAncillaryEntityPrimaryKeyTableEntriesForStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareContextWithConnection:(id)arg1 error:(id*)arg2 ;
-(CKRecordZoneID *)defaultZoneID;
-(id)fetchSchemaSQLForEntity:(id)arg1 usingConnection:(id)arg2 ;
-(long long)databaseScope;
-(BOOL)cleanUpAfterClientMigrationWithStore:(id)arg1 andContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithStore:(id)arg1 metadataContext:(id)arg2 databaseScope:(long long)arg3 defaultZoneID:(id)arg4 metricsClient:(id)arg5 ;
-(BOOL)checkAndPerformMigrationIfNecessary:(id*)arg1 ;
-(BOOL)addMigrationStatementsToDeleteDuplicateMirroredRelationshipsToContext:(id)arg1 withManagedObjectContext:(id)arg2 andSQLEntity:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end
