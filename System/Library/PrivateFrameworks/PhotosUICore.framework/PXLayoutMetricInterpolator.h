/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {

	SCD_Struct_PX38 _needsUpdateFlags;
	NSMutableArray* __referenceValuesByMetrics;
	double __cachedMetric;
	NSValue* __cachedValue;

}

@property (nonatomic,readonly) NSMutableArray * _referenceValuesByMetrics;                //@synthesize _referenceValuesByMetrics=__referenceValuesByMetrics - In the implementation block
@property (assign,setter=_setCachedMetric:,nonatomic) double _cachedMetric;               //@synthesize _cachedMetric=__cachedMetric - In the implementation block
@property (setter=_setCachedValue:,nonatomic,retain) NSValue * _cachedValue;              //@synthesize _cachedValue=__cachedValue - In the implementation block
+(id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+(id)memoriesFeedPortraitEdgeInsetsInterpolator;
+(CGSize)zoomableGridLayoutSmallItemSizeForWidth:(double)arg1 ;
+(id)_sharedGridItemWidthInterpolator;
+(id)layoutMarginWidthInterpolator;
+(id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)arg1 ;
+(unsigned long long)photosGridLayoutColumnsForWidth:(double)arg1 ;
+(id)_sharedGridEdgeInsetsInterpolator;
+(id)legacyLayoutMarginWidthInterpolator;
+(id)albumsGridItemWidthInterpolator;
+(long long)photosGridSizeSubclassForScreenSize:(CGSize)arg1 ;
+(id)memoriesDetailsEdgeInsetsInterpolator;
+(id)albumsGridEdgeInsetsInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+(id)memoriesFeedInteritemSpacingInterpolator;
+(id)gadgetColumnWidthSpanSingleSetAInterpolator;
+(id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+(CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 columns:(unsigned long long)arg3 bestSpacing:(double*)arg4 bestInset:(double*)arg5 ;
+(id)allLayoutMetricConfigurationSizes;
+(id)memoriesItemWidthInterpolator;
-(void)_setCachedMetric:(double)arg1 ;
-(NSMutableArray *)_referenceValuesByMetrics;
-(void)setReferenceValue:(double)arg1 forMetric:(double)arg2 ;
-(id)init;
-(double)valueForMetric:(double)arg1 ;
-(NSValue *)_cachedValue;
-(id)description;
-(double)_cachedMetric;
-(void)_invalidateReferenceValuesByMetricsOrder;
-(void)_setCachedValue:(id)arg1 ;
-(void)_updateReferenceValuesByMetricsOrderIfNeeded;
-(id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3 ;
-(void)_setNeedsUpdate;
-(void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id*)arg2 closestBeforeMatch:(id*)arg3 closestAfterMatch:(id*)arg4 ;
@end

