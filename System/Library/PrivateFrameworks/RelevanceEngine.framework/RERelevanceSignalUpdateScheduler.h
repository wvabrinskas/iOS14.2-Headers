/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, REUpNextTimer, NSDate;

@interface RERelevanceSignalUpdateScheduler : RESingleton {

	NSMutableDictionary* _updateBlocks;
	NSObject*<OS_dispatch_queue> _queue;
	REUpNextTimer* _timer;
	NSDate* _lastFireDate;
	BOOL _alreadyScheduled;

}
-(void)_rescheduleTimer;
-(id)_init;
-(void)_updateBlocks;
-(void)dealloc;
-(void)_queue_updateBlocks;
-(void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)unscheduleEventWithIdentifier:(id)arg1 ;
@end
