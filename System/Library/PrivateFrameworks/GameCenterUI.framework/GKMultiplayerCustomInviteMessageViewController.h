/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol GKMultiplayerCustomInviteMessageViewControllerDelegate;
@class NSObject, UITextField, UIButton, UIVisualEffectView, NSString;

@interface GKMultiplayerCustomInviteMessageViewController : UIViewController <UITextFieldDelegate> {

	NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate> _delegate;
	UITextField* _messageTextField;
	UIButton* _doneButton;
	UIVisualEffectView* _backgroundEffectView;

}

@property (nonatomic,retain) UITextField * messageTextField;                                                                 //@synthesize messageTextField=_messageTextField - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                                                      //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)doneButton;
-(void)setDoneButton:(UIButton *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(NSString *)message;
-(void)setDelegate:(NSObject*<GKMultiplayerCustomInviteMessageViewControllerDelegate>)arg1 ;
-(void)donePressed:(id)arg1 ;
-(void)viewDidLoad;
-(id)blurEffectForTraitCollection:(id)arg1 ;
-(UITextField *)messageTextField;
-(void)setMessageTextField:(UITextField *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

