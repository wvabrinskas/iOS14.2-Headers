/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@protocol HUDashboardListViewControllerDelegate;
@class HUGridLayoutOptions, HUDashboardContext, UIView, HUDashboardListItemManager, NSString;

@interface HUDashboardListViewController : HUItemTableViewController <UITableViewDelegatePrivate> {

	id<HUDashboardListViewControllerDelegate> _delegate;
	HUGridLayoutOptions* _layoutOptions;
	HUDashboardContext* _selectedDashboard;
	UIView* _selectedBackgroundView;

}

@property (nonatomic,readonly) HUDashboardListItemManager * itemManager; 
@property (nonatomic,retain) UIView * selectedBackgroundView;                                        //@synthesize selectedBackgroundView=_selectedBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<HUDashboardListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                    //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) HUDashboardContext * selectedDashboard;                                 //@synthesize selectedDashboard=_selectedDashboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HUDashboardListViewControllerDelegate>)delegate;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2 ;
-(void)setDelegate:(id<HUDashboardListViewControllerDelegate>)arg1 ;
-(UIView *)selectedBackgroundView;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(HUGridLayoutOptions *)layoutOptions;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 layoutOptions:(id)arg3 ;
-(HUDashboardContext *)selectedDashboard;
-(void)setSelectedDashboard:(HUDashboardContext *)arg1 ;
-(id)_indexPathForDashboardContext:(id)arg1 ;
@end

