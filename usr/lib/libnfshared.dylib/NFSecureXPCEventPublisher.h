/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface NFSecureXPCEventPublisher : NSObject {

	BOOL _available;
	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL available;                                   //@synthesize available=_available - In the implementation block
-(BOOL)available;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)serviceName;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(id)initWithMachPort:(id)arg1 queue:(id)arg2 ;
-(void)sendSimpleEvent:(id)arg1 ;
-(void)sendSimpleEvent:(id)arg1 objectString:(id)arg2 ;
-(void)sendSimpleEvent:(id)arg1 objectNumber:(id)arg2 ;
@end

