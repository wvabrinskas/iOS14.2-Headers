/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoMenstrualCyclesComplication.bundle/NanoMenstrualCyclesComplication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockComplications/CLKCComplicationBundleDataSource.h>

@class CLKComplicationTemplate;

@interface HKMCComplicationDataSource : CLKCComplicationBundleDataSource {

	CLKComplicationTemplate* _template;

}
+(id)_tintColor;
+(id)appIdentifier;
+(id)bundleIdentifier;
+(id)localizedAppName;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)_currentTimelineEntry;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)_configureTemplate;
@end

