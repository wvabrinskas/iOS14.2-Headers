/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIButton, UILabel, NSString;

@interface UIDictationLayoutView : UIDictationView <UIPointerInteractionDelegate> {

	BOOL _hideSwitcher;
	UIButton* _globeButton;
	UIButton* _keyboardButton;
	UILabel* _languageLabel;
	NSString* _currentDictationLanguage;
	UIButton* _waveTapEndpointButton;
	BOOL _blackTextColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(int)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)layoutSubviews;
-(id)darkGrayColor;
-(BOOL)isShowing;
-(void)setRenderConfig:(id)arg1 ;
-(void)finishReturnToKeyboard;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(void)keyboardButtonPressed:(id)arg1 ;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)updateLanguageLabel;
-(void)returnToKeyboard;
-(void)dealloc;
@end

