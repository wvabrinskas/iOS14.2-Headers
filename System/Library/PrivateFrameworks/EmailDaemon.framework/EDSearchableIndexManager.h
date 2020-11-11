/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>

@class EDPersistenceDatabase, EDSearchableIndexPersistence, EDSearchableIndexScheduler, EDSearchableIndex, NSString;

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDMessageChangeHookResponder> {

	BOOL _needsReindex;
	BOOL _needsToScheduleRecurringActivity;
	EDPersistenceDatabase* _database;

}

@property (assign,nonatomic) BOOL needsReindex;                                         //@synthesize needsReindex=_needsReindex - In the implementation block
@property (assign,nonatomic) BOOL needsToScheduleRecurringActivity;                     //@synthesize needsToScheduleRecurringActivity=_needsToScheduleRecurringActivity - In the implementation block
@property (nonatomic,readonly) EDSearchableIndexPersistence * persistence; 
@property (nonatomic,readonly) EDSearchableIndexScheduler * scheduler; 
@property (nonatomic,readonly) EDPersistenceDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDSearchableIndex * index; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)test_tearDown;
-(void)scheduleRecurringActivity;
-(EDSearchableIndexPersistence *)persistence;
-(void)persistenceWillBeginUpdates;
-(void)persistenceDidFinishUpdates;
-(void)persistenceDidUpdateData:(id)arg1 message:(id)arg2 ;
-(void)persistenceDidAddLabels:(id)arg1 removeLabels:(id)arg2 messages:(id)arg3 generationWindow:(id)arg4 ;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(EDSearchableIndexScheduler *)scheduler;
-(void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 ;
-(EDSearchableIndex *)index;
-(id)initWithDatabase:(id)arg1 hookResponder:(id)arg2 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2 ;
-(EDPersistenceDatabase *)database;
-(void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)setNeedsToScheduleRecurringActivity:(BOOL)arg1 ;
-(BOOL)needsReindex;
-(void)_removeAllItemsFromIndexAndWait:(BOOL)arg1 options:(unsigned long long)arg2 ;
-(void)setNeedsReindex:(BOOL)arg1 ;
-(BOOL)needsToScheduleRecurringActivity;
-(void)_removeItemsForPersistedMessages:(id)arg1 ;
-(void)removeAllItemsFromIndexAndWait:(BOOL)arg1 skipInvalidation:(BOOL)arg2 ;
-(void)setNeedsReindex;
@end
