/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKOverlayRoomViewControllerIntegratedContextDelegate.h>

@class HKInteractiveChartOverlayNamedDataSource, HKDisplayType, HKLineSeries, NSString;

@interface _HKAudioStandardQuantityContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate> {

	HKInteractiveChartOverlayNamedDataSource* _cacheDataSource;
	HKDisplayType* _primaryDisplayType;

}

@property (nonatomic,retain) HKInteractiveChartOverlayNamedDataSource * cacheDataSource;              //@synthesize cacheDataSource=_cacheDataSource - In the implementation block
@property (nonatomic,retain) HKDisplayType * primaryDisplayType;                                      //@synthesize primaryDisplayType=_primaryDisplayType - In the implementation block
@property (nonatomic,readonly) HKLineSeries * alternateLineSeries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKDisplayType *)primaryDisplayType;
-(void)setPrimaryDisplayType:(HKDisplayType *)arg1 ;
-(id)formatterForTimescope:(long long)arg1 ;
-(HKInteractiveChartOverlayNamedDataSource *)cacheDataSource;
-(HKLineSeries *)alternateLineSeries;
-(void)setCacheDataSource:(HKInteractiveChartOverlayNamedDataSource *)arg1 ;
-(id)_statItemForTimeScope:(long long)arg1 ;
-(id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2 ;
@end

