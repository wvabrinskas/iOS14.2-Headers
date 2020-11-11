/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AWDServerConnection, NSObject, NSString, NSMutableDictionary;

@interface WFMetricsManager : NSObject {

	AWDServerConnection* _server;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSString* _processName;
	NSMutableDictionary* _ssidHashes;

}

@property (nonatomic,retain) AWDServerConnection * server;                          //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
@property (nonatomic,copy) NSString * processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ssidHashes;                      //@synthesize ssidHashes=_ssidHashes - In the implementation block
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setProcessName:(NSString *)arg1 ;
-(AWDServerConnection *)server;
-(id)init;
-(NSString *)processName;
-(void)setServer:(AWDServerConnection *)arg1 ;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)processEvent:(id)arg1 ;
-(NSMutableDictionary *)ssidHashes;
-(id)SHAForSSID:(id)arg1 ;
-(void)setSsidHashes:(NSMutableDictionary *)arg1 ;
@end
