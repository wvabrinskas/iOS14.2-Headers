/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <Preferences/DevicePINPane.h>

@class UIScrollView, CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {

	UIScrollView* _containerView;
	CDPPaneHeaderView* _headerView;
	double _keyboardOffset;

}

@property (nonatomic,readonly) CGRect availableHeaderRect; 
-(id)headerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_layoutSubviews;
-(BOOL)isSmallScreen;
-(void)_layoutContainerView;
-(void)dealloc;
-(double)desiredMinPinHeight;
-(void)startListeningForKeyboardEvents;
-(void)_keyboardLayoutChanged;
-(CGRect)availableHeaderRect;
-(double)keyboardHeightOffset;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(void)didFinishResizingHeaderView;
-(BOOL)isVerySmallScreen;
-(void)didFinishResizingPinView;
@end

