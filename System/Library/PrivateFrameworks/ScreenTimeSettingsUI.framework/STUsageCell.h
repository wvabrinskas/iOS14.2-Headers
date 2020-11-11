/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/STTableCell.h>

@class UILabel, STCandyBarView, UIImageView, NSLayoutConstraint;

@interface STUsageCell : STTableCell {

	UILabel* _itemNameLabel;
	STCandyBarView* _usageBarView;
	UILabel* _usageLabel;
	UIImageView* _trustWarningImageView;
	NSLayoutConstraint* _usageBarWidthConstraint;

}

@property (readonly) UIImageView * trustWarningImageView;                                 //@synthesize trustWarningImageView=_trustWarningImageView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * usageBarWidthConstraint;              //@synthesize usageBarWidthConstraint=_usageBarWidthConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * itemNameLabel;                                   //@synthesize itemNameLabel=_itemNameLabel - In the implementation block
@property (nonatomic,readonly) STCandyBarView * usageBarView;                             //@synthesize usageBarView=_usageBarView - In the implementation block
@property (nonatomic,readonly) UILabel * usageLabel;                                      //@synthesize usageLabel=_usageLabel - In the implementation block
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UILabel *)usageLabel;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
-(UILabel *)itemNameLabel;
-(STCandyBarView *)usageBarView;
-(NSLayoutConstraint *)usageBarWidthConstraint;
-(UIImageView *)trustWarningImageView;
@end
