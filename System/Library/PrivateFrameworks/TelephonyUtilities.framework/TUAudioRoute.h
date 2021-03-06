/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TURoute.h>

@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute {

	NSString* _avAudioRouteName;
	NSDictionary* _route;

}

@property (nonatomic,copy,readonly) NSString * avAudioRouteName;                                         //@synthesize avAudioRouteName=_avAudioRouteName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bluetoothProductIdentifier; 
@property (getter=isHeadphoneJackConnected,nonatomic,readonly) BOOL headphoneJackConnected; 
@property (nonatomic,copy,readonly) NSDictionary * route;                                                //@synthesize route=_route - In the implementation block
-(NSDictionary *)route;
-(long long)deviceType;
-(BOOL)isReceiver;
-(BOOL)isCurrentlyPicked;
-(id)identifiersOfOtherConnectedDevices;
-(long long)bluetoothEndpointType;
-(BOOL)isWiredHeadphones;
-(id)customDescription;
-(BOOL)isBluetoothLE;
-(NSString *)bluetoothProductIdentifier;
-(BOOL)isWiredHeadset;
-(BOOL)isAirTunes;
-(BOOL)isPreferred;
-(BOOL)isCarAudio;
-(BOOL)isSpeaker;
-(BOOL)isPreferredAndActive;
-(BOOL)_routeTypeEqualTo:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isBluetooth;
-(BOOL)isWirelessHeadset;
-(BOOL)isDefaultRoute;
-(NSString *)avAudioRouteName;
-(BOOL)supportsPreferredAndActive;
-(BOOL)isHeadphoneJackConnected;
-(BOOL)isHandset;
@end

