/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSCache, NSHashTable;

@interface BSSqliteDatabaseConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _queue_dbConnection;
	NSCache* _queue_queryCache;
	NSHashTable* _queue_observers;

}
-(void)close;
-(id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(id)init;
-(id)prepareStatement:(id)arg1 ;
-(id)initWithInMemoryDatabase;
-(BOOL)truncateDatabaseAndReturnError:(out id*)arg1 ;
-(void)dealloc;
@end

