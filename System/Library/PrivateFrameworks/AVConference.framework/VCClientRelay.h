/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCClientRelay : NSObject {

	int _vtpSocket;
	int _idsSocket;
	NSObject*<OS_dispatch_source> _idsReadSource;
	NSObject*<OS_dispatch_queue> _idsReadQueue;
	BOOL _isConnectionResultSet;
	tagCONNRESULT* _connectionResult;
	sockaddr_storage _vtpDestination;
	unsigned _vtpDestinationLength;
	OpaqueFigThreadRef _vtpReceiveTID;
	BOOL _stopVTPReceiveThread;

}

@property (readonly) BOOL stopVTPReceiveThread;              //@synthesize stopVTPReceiveThread=_stopVTPReceiveThread - In the implementation block
-(int)stopRelay;
-(int)startRelay;
-(void)dealloc;
-(int)setupVTPSocket;
-(BOOL)relayIDSPacket;
-(id)initWithIDSSocket:(int)arg1 ;
-(void)setConnectionResult:(tagCONNRESULT*)arg1 ;
-(BOOL)relayVTPPacket;
-(BOOL)stopVTPReceiveThread;
@end
