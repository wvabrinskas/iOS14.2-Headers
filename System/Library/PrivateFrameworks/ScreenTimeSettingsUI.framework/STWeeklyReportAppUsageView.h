/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UILabel, UIStackView, STUsageReport, NSMutableArray, NSMutableDictionary;

@interface STWeeklyReportAppUsageView : UIView {

	UILabel* _titleLabel;
	UIStackView* _appImageStackView;
	STUsageReport* _report;
	NSMutableArray* _topEightImageItems;
	NSMutableDictionary* _dimensionByUsageItem;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIStackView * appImageStackView;                         //@synthesize appImageStackView=_appImageStackView - In the implementation block
@property (nonatomic,retain) STUsageReport * report;                                  //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) NSMutableArray * topEightImageItems;                     //@synthesize topEightImageItems=_topEightImageItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dimensionByUsageItem;              //@synthesize dimensionByUsageItem=_dimensionByUsageItem - In the implementation block
-(UILabel *)titleLabel;
-(void)setReport:(STUsageReport *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(STUsageReport *)report;
-(id)initWithUsageReport:(id)arg1 useVibrancy:(BOOL)arg2 ;
-(id)_appImageSubviewWithImage:(id)arg1 dimension:(double)arg2 ;
-(void)_didFetchIcon:(id)arg1 ;
-(NSMutableArray *)topEightImageItems;
-(UIStackView *)appImageStackView;
-(NSMutableDictionary *)dimensionByUsageItem;
-(void)setAppImageStackView:(UIStackView *)arg1 ;
-(void)setTopEightImageItems:(NSMutableArray *)arg1 ;
-(void)setDimensionByUsageItem:(NSMutableDictionary *)arg1 ;
@end
