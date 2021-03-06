/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKSPQueueBackedScheduler.h>

@protocol OS_dispatch_queue, NAScheduler;
@class NSObject, NSString;

@interface _HKSPQueueBackedScheduler : NSObject <HKSPQueueBackedScheduler> {

	NSObject*<OS_dispatch_queue> _queue;
	id<NAScheduler> _scheduler;

}

@property (nonatomic,readonly) id<NAScheduler> scheduler;                       //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id<NAScheduler>)scheduler;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithScheduler:(id)arg1 queue:(id)arg2 ;
@end

