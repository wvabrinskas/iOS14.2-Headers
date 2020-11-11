/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSLoadingViewController.h>

@protocol VSLoadingViewControllerDelegate;
@class UIActivityIndicatorView, NSString;

@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController> {

	BOOL _cancellationAllowed;
	id<VSLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                         //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<VSLoadingViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;              //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelButtonPressed:(id)arg1 ;
-(id<VSLoadingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSLoadingViewControllerDelegate>)arg1 ;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
@end
