/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Features/OOBBTPairing-iOS.feature/OOBBTPairing-iOS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACCOOBBTPairingProviderProtocol.h>
#import <libobjc.A.dylib/ACCOOBBTPairingShimProtocol.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue;
@class ACCiAP2ShimServer, ACCOOBBTPairingProvider, NSObject, ACCOOBBTPairingShim, NSMutableDictionary, NSString;

@interface ACCOOBBTPairingFeaturePlugin : NSObject <ACCOOBBTPairingProviderProtocol, ACCOOBBTPairingShimProtocol, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCiAP2ShimServer* _iap2server;
	ACCOOBBTPairingProvider* _oobBtPairingProvider;
	NSObject*<OS_dispatch_queue> _oobBtPairingQueue;
	ACCOOBBTPairingShim* _oobBtPairingShim;
	NSMutableDictionary* _oobBtPairingAccessoryList;

}

@property (assign,nonatomic) BOOL isRunning;                                               //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCiAP2ShimServer * iap2server;                               //@synthesize iap2server=_iap2server - In the implementation block
@property (nonatomic,retain) ACCOOBBTPairingProvider * oobBtPairingProvider;               //@synthesize oobBtPairingProvider=_oobBtPairingProvider - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> oobBtPairingQueue;               //@synthesize oobBtPairingQueue=_oobBtPairingQueue - In the implementation block
@property (nonatomic,retain) ACCOOBBTPairingShim * oobBtPairingShim;                       //@synthesize oobBtPairingShim=_oobBtPairingShim - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * oobBtPairingAccessoryList;              //@synthesize oobBtPairingAccessoryList=_oobBtPairingAccessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(NSString *)pluginName;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)stopOOBBTPairing:(id)arg1 ;
-(ACCOOBBTPairingShim *)oobBtPairingShim;
-(BOOL)isRunning;
-(NSString *)description;
-(void)setOobBtPairingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)oobBtPairing:(id)arg1 accessoryDetached:(id)arg2 ;
-(void)startOOBBTPairing:(id)arg1 ;
-(ACCOOBBTPairingProvider *)oobBtPairingProvider;
-(id)oobBtAccessoryForConnectionID:(unsigned)arg1 ;
-(void)oobBtPairing:(id)arg1 accessoryInfo:(id)arg2 oobBtPairingUID:(id)arg3 accessoryMacAddr:(id)arg4 deviceClass:(unsigned)arg5 ;
-(void)setOobBtPairingProvider:(ACCOOBBTPairingProvider *)arg1 ;
-(void)setOobBtPairingShim:(ACCOOBBTPairingShim *)arg1 ;
-(void)oobBtPairing:(id)arg1 completion:(id)arg2 oobBtPairingUID:(id)arg3 result:(unsigned char)arg4 ;
-(void)oobBtPairing:(id)arg1 accessoryAttached:(id)arg2 accInfoDict:(id)arg3 ;
-(void)setOobBtPairingAccessoryList:(NSMutableDictionary *)arg1 ;
-(ACCiAP2ShimServer *)iap2server;
-(NSMutableDictionary *)oobBtPairingAccessoryList;
-(void)linkKey:(id)arg1 deviceMacAddr:(id)arg2 accessory:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)oobBtPairingQueue;
-(void)oobBtPairing:(id)arg1 legacyConnectionIDForAccessoryUID:(id)arg2 connectionID:(unsigned)arg3 ;
-(void)setIap2server:(ACCiAP2ShimServer *)arg1 ;
@end
