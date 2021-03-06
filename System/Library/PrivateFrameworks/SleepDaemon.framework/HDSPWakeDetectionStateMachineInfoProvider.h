/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;


@protocol HDSPWakeDetectionStateMachineInfoProvider <HKSPStateMachineInfoProvider>
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * relevantOccurrence; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL sleepModeIsOff; 
@required
-(NSDate *)currentDate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(unsigned long long)sleepScheduleState;
-(id)detectionWindowAfterDate:(id)arg1;
-(HKSPSleepScheduleOccurrence *)relevantOccurrence;
-(BOOL)sleepModeIsOff;

@end

