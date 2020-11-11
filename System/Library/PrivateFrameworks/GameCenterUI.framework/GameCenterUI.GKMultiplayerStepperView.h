/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface GameCenterUI.GKMultiplayerStepperView : UIView {

	 downButton;
	 upButton;
	 label;
	 backgroundView;
	 model;
	 isStepperHidden;

}

@property (readonly,nonatomic) UIButton * accessibilityDownButton; 
@property (readonly,nonatomic) UIButton * accessibilityUpButton; 
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)didTapDown:(id)arg1 ;
-(UIButton *)accessibilityDownButton;
-(UIButton *)accessibilityUpButton;
-(void)accessibilityUpdateStepperWithValue:(long long)arg1 ;
-(void)didTapUp:(id)arg1 ;
@end
