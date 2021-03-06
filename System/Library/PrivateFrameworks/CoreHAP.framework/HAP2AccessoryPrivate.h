/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber;


@protocol HAP2AccessoryPrivate <HAP2Accessory>
@property (nonatomic,retain) NSNumber * internalSleepIntervalMs; 
@required
-(NSNumber *)internalSleepIntervalMs;
-(void)setInternalSleepIntervalMs:(id)arg1;
-(void)updateConnectionState:(unsigned long long)arg1;
-(BOOL)updateDiscoveredServices:(id)arg1;
-(void)characteristicValueChanged:(id)arg1;

@end

