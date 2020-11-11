/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCPlatformIOKitPowerPluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(int)getExternalBatteryChargingType;
-(int)getBatteryChargingType;
-(id)createSleepNotificationClient;
-(void)clientHandledSleepNotification:(id)arg1;
-(BOOL)isExternalChargerConnected;
-(void)destroyBatteryNotificationsForClient:(id)arg1;
-(void)destroySleepNotificationsForClient:(id)arg1;
-(id)createBatteryNotificationClient;
-(BOOL)getBatteryChargingTypeIsInductive;
-(BOOL)getExternalBatteryChargingTypeIsInductive;
-(int)getBatteryChargingState;
-(unsigned char)getBatteryChargeLevel;

@end
