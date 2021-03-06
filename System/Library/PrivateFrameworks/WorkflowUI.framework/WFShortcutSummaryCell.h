/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class WFRowOfIconsView, UILabel, UIStackView;

@interface WFShortcutSummaryCell : UITableViewCell {

	WFRowOfIconsView* _actionIconsView;
	UILabel* _summaryLabel;
	UIStackView* _mainStackView;

}

@property (nonatomic,retain) WFRowOfIconsView * actionIconsView;              //@synthesize actionIconsView=_actionIconsView - In the implementation block
@property (nonatomic,retain) UILabel * summaryLabel;                          //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,retain) UIStackView * mainStackView;                     //@synthesize mainStackView=_mainStackView - In the implementation block
-(UILabel *)summaryLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIStackView *)mainStackView;
-(void)setMainStackView:(UIStackView *)arg1 ;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(WFRowOfIconsView *)actionIconsView;
-(void)configureWithTitle:(id)arg1 actionIcons:(id)arg2 ;
-(void)removeActionViewIfNeeded;
-(void)addActionViewIfNeeded;
-(void)setActionIconsView:(WFRowOfIconsView *)arg1 ;
@end

