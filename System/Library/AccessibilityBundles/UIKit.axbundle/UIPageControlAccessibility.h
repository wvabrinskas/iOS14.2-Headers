/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIPageControlAccessibility_super.h>

@interface UIPageControlAccessibility : __UIPageControlAccessibility_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(BOOL)canBecomeFocused;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)_accessibilityRetainsFocusOnScreenChange;
-(long long)_accessibilityPageIndex;
-(long long)_accessibilityPageCount;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setCurrentPage:(long long)arg1 ;
-(id)accessibilityUserInputLabels;
-(CGRect)accessibilityFrame;
-(unsigned long long)_accessibilityAutomationType;
-(id)accessibilityPath;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityValue;
-(void)_accessibilityCurrentPageDidChange;
@end

