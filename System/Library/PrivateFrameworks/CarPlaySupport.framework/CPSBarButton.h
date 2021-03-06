/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSButton.h>

@class CPBarButton, UIImageView, UIImage, UIView, NSLayoutConstraint;

@interface CPSBarButton : CPSButton {

	BOOL _showBackIndicator;
	BOOL _usesSystemComposeGlyph;
	CPBarButton* _cyBarButton;
	UIImageView* _backIndicatorImageView;
	UIImage* _backIndicatorImage;
	UIView* _backgroundView;
	NSLayoutConstraint* _backIndicatorHeightConstraint;

}

@property (nonatomic,retain) CPBarButton * cyBarButton;                                       //@synthesize cyBarButton=_cyBarButton - In the implementation block
@property (assign,nonatomic) BOOL showBackIndicator;                                          //@synthesize showBackIndicator=_showBackIndicator - In the implementation block
@property (assign,nonatomic) BOOL usesSystemComposeGlyph;                                     //@synthesize usesSystemComposeGlyph=_usesSystemComposeGlyph - In the implementation block
@property (nonatomic,retain) UIImageView * backIndicatorImageView;                            //@synthesize backIndicatorImageView=_backIndicatorImageView - In the implementation block
@property (nonatomic,retain) UIImage * backIndicatorImage;                                    //@synthesize backIndicatorImage=_backIndicatorImage - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backIndicatorHeightConstraint;              //@synthesize backIndicatorHeightConstraint=_backIndicatorHeightConstraint - In the implementation block
+(id)buttonWithCPBarButton:(id)arg1 showBackIndicator:(BOOL)arg2 ;
-(void)setBackIndicatorImage:(UIImage *)arg1 ;
-(UIImage *)backIndicatorImage;
-(id)_externalUnfocusedBorderColor;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)didAddSubview:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateButtonImage:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setShowBackIndicator:(BOOL)arg1 ;
-(void)setCyBarButton:(CPBarButton *)arg1 ;
-(void)setUsesSystemComposeGlyph:(BOOL)arg1 ;
-(BOOL)showBackIndicator;
-(void)setBackIndicatorImageView:(UIImageView *)arg1 ;
-(UIImageView *)backIndicatorImageView;
-(void)_setupBackButtonImagesIfNeccessary;
-(BOOL)_showsRoundedBackground;
-(CPBarButton *)cyBarButton;
-(void)_updateBackIndicatorImageView;
-(NSLayoutConstraint *)backIndicatorHeightConstraint;
-(void)setBackIndicatorHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)usesSystemComposeGlyph;
-(void)_resetAlpha;
@end

