/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <libobjc.A.dylib/NANavigationControl.h>

@interface NewsArticles.ArticleViewerViewController : UIViewController <TSTabBarSplitViewAutoObserver, NANavigationControl> {

	 navigationItemStyle;
	 observableScrollView;
	 styler;
	 eventHandler;
	 pageViewController;
	 pageBlueprintProvider;
	 blueprintProvider;
	 coverViewManager;
	 eventManager;
	 prewarm;
	 barCompressionManager;
	 articleViewerImpressionManager;
	 interstitialAdManager;
	 paidAccessChecker;
	 featureManager;
	 toolbarManager;
	 featureTransitions;
	 hasPresentedFirstPage;
	 pageSheetPresentationObserver;
	 commands;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(void)tabBarSplitViewWillObsureView;
-(void)tabBarSplitViewDidUnobsureView;
-(void)enableNavigation:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

