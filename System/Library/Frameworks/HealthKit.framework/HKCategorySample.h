/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@class HKCategoryType;

@interface HKCategorySample : HKSample {

	long long _value;

}

@property (readonly) HKCategoryType * categoryType; 
@property (readonly) long long value; 
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5 ;
+(id)_categorySamplesSplittingDurationWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)hk_integerValue;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)_valueDescription;
-(long long)value;
-(id)initWithCoder:(id)arg1 ;
-(HKCategoryType *)categoryType;
-(void)_setValue:(long long)arg1 ;
@end

