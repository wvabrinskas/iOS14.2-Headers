/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CALNIconCache.h>

@protocol CALNNotificationIconProvider, OS_dispatch_queue;
@class NSObject, NSString;

@interface CALNNotificationIconCache : NSObject <CALNIconCache> {

	id<CALNNotificationIconProvider> _notificationIconProvider;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<CALNNotificationIconProvider> notificationIconProvider;              //@synthesize notificationIconProvider=_notificationIconProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_pathForCachedIconWithIdentifier:(id)arg1 ;
+(id)_iconCacheDirectory;
+(id)pathForCachedIconWithIdentifier:(id)arg1 ;
+(id)iconCacheDirectory;
-(BOOL)_createCacheDirectoryIfNeeded;
-(BOOL)forceRemoveAllCachedIconsWithError:(id*)arg1 ;
-(BOOL)addIconsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)iconIdentifierForCachedIconPath:(id)arg1 ;
-(BOOL)_addIconWithIdentifier:(id)arg1 toCacheAtPath:(id)arg2 ;
-(id)initWithNotificationIconProvider:(id)arg1 ;
-(id<CALNNotificationIconProvider>)notificationIconProvider;
-(id)cachedIconPathForIconIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)removeIconWithIdentifier:(id)arg1 error:(id*)arg2 ;
@end
