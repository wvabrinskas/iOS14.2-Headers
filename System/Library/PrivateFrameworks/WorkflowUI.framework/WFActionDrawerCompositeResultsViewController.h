/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFActionDrawerResultsControlling.h>

@class WFActionDrawerCoordinator, WFActionDrawerResults, NSArray, UITableView, NSString;

@interface WFActionDrawerCompositeResultsViewController : UIViewController <WFActionDrawerResultsControlling> {

	WFActionDrawerCoordinator* _coordinator;
	WFActionDrawerResults* _results;
	NSArray* _suggestionSections;
	NSArray* _actionSections;
	NSArray* _appSections;
	NSArray* _userActivitySections;
	UITableView* _tableView;

}

@property (nonatomic,__weak,readonly) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResults * results;                             //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * suggestionSections;                                //@synthesize suggestionSections=_suggestionSections - In the implementation block
@property (nonatomic,readonly) NSArray * actionSections;                                    //@synthesize actionSections=_actionSections - In the implementation block
@property (nonatomic,readonly) NSArray * appSections;                                       //@synthesize appSections=_appSections - In the implementation block
@property (nonatomic,readonly) NSArray * userActivitySections;                              //@synthesize userActivitySections=_userActivitySections - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableView:(UITableView *)arg1 ;
-(WFActionDrawerResults *)results;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithCoordinator:(id)arg1 ;
-(WFActionDrawerCoordinator *)coordinator;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)reloadViews;
-(NSArray *)appSections;
-(void)setResults:(id)arg1 animated:(BOOL)arg2 ;
-(id)categorizeResults:(id)arg1 ;
-(id)convertDonationsToActionsForSections:(id)arg1 ;
-(NSArray *)suggestionSections;
-(NSArray *)actionSections;
-(NSArray *)userActivitySections;
@end
