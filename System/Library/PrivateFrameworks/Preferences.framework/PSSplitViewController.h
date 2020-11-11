/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UISplitViewController.h>

@protocol PSSplitViewControllerNavigationDelegate;
@class PSRootController;

@interface PSSplitViewController : UISplitViewController {

	id<PSSplitViewControllerNavigationDelegate> _navigationDelegate;
	PSRootController* _containerNavigationController;

}

@property (nonatomic,retain) PSRootController * containerNavigationController;                                   //@synthesize containerNavigationController=_containerNavigationController - In the implementation block
@property (assign,nonatomic,__weak) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)setNavigationDelegate:(id<PSSplitViewControllerNavigationDelegate>)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setContainerNavigationController:(PSRootController *)arg1 ;
-(void)popRecursivelyToRootController;
-(PSRootController *)containerNavigationController;
-(id)categoryController;
-(id<PSSplitViewControllerNavigationDelegate>)navigationDelegate;
-(void)showInitialViewController:(id)arg1 ;
-(void)setupControllerForToolbar:(id)arg1 ;
@end
