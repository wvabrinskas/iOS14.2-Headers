/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController {

	HKQuantitySeriesDataProvider* _dataProvider;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) HKQuantitySeriesDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
-(void)setTableView:(UITableView *)arg1 ;
-(void)setDataProvider:(HKQuantitySeriesDataProvider *)arg1 ;
-(UITableView *)tableView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(HKQuantitySeriesDataProvider *)dataProvider;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
@end
