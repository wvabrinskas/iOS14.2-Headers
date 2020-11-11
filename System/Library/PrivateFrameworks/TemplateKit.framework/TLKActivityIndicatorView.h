/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, UIActivityIndicatorView, TLKLabel;

@interface TLKActivityIndicatorView : TLKView {

	TLKMultilineText* _subtitle;
	UIActivityIndicatorView* _activityIndicator;
	TLKLabel* _subtitleLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)_dynamicUserInterfaceTraitDidChange;
-(TLKMultilineText *)subtitle;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)didMoveToWindow;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)subtitleLabelText;
-(BOOL)usesDefaultLayoutMargins;
@end
