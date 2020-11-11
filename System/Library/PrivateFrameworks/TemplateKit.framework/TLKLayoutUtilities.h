/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TemplateKit/TemplateKit-Structs.h>
@interface TLKLayoutUtilities : NSObject
+(double)flooredValue:(double)arg1 inView:(id)arg2 ;
+(CGRect)deviceScaledRoundedRect:(CGRect)arg1 ;
+(void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2 ;
+(UIEdgeInsets)deviceScaledRoundedInsets:(UIEdgeInsets)arg1 ;
+(CGSize)idealImageSizeWithSize:(CGSize)arg1 fittingSize:(CGSize)arg2 ;
+(double)scaledValueForValue:(double)arg1 withFont:(id)arg2 ;
+(BOOL)isWideScreen;
+(id)controlsInView:(id)arg1 ;
+(void)applyRowBoundedSizingToImageView:(id)arg1 isCompactWidth:(BOOL)arg2 ;
+(void)applyMinimumSizeTouchInsetsForControlsInView:(id)arg1 ;
+(BOOL)widthIsCompact:(double)arg1 ;
+(double)roundedValue:(double)arg1 inView:(id)arg2 ;
+(CGSize)maxThumbnailSizeIsCompactWidth:(BOOL)arg1 ;
+(double)contentHeightOfTableView:(id)arg1 forWidth:(double)arg2 maxHeight:(double)arg3 ;
+(CGSize)minimumButtonSize;
+(double)ceilingValue:(double)arg1 inView:(id)arg2 ;
+(double)deviceScaledFlooredValue:(double)arg1 ;
+(void)setDynamicBaselineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3 ;
+(double)deviceScaledRoundedValue:(double)arg1 ;
+(CGSize)maxThumbnailSize;
+(BOOL)isSuperLargeAccessibilitySize;
+(void)requireIntrinsicSizeForView:(id)arg1 ;
@end
