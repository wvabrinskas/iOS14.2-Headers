/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol HDHealthRecordsPluginDatabaseSchema <NSObject>
@property (nonatomic,readonly) long long currentSchemaVersion; 
@property (nonatomic,copy,readonly) NSArray * databaseEntities; 
@required
-(void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2;
-(long long)currentSchemaVersion;
-(NSArray *)databaseEntities;

@end

