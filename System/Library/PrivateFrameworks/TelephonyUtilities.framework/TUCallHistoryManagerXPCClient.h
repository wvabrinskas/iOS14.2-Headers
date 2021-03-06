/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUCallHistoryManagerXPCClient.h>

@protocol TUCallHistoryManagerXPCClient <NSObject>
@end

#import <libobjc.A.dylib/TUCallHistoryManagerDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface TUCallHistoryManagerXPCClient : NSObject <TUCallHistoryManagerXPCClient, TUCallHistoryManagerDataSource> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
+(id)callHistoryManagerAllowedClasses;
+(id)callHistoryManagerServerXPCInterface;
+(id)callHistoryManagerClientXPCInterface;
+(void)setSynchronousServer:(id)arg1 ;
+(id)asynchronousServer;
-(void)handleServerDisconnect;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

