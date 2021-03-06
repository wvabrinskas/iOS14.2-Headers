/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIView, UIImageView, NSMutableDictionary, MPDownloadProgressView, UIColor;

@interface MPAddKeepLocalControl : UIControl {

	UILabel* _controlTitleLabel;
	UIView* _backgroundView;
	UIImageView* _controlImageView;
	NSMutableDictionary* _controlStatusTypeToTitle;
	long long _controlStatusRevision;
	MPDownloadProgressView* _downloadProgressView;
	BOOL _hadFirstTouchHighlight;
	UIEdgeInsets _controlImageEdgeInsets;
	UIView* _transientContentView;
	long long _transientContentViewTransactionCount;
	BOOL _traitCollectionDidChangeWasCalled;
	BOOL _allowsAddImage;
	BOOL _scaleImageForAccessibility;
	long long _displayStyle;
	UIColor* _filledTintColor;
	MPAddKeepLocalControlStatus _controlStatus;

}

@property (assign,nonatomic) BOOL allowsAddImage;                                    //@synthesize allowsAddImage=_allowsAddImage - In the implementation block
@property (assign,nonatomic) MPAddKeepLocalControlStatus controlStatus;              //@synthesize controlStatus=_controlStatus - In the implementation block
@property (assign,nonatomic) long long displayStyle;                                 //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,nonatomic) BOOL scaleImageForAccessibility;                        //@synthesize scaleImageForAccessibility=_scaleImageForAccessibility - In the implementation block
@property (nonatomic,retain) UIColor * filledTintColor;                              //@synthesize filledTintColor=_filledTintColor - In the implementation block
+(id)controlTitleFontForControlStatusType:(long long)arg1 ;
+(id)_newControlTitleLabel;
+(id)_imageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(CGSize)_expectedSizeForControlStatusType:(long long)arg1 controlTitle:(id)arg2 hasControlImage:(BOOL)arg3 displayScale:(double)arg4 preferredHeight:(double)arg5 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(void)setDisplayStyle:(long long)arg1 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(MPAddKeepLocalControlStatus)controlStatus;
-(void)setAllowsAddImage:(BOOL)arg1 ;
-(CGSize)maximumSizeWithPreferredHeight:(double)arg1 ;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 ;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 animated:(BOOL)arg2 ;
-(void)setFilledTintColor:(UIColor *)arg1 ;
-(void)setTitle:(id)arg1 forControlStatusType:(long long)arg2 ;
-(id)titleForControlStatusType:(long long)arg1 ;
-(void)_beginTransientContentViewTransaction;
-(void)_endTransientContentViewTransaction;
-(id)_currentContentSuperview;
-(void)_updateBackgroundViewCornerRadius;
-(void)_updateControlTitleLabelVisualProperties;
-(void)_updateControlStatusProperties;
-(BOOL)allowsAddImage;
-(void)_updateControlImageViewAnimation;
-(BOOL)scaleImageForAccessibility;
-(void)setScaleImageForAccessibility:(BOOL)arg1 ;
-(UIColor *)filledTintColor;
-(long long)displayStyle;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

