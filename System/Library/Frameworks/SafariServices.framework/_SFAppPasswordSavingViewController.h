/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordSavingServiceViewControllerProtocol;
@class SFPasswordSavingRemoteViewController, SFQueueingServiceViewControllerProxy, NSString;

@interface _SFAppPasswordSavingViewController : _SFPasswordViewController {

	SFPasswordSavingRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordSavingServiceViewControllerProtocol> _serviceProxy;
	NSString* _tokenForShowingPrompt;

}
-(void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)init;
-(id)_remoteViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_setUpServiceProxyIfNeeded;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
@end

