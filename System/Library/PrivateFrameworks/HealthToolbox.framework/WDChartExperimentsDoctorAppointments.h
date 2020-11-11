/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKHorizontalSingleLineSeries;

@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController {

	HKHorizontalSingleLineSeries* _appointmentSeries;

}

@property (nonatomic,readonly) HKHorizontalSingleLineSeries * appointmentSeries;              //@synthesize appointmentSeries=_appointmentSeries - In the implementation block
-(void)setColor:(id)arg1 ;
-(id)_parseSpecifications:(id)arg1 ;
-(id)initWithAppointments:(id)arg1 profile:(id)arg2 color:(id)arg3 ;
-(id)initWithSpecifications:(id)arg1 profile:(id)arg2 color:(id)arg3 ;
-(HKHorizontalSingleLineSeries *)appointmentSeries;
@end
