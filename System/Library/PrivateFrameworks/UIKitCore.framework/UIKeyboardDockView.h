/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIViewRepresentingKeyboardLayout.h>

@protocol UIKeyboardDockViewDelegate;
@class UIKeyboardDockItem;

@interface UIKeyboardDockView : UIView <_UIViewRepresentingKeyboardLayout> {

	id<UIKeyboardDockViewDelegate> _delegate;
	UIKeyboardDockItem* _leftDockItem;
	UIKeyboardDockItem* _rightDockItem;
	UIKeyboardDockItem* _centerDockItem;

}

@property (assign,nonatomic,__weak) id<UIKeyboardDockViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIKeyboardDockItem * leftDockItem;                           //@synthesize leftDockItem=_leftDockItem - In the implementation block
@property (nonatomic,retain) UIKeyboardDockItem * rightDockItem;                          //@synthesize rightDockItem=_rightDockItem - In the implementation block
@property (nonatomic,retain) UIKeyboardDockItem * centerDockItem;                         //@synthesize centerDockItem=_centerDockItem - In the implementation block
+(id)dockViewHomeGestureExclusionZones;
+(SCD_Struct_UI103)_itemFramesForBoundingSize:(CGSize)arg1 ;
+(long long)_currentInterfaceOrientation;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UIKeyboardDockViewDelegate>)delegate;
-(id)_keyboardLayoutView;
-(UIKeyboardDockItem *)rightDockItem;
-(void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)_didReceiveHandBiasChangeNotification:(id)arg1 ;
-(id)_dockItemWithButton:(id)arg1 ;
-(UIKeyboardDockItem *)centerDockItem;
-(void)_configureDockItem:(id)arg1 ;
-(void)setLeftDockItem:(UIKeyboardDockItem *)arg1 ;
-(void)setRightDockItem:(UIKeyboardDockItem *)arg1 ;
-(void)setCenterDockItem:(UIKeyboardDockItem *)arg1 ;
-(void)setDelegate:(id<UIKeyboardDockViewDelegate>)arg1 ;
-(id)_keyboardLongPressInteractionRegions;
-(void)layoutSubviews;
-(UIKeyboardDockItem *)leftDockItem;
-(void)dealloc;
@end
