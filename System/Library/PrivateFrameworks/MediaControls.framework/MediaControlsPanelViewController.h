/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class MPAVRoutingViewController, UIView;

@interface MediaControlsPanelViewController : UIViewController {

	id _delegate;
	MPAVRoutingViewController* _routingViewController;
	UIView* _backgroundView;

}

@property (assign,nonatomic,__weak) id delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;              //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                        //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)panelViewControllerForCoverSheet;
-(MPAVRoutingViewController *)routingViewController;
-(id)delegate;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setDelegate:(id)arg1 ;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
@end

