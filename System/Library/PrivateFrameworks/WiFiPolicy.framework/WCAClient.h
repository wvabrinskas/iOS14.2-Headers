/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface WCAClient : NSObject {

	NSXPCConnection* _connectionToService;

}

@property (nonatomic,retain) NSXPCConnection * connectionToService;              //@synthesize connectionToService=_connectionToService - In the implementation block
+(id)sharedClient;
-(void)executeFetchRequest:(id)arg1 ;
-(void)_establishDaemonConnection;
-(NSXPCConnection *)connectionToService;
-(void)setConnectionToService:(NSXPCConnection *)arg1 ;
@end
