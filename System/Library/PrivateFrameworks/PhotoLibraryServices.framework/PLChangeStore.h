/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSMutableArray, PLPhotoLibraryPathManager, NSURL;

@interface PLChangeStore : NSObject {

	NSObject*<OS_dispatch_queue> _eventsIsolation;
	NSMutableArray* _events;
	sqlite3Ref _database;
	NSObject*<OS_dispatch_queue> _databaseIsolation;
	unsigned long long _firstOnDiskEventIndex;
	PLPhotoLibraryPathManager* _photoLibraryPathManager;
	NSURL* _databaseFileURL;

}

@property (nonatomic,readonly) unsigned long long firstOnDiskEventIndex; 
@property (nonatomic,readonly) NSURL * databaseFileURL;                                          //@synthesize databaseFileURL=_databaseFileURL - In the implementation block
@property (nonatomic,readonly) PLPhotoLibraryPathManager * photoLibraryPathManager;              //@synthesize photoLibraryPathManager=_photoLibraryPathManager - In the implementation block
-(id)initWithPhotoLibraryPathManager:(id)arg1 ;
-(unsigned long long)lastIndex;
-(void)prepareAndEvaluateStatement:(const char*)arg1 ;
-(sqlite3_stmtRef)prepareStatement:(const char*)arg1 ;
-(void)setupDatabase;
-(void)clearStore:(/*^block*/id)arg1 ;
-(void)getEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(unsigned long long)firstOnDiskEventIndex;
-(void)performBlockAsTransaction:(/*^block*/id)arg1 ;
-(void)_backupStore;
-(BOOL)getInMemoryEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)newArrayWithEventsSince:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 lastEventIndex:(unsigned long long*)arg3 ;
-(void)getOnDiskEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)openDatabase;
-(NSURL *)databaseFileURL;
-(void)enumeratePersistedDidSaveEventsInRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)bindInt:(int)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindInt64:(long long)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindXPCData:(id)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindString:(id)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(PLPhotoLibraryPathManager *)photoLibraryPathManager;
-(void)bindUUID:(unsigned char)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)_clearStore;
-(void)dealloc;
@end

