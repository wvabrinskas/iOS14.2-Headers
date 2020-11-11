/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class NSString;

@interface STBatteryStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	unsigned long long _chargingState;
	unsigned long long _percentCharge;
	BOOL _batterySaverModeActive;
	NSString* _chargingDescription;
	unsigned long long _chargingDescriptionType;

}

@property (nonatomic,readonly) unsigned long long chargingState;                                         //@synthesize chargingState=_chargingState - In the implementation block
@property (nonatomic,readonly) unsigned long long percentCharge;                                         //@synthesize percentCharge=_percentCharge - In the implementation block
@property (getter=isBatterySaverModeActive,nonatomic,readonly) BOOL batterySaverModeActive;              //@synthesize batterySaverModeActive=_batterySaverModeActive - In the implementation block
@property (nonatomic,copy,readonly) NSString * chargingDescription;                                      //@synthesize chargingDescription=_chargingDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long chargingDescriptionType;                               //@synthesize chargingDescriptionType=_chargingDescriptionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)init;
-(unsigned long long)hash;
-(unsigned long long)chargingState;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)chargingDescriptionType;
-(id)initWithChargingState:(unsigned long long)arg1 percentCharge:(unsigned long long)arg2 batterySaverModeActive:(BOOL)arg3 chargingDescription:(id)arg4 chargingDescriptionType:(unsigned long long)arg5 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)percentCharge;
-(id)dataByApplyingDiff:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)diffFromData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)isBatterySaverModeActive;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)chargingDescription;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
