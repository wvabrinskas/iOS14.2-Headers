/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/__NSCFBackgroundSessionTask.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_io, OS_dispatch_semaphore;
@class NSInputStream, NSObject, NSFileHandle, NSString;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {

	NSInputStream* _requestBodyStream;
	NSInputStream* _initialStream;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSFileHandle* _readHandle;
	NSObject*<OS_dispatch_io> _pipeIO;
	unsigned long long _bytesRead;
	NSObject*<OS_dispatch_semaphore> _streamOpenedSema;
	BOOL _finishedOpen;
	BOOL _openedStreamDuringNeedNewBodyStream;
	BOOL _streamBased;
	/*^block*/id _streamWriteCompletion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
@end

