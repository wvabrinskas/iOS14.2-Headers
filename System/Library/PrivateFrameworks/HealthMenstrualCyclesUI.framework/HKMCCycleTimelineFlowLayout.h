/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesUI.framework/HealthMenstrualCyclesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthMenstrualCyclesUI/HealthMenstrualCyclesUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSArray, HKMCCycleTimelinePillConfiguration, NSIndexPath;

@interface HKMCCycleTimelineFlowLayout : UICollectionViewFlowLayout {

	double _yOffset;
	NSArray* _pillConfigurations;
	HKMCCycleTimelinePillConfiguration* _introPillConfiguration;
	double _pillAspectRatio;
	double _centerPillHeight;
	CGSize _cellSize;
	double _totalZoomWidth;
	NSIndexPath* _centerIndexPath;
	NSRange _zoomRange;
	double _offsetFactor;
	double _zoomAreaOffset;

}

@property (nonatomic,readonly) double configuredWidth; 
+(Class)layoutAttributesClass;
-(void)prepareLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)_configureLayoutAttributes:(id)arg1 ;
-(CGRect)_pillFrameAtZoomIndex:(long long)arg1 ;
-(id)_configurationAtIndex:(long long)arg1 ;
-(double)_pillOriginXAtZoomIndex:(long long)arg1 centerPill:(BOOL)arg2 ;
-(id)initWithYOffset:(double)arg1 pillConfigurations:(id)arg2 introPillConfiguration:(id)arg3 pillAspectRatio:(double)arg4 ;
-(double)configuredWidth;
@end

