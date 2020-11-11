/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UITextInput;
@class UIView, NSArray, NSMutableArray, UIWebDragDotView;

@interface UIWebTextRangeView : UIView {

	UIView*<UITextInput> m_container;
	NSArray* _rects;
	NSMutableArray* _rectViews;
	UIWebDragDotView* _startDot;
	UIWebDragDotView* _endDot;
	BOOL _magnifying;

}

@property (nonatomic,readonly) UIView*<UITextInput> container; 
@property (nonatomic,copy) NSArray * rects;                                 //@synthesize rects=_rects - In the implementation block
-(NSArray *)rects;
-(CGRect)endEdge;
-(CGRect)boundingRect;
-(void)prepareForMagnification;
-(void)setRects:(NSArray *)arg1 ;
-(CGRect)startEdge;
-(void)updateRectViews;
-(CGPoint)endCorner;
-(CGRect)rectAtIndex:(int)arg1 ;
-(UIView*<UITextInput>)container;
-(void)geometryChanged;
-(BOOL)startIsHorizontal;
-(BOOL)endIsHorizontal;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)updateDragDots;
-(id)rectViewAtIndex:(int)arg1 ;
-(void)doneMagnifying;
-(void)removeFromSuperview;
-(CGPoint)startCorner;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
