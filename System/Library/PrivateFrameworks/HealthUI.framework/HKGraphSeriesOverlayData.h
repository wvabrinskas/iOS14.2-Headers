/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthUI/HealthUI-Structs.h>
@class HKGraphSeries, HKGraphSeriesBlockCoordinateList;

@interface HKGraphSeriesOverlayData : NSObject {

	HKGraphSeries* _graphSeries;
	HKGraphSeriesBlockCoordinateList* _graphSeriesCoordinates;
	CGRect _graphSeriesScreenRect;
	CGAffineTransform _graphSeriesPointTransform;

}

@property (nonatomic,readonly) HKGraphSeries * graphSeries;                                            //@synthesize graphSeries=_graphSeries - In the implementation block
@property (nonatomic,readonly) CGRect graphSeriesScreenRect;                                           //@synthesize graphSeriesScreenRect=_graphSeriesScreenRect - In the implementation block
@property (nonatomic,readonly) HKGraphSeriesBlockCoordinateList * graphSeriesCoordinates;              //@synthesize graphSeriesCoordinates=_graphSeriesCoordinates - In the implementation block
@property (nonatomic,readonly) CGAffineTransform graphSeriesPointTransform;                            //@synthesize graphSeriesPointTransform=_graphSeriesPointTransform - In the implementation block
-(id)initWithGraphSeries:(id)arg1 graphSeriesScreenRect:(CGRect)arg2 graphSeriesCoordinates:(id)arg3 graphSeriesPointTransform:(CGAffineTransform)arg4 ;
-(HKGraphSeries *)graphSeries;
-(HKGraphSeriesBlockCoordinateList *)graphSeriesCoordinates;
-(CGAffineTransform)graphSeriesPointTransform;
-(CGRect)graphSeriesScreenRect;
@end
