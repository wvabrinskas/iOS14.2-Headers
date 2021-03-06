/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSObject;

@interface EFCoalescer : NSObject {

	/*^block*/id _coalescerAction;
	os_unfair_lock_s _lock;
	id _coalescedValue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _coalescer;

}
-(void)_handleCoalesceEvent;
-(id)initWithCoalescingAction:(/*^block*/id)arg1 ;
-(void)coalesceValue:(id)arg1 ;
-(void)dealloc;
@end

