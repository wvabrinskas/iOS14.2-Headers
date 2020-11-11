/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CLRegion.h>

@class CLBeaconIdentityConstraint, NSUUID, NSNumber;

@interface CLBeaconRegion : CLRegion

@property (nonatomic,copy,readonly) CLBeaconIdentityConstraint * beaconIdentityConstraint; 
@property (nonatomic,copy,readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSUUID * proximityUUID; 
@property (nonatomic,copy,readonly) NSNumber * major; 
@property (nonatomic,copy,readonly) NSNumber * minor; 
@property (assign,nonatomic) BOOL notifyEntryStateOnDisplay; 
+(BOOL)supportsSecureCoding;
+(id)any;
-(CLBeaconIdentityConstraint *)beaconIdentityConstraint;
-(id)init;
-(id)initWithUUID:(id)arg1 identifier:(id)arg2 ;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(id)peripheralDataWithMeasuredPower:(id)arg1 ;
-(NSNumber *)major;
-(void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBeaconIdentityConstraint:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(NSUUID *)proximityUUID;
-(id)initWithCoder:(id)arg1 ;
-(void)setNotifyEntryStateOnDisplay:(BOOL)arg1 ;
-(char)_measuredPowerForDevice;
-(NSUUID *)UUID;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(BOOL)notifyEntryStateOnDisplay;
-(NSNumber *)minor;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(id)initWithProximityUUID:(id)arg1 identifier:(id)arg2 ;
@end
