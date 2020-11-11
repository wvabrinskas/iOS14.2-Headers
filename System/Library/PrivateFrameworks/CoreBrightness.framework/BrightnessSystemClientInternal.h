/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_os_log;
@class NSXPCConnection, BrightnessSystemClientExportedObj, NSMutableArray, NSCondition, NSObject;

@interface BrightnessSystemClientInternal : NSObject {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	NSMutableArray* _clientProperties;
	NSCondition* copyPropertyForKeyWaitCondition;
	BOOL copyPropertyForKeyCompleted;
	BOOL _useSynchronousRemote;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_os_log> _logHandle;

}
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)addPropertyForNotification:(id)arg1 ;
-(void)removePropertiesFromNotification:(id)arg1 ;
-(void)addPropertiesForNotification:(id)arg1 ;
-(void)removePropertyFromNotification:(id)arg1 ;
-(void)addKeyToClientProperties:(id)arg1 ;
-(void)removeKeyFromClientProperties:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)stopXpcService;
-(void)dealloc;
@end
