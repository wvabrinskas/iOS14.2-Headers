/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLBackgroundJobWorkerProtocol <NSObject>
@optional
-(BOOL)isInterruptible;
-(void)stopWorkingOnManagedObjectID:(id)arg1;

@required
+(id)workerWithLibrary:(id)arg1;
-(BOOL)hasPendingJobs;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(id)managedObjectIDsNeedingProcessing;

@end
