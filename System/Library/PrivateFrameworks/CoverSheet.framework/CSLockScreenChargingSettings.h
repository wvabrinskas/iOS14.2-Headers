/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenChargingSettings : PTSettings {

	BOOL _showWirelessAndAccessoryAnimations;
	double _accessoryAnimationDelayInMilliseconds;
	double _accessoryAnimationBlockingDurationAfterBootInSeconds;
	double _wirelessChargingDebounceDurationInSeconds;
	double _wirelessChargingFirmwareUpdateDebounceDurationInSeconds;
	long long _wirelessChargingAnimationType;
	long long _wiredChargingAnimationType;

}

@property (assign,nonatomic) double accessoryAnimationDelayInMilliseconds;                                //@synthesize accessoryAnimationDelayInMilliseconds=_accessoryAnimationDelayInMilliseconds - In the implementation block
@property (assign,nonatomic) double accessoryAnimationBlockingDurationAfterBootInSeconds;                 //@synthesize accessoryAnimationBlockingDurationAfterBootInSeconds=_accessoryAnimationBlockingDurationAfterBootInSeconds - In the implementation block
@property (assign,nonatomic) double wirelessChargingDebounceDurationInSeconds;                            //@synthesize wirelessChargingDebounceDurationInSeconds=_wirelessChargingDebounceDurationInSeconds - In the implementation block
@property (assign,nonatomic) double wirelessChargingFirmwareUpdateDebounceDurationInSeconds;              //@synthesize wirelessChargingFirmwareUpdateDebounceDurationInSeconds=_wirelessChargingFirmwareUpdateDebounceDurationInSeconds - In the implementation block
@property (assign,nonatomic) BOOL showWirelessAndAccessoryAnimations;                                     //@synthesize showWirelessAndAccessoryAnimations=_showWirelessAndAccessoryAnimations - In the implementation block
@property (assign,nonatomic) long long wirelessChargingAnimationType;                                     //@synthesize wirelessChargingAnimationType=_wirelessChargingAnimationType - In the implementation block
@property (assign,nonatomic) long long wiredChargingAnimationType;                                        //@synthesize wiredChargingAnimationType=_wiredChargingAnimationType - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)wirelessChargingFirmwareUpdateDebounceDurationInSeconds;
-(double)accessoryAnimationBlockingDurationAfterBootInSeconds;
-(double)wirelessChargingDebounceDurationInSeconds;
-(double)accessoryAnimationDelayInMilliseconds;
-(void)setAccessoryAnimationDelayInMilliseconds:(double)arg1 ;
-(void)setAccessoryAnimationBlockingDurationAfterBootInSeconds:(double)arg1 ;
-(void)setWirelessChargingDebounceDurationInSeconds:(double)arg1 ;
-(void)setWirelessChargingFirmwareUpdateDebounceDurationInSeconds:(double)arg1 ;
-(void)setShowWirelessAndAccessoryAnimations:(BOOL)arg1 ;
-(void)setWirelessChargingAnimationType:(long long)arg1 ;
-(void)setWiredChargingAnimationType:(long long)arg1 ;
-(long long)accessoryTypeForAnimationType:(long long)arg1 ;
-(BOOL)showWirelessAndAccessoryAnimations;
-(long long)wirelessChargingAnimationType;
-(long long)wiredChargingAnimationType;
@end

