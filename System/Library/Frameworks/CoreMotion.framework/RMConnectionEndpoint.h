/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, RMConnectionLifecycleDelegate, RMConnectionDataDelegate, OS_xpc_object;
@class NSObject;

@interface RMConnectionEndpoint : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<RMConnectionLifecycleDelegate> _connectionDelegate;
	id<RMConnectionDataDelegate> _dataDelegate;
	NSObject*<OS_xpc_object> _streamingServerConnection;
	NSObject*<OS_xpc_object> _streamingClientConnection;
	NSObject*<OS_xpc_object> _streamingClientListener;
	NSObject*<OS_xpc_object> _messagingConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> streamingServerConnection;                       //@synthesize streamingServerConnection=_streamingServerConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> streamingClientConnection;                       //@synthesize streamingClientConnection=_streamingClientConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> streamingClientListener;                         //@synthesize streamingClientListener=_streamingClientListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> messagingConnection;                             //@synthesize messagingConnection=_messagingConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (assign,nonatomic,__weak) id<RMConnectionLifecycleDelegate> connectionDelegate;              //@synthesize connectionDelegate=_connectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<RMConnectionDataDelegate> dataDelegate;                         //@synthesize dataDelegate=_dataDelegate - In the implementation block
-(void)start;
-(void)setConnectionDelegate:(id<RMConnectionLifecycleDelegate>)arg1 ;
-(id<RMConnectionLifecycleDelegate>)connectionDelegate;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 ;
-(void)pause;
-(void)stopServingStream;
-(NSObject*<OS_xpc_object>)messagingConnection;
-(void)setStreamingServerConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)startServingStreamWithHandler:(id)arg1 ;
-(void)stopReceivingStream;
-(void)startServingStreamToEndpoint:(id)arg1 error:(id*)arg2 ;
-(void)wrapReplyToXpcMessage:(id)arg1 withName:(id)arg2 data:(id)arg3 ;
-(void)setMessagingConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)handleXpcMessage:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)streamingServerConnection;
-(void)setStreamingClientConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)streamingClientConnection;
-(void)handleStreamXpcError:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)setDataDelegate:(id<RMConnectionDataDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)streamingClientListener;
-(void)setStreamingClientListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)startReceivingStreamOnConnection:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)handleStreamXpcReply:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 withData:(id)arg2 ;
-(void)sendMessage:(id)arg1 withData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestStreamWithMessage:(id)arg1 data:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<RMConnectionDataDelegate>)dataDelegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)handleInterruption;
-(void)invalidate;
-(BOOL)isValid;
@end
