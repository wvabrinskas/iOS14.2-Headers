/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarImageView.h>

@class UIColor;

@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {

	UIColor* _unfocusedTintColor;
	UIColor* _focusedImageTintColor;

}

@property (nonatomic,retain) UIColor * focusedImageTintColor;              //@synthesize focusedImageTintColor=_focusedImageTintColor - In the implementation block
-(void)applyStyleAttributes:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)isUserInteractionEnabled;
-(void)setFocusedImageTintColor:(UIColor *)arg1 ;
-(UIColor *)focusedImageTintColor;
@end

