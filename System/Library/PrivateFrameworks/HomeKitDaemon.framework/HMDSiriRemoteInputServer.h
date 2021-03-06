/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSHashTable, NSString;

@interface HMDSiriRemoteInputServer : NSObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _xpcServer;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSHashTable* _siriSessions;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcServer;                  //@synthesize xpcServer=_xpcServer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSHashTable * siriSessions;                          //@synthesize siriSessions=_siriSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)sendMsg:(id)arg1 args:(id)arg2 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)handleDisconnection;
-(void)handleConnection:(id)arg1 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcServer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)invalidate;
-(void)dealloc;
-(void)handleServerEvent:(id)arg1 ;
-(NSHashTable *)siriSessions;
-(void)setSiriSessions:(NSHashTable *)arg1 ;
-(void)deregisterSiriSession:(id)arg1 ;
-(void)handleConnectionEvent:(id)arg1 ;
-(void)handleMsg:(id)arg1 ;
-(void)handleCheckInMsg:(id)arg1 ;
-(void)handleStartStreamMsg:(id)arg1 ;
-(void)handleStopStreamMsg:(id)arg1 ;
-(BOOL)registerSiriSession:(id)arg1 ;
-(void)sendMsgIfCheckedIn:(id)arg1 args:(id)arg2 ;
-(void)setXpcServer:(NSObject*<OS_xpc_object>)arg1 ;
@end

