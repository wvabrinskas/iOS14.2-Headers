/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NFHardwareManagerXPCDelegate.h>
#import <libobjc.A.dylib/NFHardwareManagerCallbacks.h>

@class NFHardwareManagerXPC, NSMutableSet, NSArray, NSDictionary, NFHardwareControllerInfo, NSUUID, NSString;

@interface NFHardwareManager : NSObject <NFHardwareManagerXPCDelegate, NFHardwareManagerCallbacks> {

	NFHardwareManagerXPC* _xpc;
	NSMutableSet* _sessions;
	BOOL _hasEventListener;
	NSMutableSet* _eventListeners;
	NSArray* _secureElements;
	NSDictionary* _secureElementsById;
	unsigned _hwSupport;
	BOOL _didPreWarm;
	long long _type;

}

@property (readonly) NFHardwareControllerInfo * controllerInfo; 
@property (readonly) NSUUID * blessedUser; 
@property (nonatomic,readonly) BOOL isBackgroundTagReadingAvailable; 
@property (assign,nonatomic) BOOL suspendBackgroundTagReading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHardwareManager;
+(id)sharedHardwareManagerWithNoUI;
-(void)invalidateConnection;
-(id)getDieID;
-(id)secureElements;
-(unsigned)queryHardwareSupport:(id*)arg1 ;
-(BOOL)getHeadlessFactoryMode:(id*)arg1 ;
-(id)startECommercePaymentSession:(/*^block*/id)arg1 ;
-(id)startReaderSessionWithActionSheetUI:(/*^block*/id)arg1 ;
-(id)pushSignedRF:(id)arg1 ;
-(id)getTemperature:(double*)arg1 ;
-(id)rfSettings;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)startNdefTagSession:(/*^block*/id)arg1 ;
-(id)startHCESession:(/*^block*/id)arg1 ;
-(BOOL)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2 ;
-(id)setChipscope:(BOOL)arg1 ;
-(id)startPeerPaymentSession:(/*^block*/id)arg1 ;
-(id)startSecureElementAndHCESession:(/*^block*/id)arg1 ;
-(void)configureReaderModeRFForTransitPartner:(BOOL)arg1 transitPartner:(unsigned)arg2 callback:(/*^block*/id)arg3 ;
-(BOOL)preWarm;
-(BOOL)hasCard;
-(id)releaseSinglePollExpressModeAssertion;
-(id)_startReaderSessionWithUI:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(id)startSecureElementManagerSessionWithPriority:(BOOL)arg1 callback:(/*^block*/id)arg2 ;
-(id)getUniqueFDRKey:(id*)arg1 ;
-(id)startLoyaltyAndContactlessPaymentSession:(/*^block*/id)arg1 ;
-(id)startReaderSession:(/*^block*/id)arg1 ;
-(NSUUID *)blessedUser;
-(void)refreshSecureElements;
-(void)failForwardCompleted;
-(id)setRadioEnabledSetting:(BOOL)arg1 ;
-(unsigned)checkUserBlessing:(id)arg1 hasCards:(BOOL*)arg2 ;
-(void)dumpLPMDebugLog;
-(id)getPowerCounters:(id*)arg1 ;
-(id)startFieldDetectSession:(/*^block*/id)arg1 ;
-(void)setAuthorization:(id)arg1 ;
-(id)hostEmulationLog;
-(id)getRadioEnabledState:(long long*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)_sessionAttribute;
-(id)startSesHatSession:(/*^block*/id)arg1 ;
-(void)sessionDidEnd:(id)arg1 ;
-(NFHardwareControllerInfo *)controllerInfo;
-(void)unregisterEventListener:(id)arg1 ;
-(unsigned)setBlessedUser:(id)arg1 withAuthorization:(id)arg2 ;
-(BOOL)isExpressAppletTypeSupported:(unsigned char)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)secureElementWithIdentifier:(id)arg1 ;
-(void)temperatureChanged:(double)arg1 ;
-(id)startTrustSession:(/*^block*/id)arg1 ;
-(id)configureHeadlessFactoryMode:(BOOL)arg1 ;
-(id)startContactlessPaymentSession:(/*^block*/id)arg1 ;
-(id)startSecureElementManagerSessionWithPriority:(/*^block*/id)arg1 ;
-(id)startContactlessUICCSession:(/*^block*/id)arg1 ;
-(id)stateInfo:(id*)arg1 ;
-(id)enableHeadlessTestMode:(unsigned short)arg1 ;
-(id)startContactlessSession:(/*^block*/id)arg1 ;
-(BOOL)areSessionsAllowed;
-(BOOL)triggerHammerfestRecovery;
-(BOOL)expressModesEnabled;
-(BOOL)isExpressModeSupported;
-(id)startSecureElementManagerSession:(/*^block*/id)arg1 ;
-(id)toggleGPIO:(unsigned short)arg1 ;
-(void)didChangeRadioState:(BOOL)arg1 ;
-(id)connectToXPCManager;
-(id)getHeadlessModeFlags:(unsigned*)arg1 ;
-(unsigned)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3 ;
-(id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)disableLPEMFeature:(unsigned long long)arg1 ;
-(id)getRadioEnabledSetting:(BOOL*)arg1 ;
-(void)setSuspendBackgroundTagReading:(BOOL)arg1 ;
-(BOOL)secureElementBootHistory:(id*)arg1 ;
-(id)disableHeadless;
-(void)didInterrupt:(id)arg1 ;
-(void)registerEventListener:(id)arg1 ;
-(unsigned)checkUserBlessing:(id)arg1 ;
-(BOOL)isBackgroundTagReadingAvailable;
-(BOOL)setFieldDetectEnabled:(BOOL)arg1 ;
-(BOOL)isInRestrictedMode;
-(id)controllerInfoWithError:(id*)arg1 ;
-(BOOL)triggerDelayedWake:(unsigned char)arg1 ;
-(id)enableLPEMFeature:(unsigned long long)arg1 ;
-(BOOL)suspendBackgroundTagReading;
-(id)updateHWSupportWithXPC:(id)arg1 ;
-(id)startSinglePollExpressModeAssertion:(double)arg1 ;
-(void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(BOOL)arg2 ;
-(void)actOnUserInitiatedSystemShutDown:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidate;
-(unsigned)getHwSupport;
-(id)getDieIDWithError:(id*)arg1 ;
@end

