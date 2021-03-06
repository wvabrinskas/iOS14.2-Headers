/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalCancelable.h>

@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable> {

	NSRunLoop* _runLoop;
	/*^block*/id _block;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,copy) id block;                             //@synthesize block=_block - In the implementation block
-(void)performAfterDelay:(double)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 inRunLoop:(id)arg2 ;
-(void)setBlock:(id)arg1 ;
-(NSRunLoop *)runLoop;
-(id)block;
-(void)cancel;
-(void)_performBlock:(/*^block*/id)arg1 ;
@end

