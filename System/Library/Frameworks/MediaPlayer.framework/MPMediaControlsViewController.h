/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol MPMediaControlsViewControllerDelegate;
@class MPMediaControlsConfiguration, MPMediaControls, NSString;

@interface MPMediaControlsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	MPMediaControlsConfiguration* _configuration;
	/*^block*/id _didDismissHandler;
	id<MPMediaControlsViewControllerDelegate> _delegate;
	MPMediaControls* _mediaControls;

}

@property (nonatomic,retain) MPMediaControls * mediaControls;                                        //@synthesize mediaControls=_mediaControls - In the implementation block
@property (nonatomic,readonly) MPMediaControlsConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id didDismissHandler;                                                     //@synthesize didDismissHandler=_didDismissHandler - In the implementation block
@property (assign,nonatomic,__weak) id<MPMediaControlsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)init;
-(MPMediaControls *)mediaControls;
-(id<MPMediaControlsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_present;
-(void)startPrewarming;
-(void)_createMediaControlsIfNeeded;
-(void)prepareRemoteViewController;
-(id)didDismissHandler;
-(void)setDidDismissHandler:(id)arg1 ;
-(void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)dismiss;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<MPMediaControlsViewControllerDelegate>)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)animateTransition:(id)arg1 ;
-(void)viewDidLoad;
-(void)setMediaControls:(MPMediaControls *)arg1 ;
-(void)stopPrewarming;
-(MPMediaControlsConfiguration *)configuration;
@end

