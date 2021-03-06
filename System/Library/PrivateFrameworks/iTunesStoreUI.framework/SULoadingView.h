/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UILabel, UIActivityIndicatorView;

@interface SULoadingView : UIView {

	long long _activityIndicatorStyle;
	UIColor* _activityIndicatorColor;
	UILabel* _label;
	UIActivityIndicatorView* _progressIndicator;
	unsigned long long _style;
	UIColor* _textColor;
	UIColor* _textShadowColor;

}

@property (assign,nonatomic) long long activityIndicatorStyle;              //@synthesize activityIndicatorStyle=_activityIndicatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * activityIndicatorColor;              //@synthesize activityIndicatorColor=_activityIndicatorColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                           //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * textShadowColor;                     //@synthesize textShadowColor=_textShadowColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)activityIndicatorColor;
-(UIColor *)textColor;
-(void)sizeToFit;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setActivityIndicatorColor:(UIColor *)arg1 ;
-(void)_setupSubviews;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(long long)activityIndicatorStyle;
-(UIColor *)textShadowColor;
-(void)setActivityIndicatorStyle:(long long)arg1 ;
-(void)setTextShadowColor:(UIColor *)arg1 ;
-(id)newTextLabel;
-(id)newProgressIndicator;
@end

