/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSQLiteEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity, NSCopying> {

	long long _persistentID;

}

@property (nonatomic,readonly) long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)databaseName;
+(id)foreignKeys;
+(id)databaseTable;
+(id)indices;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(BOOL)isTemporary;
+(id)checkConstraints;
+(id)tableAliases;
+(Class)entityClassForEnumeration;
+(id)additionalPredicateForEnumeration;
+(void)enumerateColumnsWithBlock:(/*^block*/id)arg1 ;
+(id)orderingTermForSortDescriptor:(id)arg1 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)privateSubEntities;
+(id)createTableSQL;
+(id)insertOrReplaceEntity:(BOOL)arg1 database:(id)arg2 properties:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingTerms:(id)arg4 groupBy:(id)arg5 ;
+(BOOL)deleteEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(id)disambiguatedDatabaseTable;
+(id)firstInDatabase:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 error:(id*)arg4 ;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(BOOL)updateProperties:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 bindingHandler:(/*^block*/id)arg5 ;
+(id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)deleteStatementWithProperty:(id)arg1 database:(id)arg2 ;
+(id)countValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 orderingTerms:(id)arg5 limit:(long long)arg6 database:(id)arg7 error:(id*)arg8 enumerationHandler:(/*^block*/id)arg9 ;
+(id)distinctProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)entityWithPersistentID:(id)arg1 ;
+(id)maxPersistentIDWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(Class)entityForProperty:(id)arg1 ;
+(id)allDatabaseColumnNames;
+(BOOL)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)insertSQLForProperties:(id)arg1 shouldReplace:(BOOL)arg2 ;
+(id)updateSQLForProperties:(id)arg1 predicate:(id)arg2 ;
+(id)_generateDisambiguatedDatabaseTableName;
+(void)_enumerateColumnDefinitionsWithBlock:(/*^block*/id)arg1 ;
+(void)_enumerateColumnNamesWithBlock:(/*^block*/id)arg1 ;
+(id)_copyDeleteSQLWithTableName:(id)arg1 columnName:(id)arg2 ;
+(id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5 error:(id*)arg6 ;
+(id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)countDistinctForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)hash;
-(long long)persistentID;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPersistentID:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)updateProperties:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(id)valueForProperty:(id)arg1 database:(id)arg2 ;
-(BOOL)existsInDatabase:(id)arg1 ;
-(BOOL)booleanForProperty:(id)arg1 database:(id)arg2 ;
-(id)dateForProperty:(id)arg1 database:(id)arg2 ;
-(id)numberForProperty:(id)arg1 database:(id)arg2 ;
-(id)stringForProperty:(id)arg1 database:(id)arg2 ;
-(id)UUIDForProperty:(id)arg1 database:(id)arg2 ;
-(void)willDeleteFromDatabase:(id)arg1 ;
-(id)updateSQLForProperties:(id)arg1 ;
-(BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 database:(id)arg3 ;
@end

