/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAction.h>

@class HMDLightProfile, NSUUID, HMFUnfairLock, NSNotificationCenter;

@interface HMDLightProfileNaturalLightingAction : HMDAction {

	BOOL _naturalLightingEnabled;
	HMDLightProfile* _lightProfile;
	NSUUID* _lightProfileUUID;
	HMFUnfairLock* _lock;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) HMFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;              //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                       //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (copy,readonly) NSUUID * lightProfileUUID;                                  //@synthesize lightProfileUUID=_lightProfileUUID - In the implementation block
@property (retain) HMDLightProfile * lightProfile;                                    //@synthesize lightProfile=_lightProfile - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
+(id)actionWithDictionaryRepresentation:(id)arg1 actionSet:(id)arg2 ;
-(NSNotificationCenter *)notificationCenter;
-(HMFUnfairLock *)lock;
-(id)attributeDescriptions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(Class)modelClass;
-(BOOL)isNaturalLightingEnabled;
-(NSUUID *)lightProfileUUID;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(unsigned long long)type;
-(HMDLightProfile *)lightProfile;
-(id)initWithCoder:(id)arg1 ;
-(void)setLightProfile:(HMDLightProfile *)arg1 ;
-(id)associatedAccessories;
-(BOOL)isAssociatedWithAccessory:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)stateDump;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3 ;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(BOOL)arg3 actionSet:(id)arg4 notificationCenter:(id)arg5 ;
-(id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(BOOL)arg3 actionSet:(id)arg4 ;
-(void)handleAccessoryProfileAddedNotification:(id)arg1 ;
@end

