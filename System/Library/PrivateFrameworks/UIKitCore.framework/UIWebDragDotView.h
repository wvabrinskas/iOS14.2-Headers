/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UIWebDragDotView : UIView {

	UIColor* m_selectionBarColor;
	long long m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}
-(BOOL)isVertical;
-(void)setEdge:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isPointedDown;
-(BOOL)isPointedLeft;
-(BOOL)isPointedRight;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(long long)arg3 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
-(BOOL)isPointedUp;
-(void)dealloc;
@end

