/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSLocale, NSTimeZone, NSArray;

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * calendarIdentifier; 
@property (copy) NSLocale * locale; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) unsigned long long firstWeekday; 
@property (assign) unsigned long long minimumDaysInFirstWeek; 
@property (copy,readonly) NSArray * eraSymbols; 
@property (copy,readonly) NSArray * longEraSymbols; 
@property (copy,readonly) NSArray * monthSymbols; 
@property (copy,readonly) NSArray * shortMonthSymbols; 
@property (copy,readonly) NSArray * veryShortMonthSymbols; 
@property (copy,readonly) NSArray * standaloneMonthSymbols; 
@property (copy,readonly) NSArray * shortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneMonthSymbols; 
@property (copy,readonly) NSArray * weekdaySymbols; 
@property (copy,readonly) NSArray * shortWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortWeekdaySymbols; 
@property (copy,readonly) NSArray * standaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * shortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * veryShortStandaloneWeekdaySymbols; 
@property (copy,readonly) NSArray * quarterSymbols; 
@property (copy,readonly) NSArray * shortQuarterSymbols; 
@property (copy,readonly) NSArray * standaloneQuarterSymbols; 
@property (copy,readonly) NSArray * shortStandaloneQuarterSymbols; 
@property (copy,readonly) NSString * AMSymbol; 
@property (copy,readonly) NSString * PMSymbol; 
+(id)autoupdatingCurrentCalendar;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)currentCalendar;
+(id)calendarWithIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(NSString *)AMSymbol;
-(NSString *)PMSymbol;
-(NSArray *)monthSymbols;
-(id)_copyLocale;
-(NSArray *)eraSymbols;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(id)_copyTimeZone;
-(BOOL)isDateInToday:(id)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(void)setGregorianStartDate:(id)arg1 ;
-(BOOL)isDateInTomorrow:(id)arg1 ;
-(void)getEra:(out long long*)arg1 yearForWeekOfYear:(out long long*)arg2 weekOfYear:(out long long*)arg3 weekday:(out long long*)arg4 fromDate:(id)arg5 ;
-(NSArray *)weekdaySymbols;
-(id)dateBySettingHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 ofDate:(id)arg4 options:(unsigned long long)arg5 ;
-(NSArray *)longEraSymbols;
-(id)nextDateAfterDate:(id)arg1 matchingHour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4 options:(unsigned long long)arg5 ;
-(NSArray *)quarterSymbols;
-(NSArray *)shortMonthSymbols;
-(id)dateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8 ;
-(NSArray *)standaloneWeekdaySymbols;
-(NSArray *)standaloneQuarterSymbols;
-(void)getHour:(out long long*)arg1 minute:(out long long*)arg2 second:(out long long*)arg3 nanosecond:(out long long*)arg4 fromDate:(id)arg5 ;
-(long long)component:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(NSArray *)veryShortStandaloneWeekdaySymbols;
-(unsigned long long)firstWeekday;
-(NSArray *)shortWeekdaySymbols;
-(NSArray *)shortQuarterSymbols;
-(id)nextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isDateInYesterday:(id)arg1 ;
-(id)nextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(SCD_Struct_NS22)_minimumRangeOfUnit:(unsigned long long)arg1 ;
-(BOOL)rangeOfWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
-(NSArray *)standaloneMonthSymbols;
-(SCD_Struct_NS22)_rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(unsigned char)_addComponents:(double*)arg1 :(unsigned long long)arg2 :(const char*)arg3 :(char*)arg4 ;
-(SCD_Struct_NS22)_maximumRangeOfUnit:(unsigned long long)arg1 ;
-(id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2 ;
-(unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long long)arg3 :(const char*)arg4 :(char*)arg5 ;
-(NSArray *)veryShortMonthSymbols;
-(void)getEra:(out long long*)arg1 year:(out long long*)arg2 month:(out long long*)arg3 day:(out long long*)arg4 fromDate:(id)arg5 ;
-(NSArray *)veryShortStandaloneMonthSymbols;
-(BOOL)isDate:(id)arg1 inSameDayAsDate:(id)arg2 ;
-(unsigned char)_rangeOfUnit:(unsigned long long)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(long long)_ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forAT:(double)arg3 ;
-(id)dateBySettingUnit:(unsigned long long)arg1 value:(long long)arg2 ofDate:(id)arg3 options:(unsigned long long)arg4 ;
-(NSArray *)shortStandaloneMonthSymbols;
-(BOOL)isDate:(id)arg1 equalToDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
-(BOOL)date:(id)arg1 matchesComponents:(id)arg2 ;
-(void)_setGregorianStartDate:(id)arg1 ;
-(unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char*)arg2 :(char*)arg3 ;
-(id)_copyGregorianStartDate;
-(NSArray *)veryShortWeekdaySymbols;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char*)arg2 :(char*)arg3 ;
-(id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4 ;
-(id)dateWithEra:(long long)arg1 yearForWeekOfYear:(long long)arg2 weekOfYear:(long long)arg3 weekday:(long long)arg4 hour:(long long)arg5 minute:(long long)arg6 second:(long long)arg7 nanosecond:(long long)arg8 ;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(NSArray *)shortStandaloneQuarterSymbols;
-(NSLocale *)locale;
-(unsigned long long)_cfTypeID;
-(id)init;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(unsigned long long)hash;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(NSString *)calendarIdentifier;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(NSTimeZone *)timeZone;
-(BOOL)isEqual:(id)arg1 ;
-(long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
-(id)startOfDayForDate:(id)arg1 ;
-(id)gregorianStartDate;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)minimumDaysInFirstWeek;
@end
