/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iMessageApps/iMessageApps-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserSwitcherFooterViewDelegate.h>

@protocol IMADockViewControllerDelegate;
@class CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, IMAAppPresenter, UIViewController, NSString;

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate> {

	CKBrowserSwitcherFooterView* _appStrip;
	CKBrowserSwitcherFooterViewDataSource* _appStripDataSource;
	IMAAppPresenter* _appPresenter;
	BOOL _showIconBorders;
	id<IMADockViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IMADockViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL alwaysPresentAppsExpanded; 
@property (assign,nonatomic) BOOL showIconBorders;                                           //@synthesize showIconBorders=_showIconBorders - In the implementation block
@property (nonatomic,readonly) double minimizedDockHeight; 
@property (nonatomic,readonly) UIViewController * currentAppViewController; 
@property (assign,nonatomic) BOOL hidesCompactAppForStickerDrag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<IMADockViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(id)appStrip;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateAppStripFrame;
-(void)setDelegate:(id<IMADockViewControllerDelegate>)arg1 ;
-(void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2 ;
-(void)switcherView:(id)arg1 didMagnify:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)cleanupRunningApps;
-(double)minimizedDockHeight;
-(UIViewController *)currentAppViewController;
-(void)setAlwaysPresentAppsExpanded:(BOOL)arg1 ;
-(void)hideAppViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)showIconBorders;
-(void)setShowIconBorders:(BOOL)arg1 ;
-(BOOL)alwaysPresentAppsExpanded;
-(BOOL)hidesCompactAppForStickerDrag;
-(void)setHidesCompactAppForStickerDrag:(BOOL)arg1 ;
-(id)imageViewForSticker:(id)arg1 ;
@end

