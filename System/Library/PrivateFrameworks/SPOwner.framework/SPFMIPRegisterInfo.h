/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString, NSSet, NSDate, NSNumber;


@protocol SPFMIPRegisterInfo <NSObject>
@property (nonatomic,copy,readonly) NSUUID * baUUID; 
@property (nonatomic,copy,readonly) NSString * serviceState; 
@property (nonatomic,copy,readonly) NSSet * serviceDisabledReasons; 
@property (nonatomic,copy,readonly) NSDate * beaconZoneCreationDate; 
@property (nonatomic,copy,readonly) NSNumber * beaconZoneCreationErrorCode; 
@property (nonatomic,copy,readonly) NSDate * lastKeyRollDate; 
@required
-(NSString *)serviceState;
-(NSUUID *)baUUID;
-(NSDate *)beaconZoneCreationDate;
-(NSNumber *)beaconZoneCreationErrorCode;
-(NSDate *)lastKeyRollDate;
-(NSSet *)serviceDisabledReasons;

@end

