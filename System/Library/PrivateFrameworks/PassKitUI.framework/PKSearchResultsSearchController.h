/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UISearchController.h>

@class UINavigationController, PKSearchResultsViewController;

@interface PKSearchResultsSearchController : UISearchController {

	UINavigationController* _navVC;
	PKSearchResultsViewController* _resultsVC;
	BOOL _searchBarWasFirstResponder;
	BOOL _showSearchBar;

}
-(void)viewWillLayoutSubviews;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithPaymentDataProvider:(id)arg1 transactionSource:(id)arg2 ;
-(void)setSearchBarVisible:(BOOL)arg1 ;
-(void)_updateSearchBarFrame;
-(long long)preferredStatusBarStyle;
@end
