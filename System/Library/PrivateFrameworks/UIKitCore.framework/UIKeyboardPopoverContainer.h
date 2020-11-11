/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIKeyboardPopover, UIKBVisualEffectView, _UIPopoverView, _UIKeyboardPopoverAffordance, NSLayoutConstraint, UIView;

@interface UIKeyboardPopoverContainer : NSObject {

	_UIKeyboardPopover* _popoverContainerView;
	UIKBVisualEffectView* _backdrop;
	_UIPopoverView* _popover;
	_UIKeyboardPopoverAffordance* _affordance;
	CGRect _targetFull;
	double _arrowOffset;
	unsigned long long _direction;
	NSLayoutConstraint* _keyboardAreaHeight;

}

@property (retain,readonly) UIView * affordance; 
@property (readonly) CGRect frame; 
+(id)borderColor;
+(double)shadowOpacity;
+(UIEdgeInsets)contentInsets;
+(CGSize)shadowOffset;
+(double)shadowRadius;
+(id)shadowColor;
+(CGRect)frameAtOffset:(CGPoint)arg1 keyboardSize:(CGSize)arg2 screenSize:(CGSize)arg3 ;
+(CGSize)pillSize;
+(double)cornerRadius;
+(double)arrowHeight;
+(double)edgeOffset;
+(id)pillColor;
+(double)extraWidth;
+(double)borderWidth;
+(double)dragAreaHeight;
+(double)pillCornerRadius;
+(double)pillDistanceToEdge;
+(id)propertiesForTargetRect:(CGRect)arg1 withHeight:(double)arg2 onScreenSize:(CGSize)arg3 ;
+(id)propertiesForSpecificKeyboardFrame:(CGRect)arg1 onScreenSize:(CGSize)arg2 ;
-(CGRect)frame;
-(UIView *)affordance;
-(void)invalidate;
-(id)initWithView:(id)arg1 usingBackdropStyle:(long long)arg2 ;
-(void)applyProperties:(id)arg1 ;
-(void)updateBackdropStyle:(long long)arg1 ;
@end
