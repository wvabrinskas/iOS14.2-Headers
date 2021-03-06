/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessorySettingUpdateProtocol.h>
#import <libobjc.A.dylib/HMDAccessorySettingProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDSettingBaseProtocol.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSString, NSArray, NSMutableSet, NSMutableArray, NSUUID, NSObject, HMFMessageDispatcher, HMDAccessorySettingModel;

@interface HMDAccessorySetting : HMFObject <HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, NSSecureCoding, HMDSettingBaseProtocol> {

	id<HMFLocking> _lock;
	NSMutableSet* _inMemoryCachedConstraintRemovals;
	NSMutableArray* _inMemoryCachedConstraints;
	id _value;
	NSString* _name;
	long long _type;
	NSMutableArray* _constraints;
	BOOL _reflected;
	unsigned long long _configurationVersion;
	NSUUID* _parentIdentifier;
	NSString* _keyPath;
	NSUUID* _identifier;
	unsigned long long _properties;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMFMessageDispatcher* _messageDispatcher;
	HMDAccessorySettingModel* _model;
	NSArray* _models;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDAccessorySettingModel * model;                                //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSArray * models;                                           //@synthesize models=_models - In the implementation block
@property (assign,nonatomic) unsigned long long configurationVersion;                 //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (readonly) BOOL isCollectionType; 
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long properties;                                   //@synthesize properties=_properties - In the implementation block
@property (readonly) NSString * keyPath;                                              //@synthesize keyPath=_keyPath - In the implementation block
@property (getter=isReflected) BOOL reflected;                                        //@synthesize reflected=_reflected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long type; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * constraints; 
@property (copy,readonly) id value; 
@property (copy,readonly) NSUUID * parentIdentifier;                                  //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)supportedValueClasses;
+(id)supportedConstraintClasses;
+(id)decodedValue:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSArray *)constraints;
-(HMDAccessorySettingModel *)model;
-(NSString *)keyPath;
-(id)init;
-(void)setConfigurationVersion:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setGroup:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)models;
-(id)initWithModel:(id)arg1 ;
-(NSString *)name;
-(BOOL)isReflected;
-(unsigned long long)properties;
-(NSString *)description;
-(HMFMessageDispatcher *)messageDispatcher;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isCollectionType;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(unsigned long long)configurationVersion;
-(long long)type;
-(void)setReflected:(BOOL)arg1 ;
-(id)value;
-(id)initWithCoder:(id)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
-(void)_setType:(long long)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)logIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)parentIdentifier;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(BOOL)isConstraintMergeStrategyReflection;
-(id)modelsForConstraintsUpdate:(id)arg1 ;
-(id)copyReplica;
-(id)copyIdentical;
-(BOOL)shouldEncodeForCoder:(id)arg1 ;
-(BOOL)compareConstraints:(id)arg1 ;
-(BOOL)shouldBlockSettingUpdateFromVersion:(id)arg1 isMultiUserEnabled:(BOOL)arg2 ;
-(BOOL)shouldTurnOffPersonalRequestsOnLanguageChangeTo:(id)arg1 supportedMultiUserLanguageCodes:(id)arg2 isMultiUserEnabled:(BOOL)arg3 ;
-(BOOL)canAddConstraint:(id)arg1 error:(id*)arg2 ;
-(BOOL)canRemoveConstraint:(id)arg1 ;
-(void)addConstraintsInMemory:(id)arg1 ;
-(void)removeConstraintsInMemory:(id)arg1 ;
-(id)constraintWithIdentifier:(id)arg1 ;
-(id)inMemoryConstraintWithIdentifier:(id)arg1 ;
-(id)counterpartConstraintFor:(id)arg1 ;
-(void)mergeConstraintsFromOther:(id)arg1 ;
-(id)_modelsForMergeStrategyConstraintsUpdate:(id)arg1 ;
-(id)constraintsForCodingXPC;
-(id)replicatedMissingConstraintsFrom:(id)arg1 ;
-(void)_mergeConstraintsLocallyWithAdditions:(id)arg1 removals:(id)arg2 ;
@end

