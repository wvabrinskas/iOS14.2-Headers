/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMHome, OBTrayButton, OBLinkTrayButton, NSString;

@interface HUNaturalLightingTitleViewController : HUImageOBWelcomeController <HUConfigurationViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMHome* _home;
	OBTrayButton* _useNaturalLightingButton;
	OBLinkTrayButton* _notNowButton;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) OBTrayButton * useNaturalLightingButton;                                //@synthesize useNaturalLightingButton=_useNaturalLightingButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * notNowButton;                                        //@synthesize notNowButton=_notNowButton - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(id)initWithHome:(id)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(OBLinkTrayButton *)notNowButton;
-(void)setNotNowButton:(OBLinkTrayButton *)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4 ;
-(void)setUseNaturalLightingButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)useNaturalLightingButton;
-(void)_continueToSetup:(id)arg1 ;
-(void)_doNotActivateNaturalLighting:(id)arg1 ;
@end

