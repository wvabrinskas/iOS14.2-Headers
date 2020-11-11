/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKInteractiveChartOverlayViewController.h>

@class _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource;

@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController {

	_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource* _annotationViewDataSource;

}

@property (nonatomic,retain) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource * annotationViewDataSource;              //@synthesize annotationViewDataSource=_annotationViewDataSource - In the implementation block
-(_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *)annotationViewDataSource;
-(id)makeStandardCurrentValueViewDataSource;
-(id)makeAnnotationDataSourceWithMetrics:(id)arg1 ;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(id)_colorForDisplayType:(id)arg1 ;
-(void)setAnnotationViewDataSource:(_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *)arg1 ;
@end
