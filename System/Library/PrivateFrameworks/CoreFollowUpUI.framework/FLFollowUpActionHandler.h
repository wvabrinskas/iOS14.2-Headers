/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFollowUp/FLHeadlessActionHandler.h>
#import <libobjc.A.dylib/FLExtensionHostContextInterface.h>

@class FLViewExtensionLoader, UIViewController, NSString;

@interface FLFollowUpActionHandler : FLHeadlessActionHandler <FLExtensionHostContextInterface> {

	FLViewExtensionLoader* _extensionLoader;
	UIViewController* _remoteViewController;
	/*^block*/id _completionHandler;
	/*^block*/id _extensionRequestedViewControllerPresentation;

}

@property (nonatomic,copy) id extensionRequestedViewControllerPresentation;              //@synthesize extensionRequestedViewControllerPresentation=_extensionRequestedViewControllerPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_extensionLoader;
-(NSString *)description;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(void)dealloc;
-(void)handleExtensionBasedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)extensionDidFinish;
-(void)extensionDidFinishWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)extensionRequestedViewControllerPresentation;
-(void)extensionDidFinishWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExtensionRequestedViewControllerPresentation:(id)arg1 ;
@end

