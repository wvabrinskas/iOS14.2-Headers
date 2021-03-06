/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PRXCardContentViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PRXButton, NSArray, UIView, NSString, PRXCardContentView, UIScrollView, UILabel, NSLayoutConstraint;

@interface PRXCardContentWrapperView : UIView <PRXCardContentViewDelegate, UIScrollViewDelegate> {

	PRXButton* _dismissButton;
	NSArray* _actionButtons;
	UIView* _activityIndicator;
	NSString* _title;
	NSString* _bottomTrayTitle;
	PRXCardContentView* _contentView;
	UIScrollView* _scrollView;
	UIView* _bottomKeyline;
	UIView* _bottomTray;
	UILabel* _bottomTrayLabel;
	UIView* _topKeyline;
	UIView* _titleContainer;
	UILabel* _scrolledTitleLabel;
	NSArray* _buttonConstraints;
	NSArray* _bottomTrayTitleConstraints;
	NSLayoutConstraint* _scrollViewBottomAnchor;

}

@property (nonatomic,readonly) PRXCardContentView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIView * bottomKeyline;                                 //@synthesize bottomKeyline=_bottomKeyline - In the implementation block
@property (nonatomic,readonly) UIView * bottomTray;                                    //@synthesize bottomTray=_bottomTray - In the implementation block
@property (nonatomic,readonly) UILabel * bottomTrayLabel;                              //@synthesize bottomTrayLabel=_bottomTrayLabel - In the implementation block
@property (nonatomic,readonly) UIView * topKeyline;                                    //@synthesize topKeyline=_topKeyline - In the implementation block
@property (nonatomic,readonly) UIView * titleContainer;                                //@synthesize titleContainer=_titleContainer - In the implementation block
@property (nonatomic,readonly) UILabel * scrolledTitleLabel;                           //@synthesize scrolledTitleLabel=_scrolledTitleLabel - In the implementation block
@property (nonatomic,copy) NSArray * buttonConstraints;                                //@synthesize buttonConstraints=_buttonConstraints - In the implementation block
@property (nonatomic,copy) NSArray * bottomTrayTitleConstraints;                       //@synthesize bottomTrayTitleConstraints=_bottomTrayTitleConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrollViewBottomAnchor;              //@synthesize scrollViewBottomAnchor=_scrollViewBottomAnchor - In the implementation block
@property (nonatomic,copy) NSArray * actionButtons;                                    //@synthesize actionButtons=_actionButtons - In the implementation block
@property (nonatomic,retain) UIView * activityIndicator;                               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * bottomTrayTitle;                                 //@synthesize bottomTrayTitle=_bottomTrayTitle - In the implementation block
@property (nonatomic,retain) PRXButton * dismissButton;                                //@synthesize dismissButton=_dismissButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContentView:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(UIView *)activityIndicator;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setActivityIndicator:(UIView *)arg1 ;
-(void)scrollToBottom;
-(void)setDismissButton:(PRXButton *)arg1 ;
-(UIScrollView *)scrollView;
-(void)layoutSubviews;
-(NSString *)title;
-(NSArray *)buttonConstraints;
-(void)setButtonConstraints:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(PRXButton *)dismissButton;
-(PRXCardContentView *)contentView;
-(UIView *)titleContainer;
-(void)setActionButtons:(NSArray *)arg1 ;
-(NSArray *)actionButtons;
-(void)updateConstraints;
-(UILabel *)bottomTrayLabel;
-(NSArray *)bottomTrayTitleConstraints;
-(UIView *)bottomTray;
-(void)setBottomTrayTitleConstraints:(NSArray *)arg1 ;
-(void)_updateScrollViewBottomConstraint;
-(UIView *)bottomKeyline;
-(NSLayoutConstraint *)scrollViewBottomAnchor;
-(void)setScrollViewBottomAnchor:(NSLayoutConstraint *)arg1 ;
-(UILabel *)scrolledTitleLabel;
-(UIView *)topKeyline;
-(void)setBottomTrayTitle:(NSString *)arg1 ;
-(NSString *)bottomTrayTitle;
@end

