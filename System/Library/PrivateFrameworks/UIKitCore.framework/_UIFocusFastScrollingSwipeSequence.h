/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIScrollView;

@interface _UIFocusFastScrollingSwipeSequence : NSObject {

	UIScrollView* _scrollView;
	unsigned long long _headingLock;
	long long _consecutiveSwipeCount;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned long long headingLock;                //@synthesize headingLock=_headingLock - In the implementation block
@property (assign,nonatomic) long long consecutiveSwipeCount;               //@synthesize consecutiveSwipeCount=_consecutiveSwipeCount - In the implementation block
-(UIScrollView *)scrollView;
-(void)setHeadingLock:(unsigned long long)arg1 ;
-(long long)consecutiveSwipeCount;
-(void)setConsecutiveSwipeCount:(long long)arg1 ;
-(unsigned long long)headingLock;
-(void)setScrollView:(UIScrollView *)arg1 ;
@end

