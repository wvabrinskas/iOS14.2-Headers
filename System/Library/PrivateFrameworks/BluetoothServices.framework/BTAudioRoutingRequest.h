/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject, NSXPCListenerEndpoint;

@interface BTAudioRoutingRequest : NSObject <NSSecureCoding> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	int _audioScore;
	unsigned _flags;
	unsigned _clientID;
	NSString* _deviceAddress;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _responseHandler;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                         //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (assign,nonatomic) int audioScore;                                            //@synthesize audioScore=_audioScore - In the implementation block
@property (nonatomic,copy) NSString * deviceAddress;                                    //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)responseHandler;
-(unsigned)clientID;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)_activate;
-(void)setResponseHandler:(id)arg1 ;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)init;
-(unsigned)flags;
-(void)activate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(id)description;
-(void)setAudioScore:(int)arg1 ;
-(void)_interrupted;
-(void)_ensureXPCStarted;
-(id)initWithCoder:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(NSString *)deviceAddress;
-(void)setDeviceAddress:(NSString *)arg1 ;
-(void)invalidate;
-(int)audioScore;
@end

