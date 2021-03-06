/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NWAccumulator;

@interface NWDeviceReport : NSObject {

	BOOL _batteryExternalPowerIsConnected;
	BOOL _batteryIsCharging;
	BOOL _batteryFullyCharged;
	BOOL _batteryAtWarnLevel;
	BOOL _batteryAtCriticalLevel;
	BOOL _rnfEnabled;
	BOOL _devicePluggedIn;
	BOOL _deviceScreenOn;
	unsigned _batteryPercentage;
	unsigned _batteryCurrentCapacity;
	unsigned _batteryMaximumCapacity;
	unsigned _batteryDesignCapacity;
	unsigned _batteryAbsoluteCapacity;
	unsigned _batteryVoltage;
	unsigned _batteryTimeRemaining;
	unsigned _motionState;
	unsigned _thermalPressure;
	NSString* _serialNumber;
	NWAccumulator* _batteryAccumulator;

}

@property (assign,nonatomic) unsigned batteryPercentage;                        //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (assign,nonatomic) unsigned batteryCurrentCapacity;                   //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryMaximumCapacity;                   //@synthesize batteryMaximumCapacity=_batteryMaximumCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryDesignCapacity;                    //@synthesize batteryDesignCapacity=_batteryDesignCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryAbsoluteCapacity;                  //@synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryVoltage;                           //@synthesize batteryVoltage=_batteryVoltage - In the implementation block
@property (assign,nonatomic) unsigned batteryTimeRemaining;                     //@synthesize batteryTimeRemaining=_batteryTimeRemaining - In the implementation block
@property (assign,nonatomic) BOOL batteryExternalPowerIsConnected;              //@synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected - In the implementation block
@property (assign,nonatomic) BOOL batteryIsCharging;                            //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
@property (assign,nonatomic) BOOL batteryFullyCharged;                          //@synthesize batteryFullyCharged=_batteryFullyCharged - In the implementation block
@property (assign,nonatomic) BOOL batteryAtWarnLevel;                           //@synthesize batteryAtWarnLevel=_batteryAtWarnLevel - In the implementation block
@property (assign,nonatomic) BOOL batteryAtCriticalLevel;                       //@synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL rnfEnabled;                                   //@synthesize rnfEnabled=_rnfEnabled - In the implementation block
@property (assign,nonatomic) BOOL devicePluggedIn;                              //@synthesize devicePluggedIn=_devicePluggedIn - In the implementation block
@property (assign,nonatomic) BOOL deviceScreenOn;                               //@synthesize deviceScreenOn=_deviceScreenOn - In the implementation block
@property (assign,nonatomic) unsigned motionState;                              //@synthesize motionState=_motionState - In the implementation block
@property (assign,nonatomic) unsigned thermalPressure;                          //@synthesize thermalPressure=_thermalPressure - In the implementation block
@property (nonatomic,retain) NWAccumulator * batteryAccumulator;                //@synthesize batteryAccumulator=_batteryAccumulator - In the implementation block
-(NSString *)serialNumber;
-(unsigned)motionState;
-(void)setBatteryTimeRemaining:(unsigned)arg1 ;
-(void)setDeviceScreenOn:(BOOL)arg1 ;
-(void)setBatteryAtWarnLevel:(BOOL)arg1 ;
-(void)setBatteryMaximumCapacity:(unsigned)arg1 ;
-(unsigned)thermalPressure;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setRnfEnabled:(BOOL)arg1 ;
-(void)setDevicePluggedIn:(BOOL)arg1 ;
-(unsigned)batteryPercentage;
-(BOOL)batteryAtCriticalLevel;
-(BOOL)devicePluggedIn;
-(BOOL)deviceScreenOn;
-(id)createAWDReport;
-(void)setThermalPressure:(unsigned)arg1 ;
-(void)setBatteryAtCriticalLevel:(BOOL)arg1 ;
-(void)setBatteryCurrentCapacity:(unsigned)arg1 ;
-(unsigned)batteryVoltage;
-(id)description;
-(void)setBatteryExternalPowerIsConnected:(BOOL)arg1 ;
-(BOOL)batteryIsCharging;
-(unsigned)batteryDesignCapacity;
-(BOOL)batteryFullyCharged;
-(unsigned)batteryMaximumCapacity;
-(BOOL)batteryAtWarnLevel;
-(void)setBatteryVoltage:(unsigned)arg1 ;
-(unsigned)batteryCurrentCapacity;
-(BOOL)batteryExternalPowerIsConnected;
-(unsigned)batteryTimeRemaining;
-(NWAccumulator *)batteryAccumulator;
-(void)setBatteryPercentage:(unsigned)arg1 ;
-(void)setBatteryDesignCapacity:(unsigned)arg1 ;
-(void)setBatteryAbsoluteCapacity:(unsigned)arg1 ;
-(unsigned)batteryAbsoluteCapacity;
-(BOOL)rnfEnabled;
-(void)setBatteryFullyCharged:(BOOL)arg1 ;
-(void)setBatteryIsCharging:(BOOL)arg1 ;
-(void)setMotionState:(unsigned)arg1 ;
-(void)setBatteryAccumulator:(NWAccumulator *)arg1 ;
@end

