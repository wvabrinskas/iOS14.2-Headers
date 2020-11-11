/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIVisualEffectView, UIView, UILabel, UIKBUndoStyling;

@interface UIKBUndoStateHUD : UIView {

	long long _controlType;
	NSLayoutConstraint* _undoStateHUDWidthConstraint;
	NSLayoutConstraint* _undoStateHUDHeightConstraint;
	UIVisualEffectView* _shadowView;
	UIView* _containerView;
	UILabel* _labelView;
	UIKBUndoStyling* _style;

}

@property (nonatomic,retain) UIVisualEffectView * shadowView;                                //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * labelView;                                            //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIKBUndoStyling * style;                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long controlType;                                          //@synthesize controlType=_controlType - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoStateHUDWidthConstraint;               //@synthesize undoStateHUDWidthConstraint=_undoStateHUDWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoStateHUDHeightConstraint;              //@synthesize undoStateHUDHeightConstraint=_undoStateHUDHeightConstraint - In the implementation block
-(void)setLabelView:(UILabel *)arg1 ;
-(UILabel *)labelView;
-(long long)controlType;
-(void)setControlType:(long long)arg1 ;
-(void)updateUndoStateHUDControlType:(long long)arg1 available:(BOOL)arg2 ;
-(NSLayoutConstraint *)undoStateHUDWidthConstraint;
-(void)setUndoStateHUDWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)undoStateHUDHeightConstraint;
-(void)setUndoStateHUDHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)containerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(UIKBUndoStyling *)style;
-(UIVisualEffectView *)shadowView;
-(void)setShadowView:(UIVisualEffectView *)arg1 ;
-(void)setStyle:(UIKBUndoStyling *)arg1 ;
@end
