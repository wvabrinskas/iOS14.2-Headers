/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKWorkoutComparisonFilter : _HKComparisonFilter
+(BOOL)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
+(BOOL)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5 ;
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithDuration:(double)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalDistance:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalEnergyBurned:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalFlightsClimbed:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithActivityType:(unsigned long long)arg1 ;
-(BOOL)_acceptsWorkoutWithTotalSwimmingStrokeCount:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithGoal:(id)arg1 ;
-(BOOL)_acceptsWorkoutWithGoalType:(unsigned long long)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
@end
