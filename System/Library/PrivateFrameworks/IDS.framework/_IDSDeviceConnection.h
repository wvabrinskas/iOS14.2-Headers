/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSInputStream, NSOutputStream, NSNumber, NSMutableDictionary, NSDictionary;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {

	NSString* _nsuuid;
	BOOL _isDefaultPairedDevice;
	NSString* _service;
	NSString* _streamName;
	NSString* _serviceToken;
	NSString* _connectionUUID;
	int _socket;
	unsigned long long _mtu;
	/*^block*/id _openSocketCompletionHandler;
	NSObject*<OS_dispatch_queue> _openSocketCompletionHandlerQueue;
	NSString* _openSocketCompletionHandlerID;
	NSInputStream* _inputStreamForSocket;
	NSOutputStream* _outputStreamForSocket;
	BOOL _hasTimedOut;
	NSNumber* _clientTimeout;
	NSMutableDictionary* _awdMetrics;

}

@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned long long mtu; 
@property (nonatomic,readonly) NSDictionary * metrics; 
@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) NSOutputStream * outputStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)mtu;
-(NSDictionary *)metrics;
-(void)close;
-(void)_connect;
-(int)socket;
-(NSInputStream *)inputStream;
-(NSOutputStream *)outputStream;
-(id)deviceConnectionKey;
-(void)_cleanupCompletionBlock;
-(id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_close;
-(void)_daemonDied:(id)arg1 ;
-(void)dealloc;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
@end
