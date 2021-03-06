/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CAMSpring : NSObject {

	BOOL _converged;
	double _tension;
	double _friction;
	double _target;
	double _velocity;
	double _epsilon;
	double _maximumTimeDelta;
	double __lastTimestamp;
	double __current;
	double __lowerBound;
	double __upperBound;

}

@property (assign,setter=_setLastTimestamp:,nonatomic) double _lastTimestamp;                      //@synthesize _lastTimestamp=__lastTimestamp - In the implementation block
@property (assign,setter=_setConverged:,getter=isConverged,nonatomic) BOOL converged;              //@synthesize converged=_converged - In the implementation block
@property (assign,setter=_setCurrent:,nonatomic) double _current;                                  //@synthesize _current=__current - In the implementation block
@property (nonatomic,readonly) double _lowerBound;                                                 //@synthesize _lowerBound=__lowerBound - In the implementation block
@property (nonatomic,readonly) double _upperBound;                                                 //@synthesize _upperBound=__upperBound - In the implementation block
@property (assign,nonatomic) double tension;                                                       //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                                                      //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double target;                                                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) double velocity;                                                      //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) double value; 
@property (nonatomic,readonly) double unboundedValue; 
@property (nonatomic,readonly) double epsilon;                                                     //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double maximumTimeDelta;                                              //@synthesize maximumTimeDelta=_maximumTimeDelta - In the implementation block
-(double)target;
-(double)tension;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(double)_current;
-(void)setTension:(double)arg1 ;
-(double)_lastTimestamp;
-(void)setVelocity:(double)arg1 ;
-(void)setTarget:(double)arg1 ;
-(double)velocity;
-(double)epsilon;
-(double)_lowerBound;
-(double)_upperBound;
-(double)value;
-(void)resetToValue:(double)arg1 ;
-(id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3 boundedBetween:(double)arg4 and:(double)arg5 ;
-(void)_updateConverged;
-(void)_setConverged:(BOOL)arg1 ;
-(void)_setLastTimestamp:(double)arg1 ;
-(double)_currentForce;
-(void)_updateWithForce:(double)arg1 timestamp:(double)arg2 ;
-(BOOL)isConverged;
-(void)_setCurrent:(double)arg1 ;
-(double)maximumTimeDelta;
-(id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3 ;
-(double)unboundedValue;
-(void)updateForTimestamp:(double)arg1 ;
-(void)converge;
-(void)setMaximumTimeDelta:(double)arg1 ;
@end

