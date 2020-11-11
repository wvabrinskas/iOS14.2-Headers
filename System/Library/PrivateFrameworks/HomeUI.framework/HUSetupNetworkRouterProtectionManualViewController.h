/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class NSString;

@interface HUSetupNetworkRouterProtectionManualViewController : HUItemTableOBWelcomeController <HUConfigurationViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_continuePressed:(id)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_cancelPressed:(id)arg1 ;
-(void)_disablePressed:(id)arg1 ;
-(id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2 ;
@end
