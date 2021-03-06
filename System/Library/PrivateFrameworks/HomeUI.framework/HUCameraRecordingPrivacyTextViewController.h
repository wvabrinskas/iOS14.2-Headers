/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UILabel, UITextView;

@interface HUCameraRecordingPrivacyTextViewController : UIViewController {

	UILabel* _headerLabel;
	UITextView* _consentTextView;

}

@property (nonatomic,retain) UILabel * headerLabel;                     //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITextView * consentTextView;              //@synthesize consentTextView=_consentTextView - In the implementation block
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(void)_addConstraints;
-(UITextView *)consentTextView;
-(void)setConsentTextView:(UITextView *)arg1 ;
@end

