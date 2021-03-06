/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMLightProfile, NSUUID, NSString, NSArray;

@interface HMLightProfileNaturalLightingAction : HMAction <NSSecureCoding, HMObjectMerge, HMFLogging, HMFObject> {

	BOOL _naturalLightingEnabled;
	HMLightProfile* _lightProfile;
	NSUUID* _lightProfileUUID;

}

@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;              //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (retain) HMLightProfile * lightProfile;                                     //@synthesize lightProfile=_lightProfile - In the implementation block
@property (readonly) NSUUID * lightProfileUUID;                                       //@synthesize lightProfileUUID=_lightProfileUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
+(id)new;
+(id)shortDescription;
-(NSArray *)attributeDescriptions;
-(BOOL)_handleUpdates:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)encodeAsProtoBuf;
-(BOOL)isNaturalLightingEnabled;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)lightProfileUUID;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(unsigned long long)type;
-(HMLightProfile *)lightProfile;
-(id)initWithUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(id)logIdentifier;
-(id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(BOOL)arg3 ;
-(void)setLightProfile:(HMLightProfile *)arg1 ;
-(id)initWithLightProfile:(id)arg1 naturalLightingEnabled:(BOOL)arg2 ;
-(id)initWithPBNaturalLightingAction:(id)arg1 home:(id)arg2 ;
-(void)updateNaturalLightingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)shortDescription;
-(BOOL)isValid;
@end

