/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <NetworkRelay/NRDeviceProperties.h>

@class NSData;

@interface NRDevicePairingProperties : NRDeviceProperties {

	BOOL _wasInitiallySetupUsingIDSPairing;
	BOOL _pairWithSPPLink;
	BOOL _isAltAccountPairing;
	NSData* _outOfBandKey;
	NSData* _bluetoothMACAddress;

}

@property (nonatomic,retain) NSData * outOfBandKey;                              //@synthesize outOfBandKey=_outOfBandKey - In the implementation block
@property (assign,nonatomic) BOOL wasInitiallySetupUsingIDSPairing;              //@synthesize wasInitiallySetupUsingIDSPairing=_wasInitiallySetupUsingIDSPairing - In the implementation block
@property (assign,nonatomic) BOOL pairWithSPPLink;                               //@synthesize pairWithSPPLink=_pairWithSPPLink - In the implementation block
@property (assign,nonatomic) BOOL isAltAccountPairing;                           //@synthesize isAltAccountPairing=_isAltAccountPairing - In the implementation block
@property (nonatomic,retain) NSData * bluetoothMACAddress;                       //@synthesize bluetoothMACAddress=_bluetoothMACAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)bluetoothMACAddress;
-(void)setBluetoothMACAddress:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)outOfBandKey;
-(void)setOutOfBandKey:(NSData *)arg1 ;
-(BOOL)wasInitiallySetupUsingIDSPairing;
-(void)setWasInitiallySetupUsingIDSPairing:(BOOL)arg1 ;
-(BOOL)pairWithSPPLink;
-(void)setPairWithSPPLink:(BOOL)arg1 ;
-(BOOL)isAltAccountPairing;
-(void)setIsAltAccountPairing:(BOOL)arg1 ;
@end
