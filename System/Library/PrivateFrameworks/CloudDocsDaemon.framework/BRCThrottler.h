/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class BRCThrottleBase, NSObject;

@interface BRCThrottler : NSObject {

	BRCThrottleBase* _throttle;
	long long _latestRetry;
	unsigned _retryCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}
-(void)suspend;
-(void)reset;
-(void)resume;
-(void)cancel;
-(void)scheduleNextEvent;
-(id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

