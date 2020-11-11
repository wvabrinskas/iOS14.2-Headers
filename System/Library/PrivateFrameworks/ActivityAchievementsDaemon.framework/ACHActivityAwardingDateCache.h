/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSDateComponents, NSCalendar, NSDate;

@interface ACHActivityAwardingDateCache : NSObject {

	NSNumber* _dayOfWeekForToday;
	NSNumber* _dayOfWeekForLastDayOfFitnessWeek;
	NSNumber* _numberOfDaysInThisMonth;
	NSNumber* _dayOfMonthForToday;
	NSDateComponents* _currentDateComponents;
	NSCalendar* _calendar;
	NSDate* _currentDate;

}

@property (nonatomic,retain) NSCalendar * calendar;                                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                                       //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentDateComponents;                   //@synthesize currentDateComponents=_currentDateComponents - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfWeekForToday;                             //@synthesize dayOfWeekForToday=_dayOfWeekForToday - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfWeekForLastDayOfFitnessWeek;              //@synthesize dayOfWeekForLastDayOfFitnessWeek=_dayOfWeekForLastDayOfFitnessWeek - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfDaysInThisMonth;                       //@synthesize numberOfDaysInThisMonth=_numberOfDaysInThisMonth - In the implementation block
@property (nonatomic,readonly) NSNumber * dayOfMonthForToday;                            //@synthesize dayOfMonthForToday=_dayOfMonthForToday - In the implementation block
-(NSDate *)currentDate;
-(id)initWithCalendar:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(NSCalendar *)calendar;
-(void)_clearDateVariables;
-(void)setCurrentDateComponents:(NSDateComponents *)arg1 ;
-(NSNumber *)dayOfWeekForToday;
-(NSNumber *)dayOfWeekForLastDayOfFitnessWeek;
-(NSNumber *)numberOfDaysInThisMonth;
-(NSNumber *)dayOfMonthForToday;
-(NSDateComponents *)currentDateComponents;
@end
