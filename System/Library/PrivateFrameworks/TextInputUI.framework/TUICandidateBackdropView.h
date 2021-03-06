/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUICandidateViewStyle;
@class UIKBBackdropView;

@interface TUICandidateBackdropView : UIView {

	id<TUICandidateViewStyle> _style;
	UIKBBackdropView* _backdropView;

}

@property (nonatomic,retain) UIKBBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(UIKBBackdropView *)backdropView;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id<TUICandidateViewStyle>)style;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)backdropViewStyle;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
@end

