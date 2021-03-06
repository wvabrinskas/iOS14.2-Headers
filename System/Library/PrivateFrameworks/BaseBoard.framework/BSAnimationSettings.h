/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAMediaTimingFunction, NSString;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {

	os_unfair_lock_s _lock;
	float _lock_speed;
	double _lock_storedDuration;
	double _lock_delay;
	double _lock_frameInterval;
	CAMediaTimingFunction* _lock_timingFunction;
	double _lock_mass;
	double _lock_stiffness;
	double _lock_damping;
	double _lock_epsilon;
	double _lock_initialVelocity;
	BOOL _lock_storedDurationIsDirty;
	BOOL _mutable;
	BOOL _isSpring;

}

@property (nonatomic,readonly) double mass; 
@property (nonatomic,readonly) double stiffness; 
@property (nonatomic,readonly) double damping; 
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,readonly) double initialVelocity; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) double frameInterval; 
@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction; 
@property (nonatomic,readonly) float speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)tryAnimatingWithSettings:(id)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
-(double)mass;
-(float)speed;
-(double)damping;
-(void)applyToCAAnimation:(id)arg1 ;
-(double)stiffness;
-(id)init;
-(double)delay;
-(unsigned long long)hash;
-(double)initialVelocity;
-(double)frameInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(CAMediaTimingFunction *)timingFunction;
-(BOOL)isEqual:(id)arg1 ;
-(double)epsilon;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(double)duration;
-(BOOL)isSpringAnimation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

