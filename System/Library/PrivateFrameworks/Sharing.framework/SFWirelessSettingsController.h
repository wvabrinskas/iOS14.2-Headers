/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Sharing/Sharing-Structs.h>
@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	BOOL _wifiEnabled;
	BOOL _airplaneModeEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	unsigned long long _uwbStatus;
	BOOL _firstCallbackCompleted;
	BOOL _wirelessCarPlayEnabled;
	BOOL _wirelessAccessPointEnabled;
	SFOperationRef _information;
	unsigned long long _ultraWideBandStatus;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled; 
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled; 
@property (getter=isWifiEnabled) BOOL wifiEnabled; 
@property (readonly) unsigned long long ultraWideBandStatus;                                   //@synthesize ultraWideBandStatus=_ultraWideBandStatus - In the implementation block
@property (getter=isWirelessAccessPointEnabled) BOOL wirelessAccessPointEnabled; 
@property (getter=isWirelessCarPlayEnabled,readonly) BOOL wirelessCarPlayEnabled; 
@property (readonly) BOOL deviceSupportsWAPI; 
-(BOOL)isAirplaneModeEnabled;
-(id)init;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(BOOL)isWirelessCarPlayEnabled;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(BOOL)isBluetoothEnabled;
-(BOOL)deviceSupportsWAPI;
-(BOOL)isWirelessAccessPointEnabled;
-(void)setWirelessAccessPointEnabled:(BOOL)arg1 ;
-(unsigned long long)ultraWideBandStatus;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(BOOL)isWifiEnabled;
-(void)invalidate;
-(void)dealloc;
@end

