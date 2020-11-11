/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FTServices/FTServices-Structs.h>
@class NSMutableDictionary, NSArray, NSNumber;

@interface FTUserConfiguration : NSObject {

	NSMutableDictionary* _cellularDataAvailableCache;
	NSMutableDictionary* _wifiAllowedCache;
	NSMutableDictionary* _nonBTAllowedCache;
	network_usage_policy_client_sRef _usageClient;
	BOOL _shouldCacheCTConnection;
	CTServerConnectionRef _ctServerConnection;

}

@property (assign,nonatomic) CTServerConnectionRef ctServerConnection;                                         //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nonBTAllowedCache;                                          //@synthesize nonBTAllowedCache=_nonBTAllowedCache - In the implementation block
@property (assign,nonatomic) BOOL shouldCacheCTConnection;                                                     //@synthesize shouldCacheCTConnection=_shouldCacheCTConnection - In the implementation block
@property (nonatomic,readonly) BOOL _nonWifiFaceTimeEntitled; 
@property (assign,nonatomic) BOOL cellularFaceTimeEnabled; 
@property (assign,nonatomic) BOOL allowAnyNetwork; 
@property (nonatomic,copy) NSArray * selectedPhoneNumberRegistrationSubscriptionLabels; 
@property (nonatomic,copy,readonly) NSNumber * selectedPhoneNumberRegistrationSubscriptionNumber; 
@property (assign,nonatomic) BOOL isDeviceInDualPhoneIdentityMode; 
@property (assign,nonatomic) BOOL isDeviceInManualPhoneSelectionMode; 
+(id)sharedInstance;
-(NSNumber *)selectedPhoneNumberRegistrationSubscriptionNumber;
-(BOOL)_nonWifiFaceTimeEntitled;
-(BOOL)wifiAllowedForBundleId:(id)arg1 ;
-(id)init;
-(BOOL)cellularFaceTimeEnabled;
-(void)setIsDeviceInManualPhoneSelectionMode:(BOOL)arg1 ;
-(void)setShouldCacheCTConnection:(BOOL)arg1 ;
-(void)setCellularFaceTimeEnabled:(BOOL)arg1 ;
-(BOOL)cellularDataEnabledForBundleId:(id)arg1 ;
-(void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1 ;
-(BOOL)allowAnyNetwork;
-(BOOL)_getCellularDataEnabledForBundleID:(id)arg1 ;
-(void)_clearCaches;
-(void)setNonBTAllowedCache:(NSMutableDictionary *)arg1 ;
-(BOOL)_getWifiDataAllowedForBundleID:(id)arg1 ;
-(BOOL)isDeviceInDualPhoneIdentityMode;
-(BOOL)isDeviceInManualPhoneSelectionMode;
-(void)_setupUsageHandlerIfNeeded;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(BOOL)_getNonBluetoothDataAllowedForBundleID:(id)arg1 ;
-(CTServerConnectionRef)ctServerConnection;
-(void)setIsDeviceInDualPhoneIdentityMode:(BOOL)arg1 ;
-(void)setAllowAnyNetwork:(BOOL)arg1 ;
-(void)setSelectedPhoneNumberRegistrationSubscriptionLabels:(NSArray *)arg1 ;
-(BOOL)_adequateInternalOrCarrierInstall;
-(BOOL)shouldCacheCTConnection;
-(NSArray *)selectedPhoneNumberRegistrationSubscriptionLabels;
-(NSMutableDictionary *)nonBTAllowedCache;
-(void)dealloc;
-(BOOL)nonBluetoothAllowedForBundleId:(id)arg1 ;
-(void)_setAppCellularDataEnabled:(BOOL)arg1 ;
@end
