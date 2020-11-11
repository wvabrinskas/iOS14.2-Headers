/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class CPSLabeledValueView, CPSTravelEstimatesStringFormatter, NSTimeZone;

@interface CPSRouteEstimatesView : UIView {

	CPSLabeledValueView* _timeRemainingView;
	CPSLabeledValueView* _arrivalTimeView;
	CPSLabeledValueView* _distanceRemainingView;
	CPSTravelEstimatesStringFormatter* _travelEstimatesStringFormatter;
	unsigned long long _timeRemainingColor;

}

@property (nonatomic,readonly) CPSLabeledValueView * arrivalTimeView;                                           //@synthesize arrivalTimeView=_arrivalTimeView - In the implementation block
@property (nonatomic,readonly) CPSLabeledValueView * distanceRemainingView;                                     //@synthesize distanceRemainingView=_distanceRemainingView - In the implementation block
@property (nonatomic,readonly) CPSTravelEstimatesStringFormatter * travelEstimatesStringFormatter;              //@synthesize travelEstimatesStringFormatter=_travelEstimatesStringFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long timeRemainingColor;                                             //@synthesize timeRemainingColor=_timeRemainingColor - In the implementation block
@property (nonatomic,copy) NSTimeZone * arrivalTimeZone; 
@property (nonatomic,readonly) CPSLabeledValueView * timeRemainingView;                                         //@synthesize timeRemainingView=_timeRemainingView - In the implementation block
-(id)initWithStyle:(unsigned long long)arg1 ;
-(NSTimeZone *)arrivalTimeZone;
-(void)_updateTextColors;
-(unsigned long long)timeRemainingColor;
-(void)setTimeRemainingColor:(unsigned long long)arg1 ;
-(void)setTripEstimateStyle:(unsigned long long)arg1 ;
-(void)setCurrentTravelEstimates:(id)arg1 ;
-(CPSLabeledValueView *)timeRemainingView;
-(CPSLabeledValueView *)distanceRemainingView;
-(CPSLabeledValueView *)arrivalTimeView;
-(CPSTravelEstimatesStringFormatter *)travelEstimatesStringFormatter;
-(void)setArrivalTimeZone:(NSTimeZone *)arg1 ;
@end
