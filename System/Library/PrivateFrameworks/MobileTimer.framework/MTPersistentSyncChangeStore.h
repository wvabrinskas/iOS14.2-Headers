/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTSyncChangeStore.h>

@protocol NAScheduler;
@class NSString;

@interface MTPersistentSyncChangeStore : NSObject <MTSyncChangeStore> {

	id<NAScheduler> _archiverScheduler;
	NSString* _syncDataPath;
	NSString* _syncDataFile;

}

@property (nonatomic,readonly) id<NAScheduler> archiverScheduler;              //@synthesize archiverScheduler=_archiverScheduler - In the implementation block
@property (nonatomic,copy) NSString * syncDataPath;                            //@synthesize syncDataPath=_syncDataPath - In the implementation block
@property (nonatomic,copy) NSString * syncDataFile;                            //@synthesize syncDataFile=_syncDataFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NAScheduler>)archiverScheduler;
-(void)setSyncDataPath:(NSString *)arg1 ;
-(void)persistChanges:(id)arg1 ;
-(id)initWithDataModel:(id)arg1 ;
-(NSString *)syncDataFile;
-(void)_removeSyncDataFile;
-(id)loadChanges;
-(NSString *)syncDataPath;
-(void)setupSyncDataFileForDataModel:(id)arg1 ;
-(void)setSyncDataFile:(NSString *)arg1 ;
@end

