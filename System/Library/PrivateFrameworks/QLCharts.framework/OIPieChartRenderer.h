/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/QLCharts.framework/QLCharts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OIPieSliceRenderer;
#import <QLCharts/QLCharts-Structs.h>
@interface OIPieChartRenderer : NSObject {

	id<OIPieSliceRenderer> _sliceRenderer;
	OIChartRef _chart;

}

@property (retain) id<OIPieSliceRenderer> sliceRenderer;              //@synthesize sliceRenderer=_sliceRenderer - In the implementation block
@property (assign) OIChartRef chart;                                  //@synthesize chart=_chart - In the implementation block
-(OIChartRef)chart;
-(void)dealloc;
-(void)setChart:(OIChartRef)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 ;
-(void)renderThreeDimensional:(BOOL)arg1 pieFromSeriesArray:(CFArrayRef)arg2 ;
-(void)setSliceRenderer:(id<OIPieSliceRenderer>)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 sliceRenderer:(id)arg2 ;
-(id<OIPieSliceRenderer>)sliceRenderer;
@end

