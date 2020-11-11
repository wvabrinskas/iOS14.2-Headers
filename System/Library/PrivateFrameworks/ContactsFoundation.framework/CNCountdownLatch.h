/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class CNUnfairLock, NSObject;

@interface CNCountdownLatch : NSObject {

	unsigned long long _count;
	CNUnfairLock* _lock;
	NSObject*<OS_dispatch_semaphore> _latchedSemaphore;

}
-(void)await;
-(id)init;
-(void)countDown;
-(BOOL)hasLatched;
-(id)initWithStartingCount:(unsigned long long)arg1 ;
-(BOOL)awaitWithTimeout:(double)arg1 ;
-(BOOL)awaitImmediate;
-(BOOL)awaitWithTimeout:(double)arg1 strategy:(unsigned long long)arg2 ;
-(BOOL)awaitOnSemaphoreWithTimeout:(double)arg1 ;
-(BOOL)awaitWhileSpinningRunloopWithTimeout:(double)arg1 ;
-(id)description;
@end
