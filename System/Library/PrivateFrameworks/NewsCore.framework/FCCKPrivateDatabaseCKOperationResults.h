/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject, FCThreadSafeMutableArray, NSArray, NSError;

@interface FCCKPrivateDatabaseCKOperationResults : NSObject {

	NSObject*<OS_dispatch_group> _group;
	FCThreadSafeMutableArray* _threadSafeItems;
	FCThreadSafeMutableArray* _threadSafeErrorsAndItemIDs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                                 //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableArray * threadSafeItems;                         //@synthesize threadSafeItems=_threadSafeItems - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableArray * threadSafeErrorsAndItemIDs;              //@synthesize threadSafeErrorsAndItemIDs=_threadSafeErrorsAndItemIDs - In the implementation block
@property (nonatomic,readonly) NSArray * combinedResultItems; 
@property (nonatomic,readonly) NSError * combinedError; 
-(id)init;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(NSError *)combinedError;
-(FCThreadSafeMutableArray *)threadSafeItems;
-(FCThreadSafeMutableArray *)threadSafeErrorsAndItemIDs;
-(NSArray *)combinedResultItems;
-(void)operationWillStart;
-(void)operationDidFinishWithItemIDs:(id)arg1 resultItems:(id)arg2 error:(id)arg3 ;
-(void)notifyWhenFinishWithQoS:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setThreadSafeItems:(FCThreadSafeMutableArray *)arg1 ;
-(void)setThreadSafeErrorsAndItemIDs:(FCThreadSafeMutableArray *)arg1 ;
@end
