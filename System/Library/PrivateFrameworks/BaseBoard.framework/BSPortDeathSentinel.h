/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class BSMachPortSendRight, NSObject, NSString;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable> {

	BSMachPortSendRight* _sendRight;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _source;
	BOOL _activated;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)monitorSendRight:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithSendRight:(id)arg1 ;
-(void)activateWithHandler:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)invalidate;
-(BOOL)isValid;
-(void)dealloc;
@end

