/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUOneUpTilingLayoutDelegate <NSObject>
@optional
-(double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 disableInitialZoomToFillForItemAtIndexPath:(id)arg2;
-(id)layout:(id)arg1 modelTileTransformForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowAccessoryForItemAtIndexPath:(id)arg2;
-(CGPoint*)layout:(id)arg1 contentOffsetForItemAtIndexPath:(id)arg2;
-(CGPoint*)layout:(id)arg1 accessoryOffsetForItemAtIndexPath:(id)arg2;
-(double)layout:(id)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg2;
-(double)layout:(id)arg1 minimumVisibleContentHeightForItemAtIndexPath:(id)arg2;
-(CGSize*)layout:(id)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg2;
-(CGSize*)layout:(id)arg1 badgeSizeForItemAtIndexPath:(id)arg2 contentWidth:(double)arg3;
-(BOOL)layoutShouldShowReviewScreenScrubberBar:(id)arg1;
-(CGSize*)layout:(id)arg1 loadingIndicatorSizeForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldMoveProgressIndicatorForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowProgressIndicatorForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowPlayButtonForItemAtIndexPath:(id)arg2;
-(double)alphaForReviewScreenBarsInLayout:(id)arg1;

@end
