/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BYBuddyDaemonProximityTargetProtocol.h>

@protocol BYBuddyDaemonProximityTargetProtocol;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonProximityTargetClient : NSObject <BYBuddyDaemonProximityTargetProtocol> {

	id<BYBuddyDaemonProximityTargetProtocol> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (__weak) id<BYBuddyDaemonProximityTargetProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proximityTargetClientInterface;
-(void)connectToDaemon;
-(void)proximititySetupCompleted:(id)arg1 ;
-(void)displayProximityPinCode:(id)arg1 visual:(BOOL)arg2 ;
-(void)dismissProximityPinCode;
-(void)endPairing;
-(void)proximityConnectionPreparing:(id)arg1 ;
-(void)proximityConnectionInitiated;
-(void)proximityConnectionTerminated;
-(void)proximityConnectionReconnected;
-(void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5 ;
-(void)beginAdvertisingProximitySetup;
-(void)hasConnection:(/*^block*/id)arg1 ;
-(id)init;
-(void)endAdvertisingProximitySetup;
-(void)resumeProximitySetup:(/*^block*/id)arg1 ;
-(void)storeInformation:(id)arg1 ;
-(void)storeHandshake:(id)arg1 ;
-(void)endDeviceToDeviceMigration;
-(void)showMigrationInterfaceOnSource;
-(void)suspendConnectionForSoftwareUpdate:(/*^block*/id)arg1 ;
-(id<BYBuddyDaemonProximityTargetProtocol>)delegate;
-(void)setDelegate:(id<BYBuddyDaemonProximityTargetProtocol>)arg1 ;
-(void)sendData:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)fileTransferSessionTemplate;
-(NSXPCConnection *)connection;
@end

