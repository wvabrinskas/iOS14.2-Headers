/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKUnit.h>

@class _HKFactorization, _HKDimension;

@interface _HKCompoundUnit : HKUnit {

	_HKFactorization* _baseUnits;
	_HKDimension* _dimension;
	os_unfair_lock_s _dimensionLock;

}
+(BOOL)supportsSecureCoding;
+(id)unitWithBaseUnits:(id)arg1 ;
-(id)unitString;
-(id)dimension;
-(id)_initWithBaseUnits:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_baseUnits;
-(id)initWithCoder:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
@end
