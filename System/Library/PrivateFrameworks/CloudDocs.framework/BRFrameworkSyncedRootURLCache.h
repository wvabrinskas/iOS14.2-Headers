/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BRSyncedRootURLCache.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {

	int _syncedLocationsChangedNotificationToken;
	NSArray* _syncedRootURLs;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (nonatomic,readonly) NSArray * syncedRootURLs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)syncedRootURLs;
-(void)_accountWillChange;
-(void)_fetchSyncedRootURLs;
-(void)registerForSyncedLocationsChangesNotifications;
-(void)dealloc;
@end
