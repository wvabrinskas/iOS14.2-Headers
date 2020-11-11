/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EKDayViewDelegate <NSObject>
@optional
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)dayViewDidCompleteAsyncLoadAndLayout:(id)arg1;
-(void)dayViewDidTapEmptySpace:(id)arg1;
-(void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(id)dayView:(id)arg1 selectedCopyViewForOccurrence:(id)arg2;
-(void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
-(void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2;
-(BOOL)dayViewShouldDrawSynchronously:(id)arg1;
-(void)dayView:(id)arg1 didUpdateScrollPosition:(CGPoint)arg2;
-(void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;

@end
