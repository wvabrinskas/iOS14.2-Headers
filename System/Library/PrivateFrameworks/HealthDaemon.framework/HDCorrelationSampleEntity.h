/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)isConcreteEntity;
+(BOOL)requiresSampleTypePredicate;
+(BOOL)acceptsObject:(id)arg1 ;
+(id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg1 ;
+(id)_objectsWithIDs:(id)arg1 profile:(id)arg2 ;
+(id)createTableSQL;
+(BOOL)isBackedByTable;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
@end

