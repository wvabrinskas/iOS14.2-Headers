/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>

@protocol WFRemoteWebSheetViewControllerDelegate;
@interface WFRemoteWebSheetViewController : _UIRemoteViewController {

	id<WFRemoteWebSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFRemoteWebSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(id<WFRemoteWebSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFRemoteWebSheetViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)webSheetViewControllerContentDidStartLoading;
-(void)webSheetViewControllerContentReadyForPresentation;
-(void)webSheetViewControllerContentDidFinishLoading;
-(void)_setupButtonListener;
@end

