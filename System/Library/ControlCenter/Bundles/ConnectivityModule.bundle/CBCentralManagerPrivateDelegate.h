/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBCentralManagerPrivateDelegate <CBCentralManagerDelegate>
@optional
-(void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3;
-(void)centralManager:(id)arg1 didLoseZone:(id)arg2 mask:(id)arg3;
-(void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;
-(void)centralManager:(id)arg1 didUpdatePeripheralConnectionState:(id)arg2;
-(void)centralManager:(id)arg1 canSendDataToPeripheral:(id)arg2;
-(void)centralManager:(id)arg1 didUpdateConnectionParameters:(id)arg2 interval:(id)arg3 latency:(id)arg4 supervisionTimeout:(id)arg5;
-(void)centralManager:(id)arg1 didSendBytes:(id)arg2 toPeripheral:(id)arg3 withError:(id)arg4;
-(void)centralManager:(id)arg1 didReceiveData:(id)arg2 fromPeripheral:(id)arg3;
-(void)centralManager:(id)arg1 didUpdateControllerBTClockForPeripheral:(id)arg2 eventType:(id)arg3 seconds:(id)arg4 microseconds:(id)arg5 localClock:(id)arg6 remoteClock:(id)arg7;
-(void)centralManager:(id)arg1 didFindPeripheral:(id)arg2 forType:(id)arg3;
-(void)centralManager:(id)arg1 application:(id)arg2 isActive:(BOOL)arg3;
-(void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;
-(void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2;

@end

