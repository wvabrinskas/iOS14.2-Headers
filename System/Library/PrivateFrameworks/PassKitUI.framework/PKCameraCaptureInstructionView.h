/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIButton, PKTableHeaderView;

@interface PKCameraCaptureInstructionView : UIView {

	long long _context;
	UIScrollView* _scrollView;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	PKTableHeaderView* _headerView;

}

@property (nonatomic,retain) UIButton * primaryButton;                    //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryButton;                  //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) PKTableHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
-(PKTableHeaderView *)headerView;
-(void)setHeaderView:(PKTableHeaderView *)arg1 ;
-(BOOL)isBuddyiPad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(void)dealloc;
@end
