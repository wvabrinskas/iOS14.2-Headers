/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUI.framework/AccessibilityUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AXUIMessageSenderDelegate.h>
#import <libobjc.A.dylib/AXUIClientConnectionStateObserver.h>

@protocol AXUIClientDelegate;
@class NSString, AXUIMessageSender, AXUIClientConnection, NSDictionary;

@interface AXUIClient : NSObject <AXUIMessageSenderDelegate, AXUIClientConnectionStateObserver> {

	BOOL _registeredWithServer;
	id<AXUIClientDelegate> _delegate;
	NSString* _serviceBundleName;
	AXUIMessageSender* _messageSender;
	AXUIClientConnection* _clientConnection;
	NSString* _clientIdentifier;
	NSDictionary* _initializationMessage;

}

@property (nonatomic,copy) NSString * serviceBundleName;                                           //@synthesize serviceBundleName=_serviceBundleName - In the implementation block
@property (nonatomic,retain) AXUIMessageSender * messageSender;                                    //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,retain) AXUIClientConnection * clientConnection;                              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,getter=isRegisteredWithServer,nonatomic) BOOL registeredWithServer;              //@synthesize registeredWithServer=_registeredWithServer - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * initializationMessage;                                   //@synthesize initializationMessage=_initializationMessage - In the implementation block
@property (assign,nonatomic,__weak) id<AXUIClientDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AXUIClientConnection *)clientConnection;
-(void)setClientConnection:(AXUIClientConnection *)arg1 ;
-(NSDictionary *)initializationMessage;
-(void)setInitializationMessage:(NSDictionary *)arg1 ;
-(void)setRegisteredWithServer:(BOOL)arg1 ;
-(id<AXUIClientDelegate>)delegate;
-(id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(BOOL)isRegisteredWithServer;
-(void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long*)arg3 ;
-(NSString *)clientIdentifier;
-(NSString *)serviceBundleName;
-(id)initWithIdentifier:(id)arg1 serviceBundleName:(id)arg2 ;
-(void)setDelegate:(id<AXUIClientDelegate>)arg1 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)description;
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_requestInitializationMessageFromDelegateIfNeeded;
-(void)setMessageSender:(AXUIMessageSender *)arg1 ;
-(void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2 ;
-(AXUIMessageSender *)messageSender;
-(void)clientConnection:(id)arg1 didChangeConnectedState:(BOOL)arg2 ;
-(void)setServiceBundleName:(NSString *)arg1 ;
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3 ;
-(void)dealloc;
@end

