/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPBroadcastActivityCommunicationHostProtocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol> {

	RPBroadcastActivityViewController* _broadcastActivityViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastActivityViewController * broadcastActivityViewController;              //@synthesize broadcastActivityViewController=_broadcastActivityViewController - In the implementation block
-(long long)modalPresentationStyle;
-(void)viewDidLoad;
-(unsigned long long)popoverArrowDirection;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4 ;
-(CGRect)popoverControllerSourceRect;
-(oneway void)presentationInfoWithCompletion:(/*^block*/id)arg1 ;
-(RPBroadcastActivityViewController *)broadcastActivityViewController;
-(void)setBroadcastActivityViewController:(RPBroadcastActivityViewController *)arg1 ;
@end
