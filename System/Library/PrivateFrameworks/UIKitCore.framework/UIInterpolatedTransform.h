/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIVectorOperatable.h>

@class NSString;

@interface UIInterpolatedTransform : NSObject <UIVectorOperatable> {

	SCD_Struct_UI156 _transform;
	double _rotationEpsilon;
	double _scaleEpsilon;
	double _translationEpsilon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueWithCATransform3D:(CATransform3D)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4 ;
+(id)zero;
+(id)epsilon;
+(id)valueWithDecomposedTransform:(SCD_Struct_UI156)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4 ;
+(id)valueWithDecomposedTransform:(SCD_Struct_UI156)arg1 ;
+(id)valueWithCATransform3D:(CATransform3D)arg1 ;
-(BOOL)isUndefined;
-(id)multiplyByScalar:(double)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2 ;
-(NSString *)debugDescription;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI149)arg5 state:(SCD_Struct_UI150)arg6 delta:(double)arg7 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)multiplyByVector:(id)arg1 ;
-(id)getNSValue;
-(id)interpolateTo:(id)arg1 progress:(double)arg2 ;
-(id)getValue;
-(id)addVector:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reinitWithVector:(id)arg1 ;
@end

