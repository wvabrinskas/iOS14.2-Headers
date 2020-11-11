/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface VideosUI.VerticalStackView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	 platterView;
	 $__lazy_storage_$_expandableView;
	 $__lazy_storage_$_panelView;
	 footerView;
	 layout;
	 $__lazy_storage_$_platterContainerView;
	 $__lazy_storage_$_hangerView;
	 panGesture;
	 topPlatterGradient;
	 bottomExpandableGradient;
	 bottomPlatterGradient;
	 lastExpandableViewFrame;
	 lastPanelFrame;
	 initialExpandableHeight;
	 maxExpandableHeight;
	 scrollDraggedOffset;
	 isScrollable;
	 isPartiallyExpanded;

}
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)panGestureHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
@end
