/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIBezierPath, UIColor;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;

}
-(void)setTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_updateState;
-(BOOL)_canDrawContent;
-(long long)buttonType;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(void)_invalidatePaths;
-(id)_contentBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 ;
@end
