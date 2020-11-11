/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUPerformanceDiagnosticsSettings : PXSettings {

	BOOL _shouldTracePerformance;
	double _scrollTestRampUpDuration;
	double _scrollTestCPUWarmupDuration;
	double _scrollTestCPUSustainDuration;

}

@property (assign,nonatomic) BOOL shouldTracePerformance;                      //@synthesize shouldTracePerformance=_shouldTracePerformance - In the implementation block
@property (assign,nonatomic) double scrollTestRampUpDuration;                  //@synthesize scrollTestRampUpDuration=_scrollTestRampUpDuration - In the implementation block
@property (assign,nonatomic) double scrollTestCPUWarmupDuration;               //@synthesize scrollTestCPUWarmupDuration=_scrollTestCPUWarmupDuration - In the implementation block
@property (assign,nonatomic) double scrollTestCPUSustainDuration;              //@synthesize scrollTestCPUSustainDuration=_scrollTestCPUSustainDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setShouldTracePerformance:(BOOL)arg1 ;
-(void)setScrollTestCPUSustainDuration:(double)arg1 ;
-(void)setScrollTestRampUpDuration:(double)arg1 ;
-(BOOL)shouldTracePerformance;
-(void)setScrollTestCPUWarmupDuration:(double)arg1 ;
-(double)scrollTestCPUWarmupDuration;
-(double)scrollTestCPUSustainDuration;
-(double)scrollTestRampUpDuration;
@end
