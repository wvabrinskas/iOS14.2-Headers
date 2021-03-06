/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@protocol OS_dispatch_semaphore;
@class CADisplayLink, NSRunLoop, NSObject;

@interface VCDisplayLink : VCObject {

	CADisplayLink* _caDisplayLink;
	tagVCRealTimeThread* _thread;
	NSRunLoop* _runLoop;
	unsigned long long _state;
	NSObject*<OS_dispatch_semaphore> _waitToRunSemaphore;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)activate;
-(void)deactivate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(BOOL)ensureDisplayIsReady;
-(void)handleWaitToRunTimeout;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadPriority:(unsigned)arg3 threadOptions:(unsigned)arg4 threadIdentifier:(id)arg5 ;
-(void)runDisplayLinkThreadWithStopRequested:(BOOL*)arg1 ;
@end

