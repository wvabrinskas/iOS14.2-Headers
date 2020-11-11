/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol SKUIServiceComposeReviewViewController, SKComposeReviewDelegate;
@class _UIAsyncInvocation, NSURL, SKRemoteComposeReviewViewController, SKInvocationQueueProxy;

@interface SKComposeReviewViewController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	NSURL* _compositionURL;
	/*^block*/id _prepareBlock;
	SKRemoteComposeReviewViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceComposeReviewViewController> _serviceProxy;
	id<SKComposeReviewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKComposeReviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKComposeReviewDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDelegate:(id<SKComposeReviewDelegate>)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)dealloc;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_didFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(void)_tearDownAfterError:(id)arg1 ;
@end
