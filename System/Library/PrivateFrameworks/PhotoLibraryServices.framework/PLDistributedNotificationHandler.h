/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibraryBundleController;

@interface PLDistributedNotificationHandler : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	PLPhotoLibraryBundleController* _libraryBundleController;

}
-(void)registerForNotifications;
-(void)_openSystemPhotoLibrary;
-(id)initWithLibraryBundleController:(id)arg1 ;
-(void)_handleCloudPhotoNotification;
-(void)_handleNotification:(id)arg1 ;
@end
