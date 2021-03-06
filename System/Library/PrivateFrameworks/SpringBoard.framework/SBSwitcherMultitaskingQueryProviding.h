/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSwitcherMultitaskingQueryProviding <SBSwitcherQueryProviding>
@required
-(CGPoint*)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2;
-(double)contentPageViewScaleForAppLayout:(id)arg1;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
-(void)resetAdjustedScrollingState;
-(CGPoint*)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2;
-(id)scrollViewAttributes;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1;
-(double)snapshotScaleForAppLayout:(id)arg1;
-(CGPoint*)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;

@end

