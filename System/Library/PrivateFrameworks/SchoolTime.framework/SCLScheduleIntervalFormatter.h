/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@class NSLocale, NSDateFormatter, NSDateIntervalFormatter, NSBundle, NSString, NSCalendar, NSTimeZone;

@interface SCLScheduleIntervalFormatter : NSFormatter {

	BOOL _coalescesAMPMSymbols;
	BOOL _prefersHoursOnly;
	unsigned long long _formattingStyle;
	NSLocale* _locale;
	NSDateFormatter* _shortFormatter;
	NSDateIntervalFormatter* _briefFormatter;
	NSBundle* _bundle;
	NSString* _table;
	NSCalendar* _referenceCalendar;
	NSTimeZone* _referenceTimeZone;

}

@property (nonatomic,retain) NSDateFormatter * shortFormatter;                      //@synthesize shortFormatter=_shortFormatter - In the implementation block
@property (nonatomic,retain) NSDateIntervalFormatter * briefFormatter;              //@synthesize briefFormatter=_briefFormatter - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSString * table;                                      //@synthesize table=_table - In the implementation block
@property (nonatomic,retain) NSCalendar * referenceCalendar;                        //@synthesize referenceCalendar=_referenceCalendar - In the implementation block
@property (nonatomic,retain) NSTimeZone * referenceTimeZone;                        //@synthesize referenceTimeZone=_referenceTimeZone - In the implementation block
@property (assign,nonatomic) unsigned long long formattingStyle;                    //@synthesize formattingStyle=_formattingStyle - In the implementation block
@property (assign,nonatomic) BOOL coalescesAMPMSymbols;                             //@synthesize coalescesAMPMSymbols=_coalescesAMPMSymbols - In the implementation block
@property (assign,nonatomic) BOOL prefersHoursOnly;                                 //@synthesize prefersHoursOnly=_prefersHoursOnly - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                     //@synthesize locale=_locale - In the implementation block
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)table;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTable:(NSString *)arg1 ;
-(void)setFormattingStyle:(unsigned long long)arg1 ;
-(NSBundle *)bundle;
-(NSCalendar *)referenceCalendar;
-(unsigned long long)formattingStyle;
-(id)stringFromTimeInterval:(id)arg1 ;
-(void)setPrefersHoursOnly:(BOOL)arg1 ;
-(BOOL)prefersHoursOnly;
-(void)setCoalescesAMPMSymbols:(BOOL)arg1 ;
-(id)stringFromTime:(id)arg1 toTime:(id)arg2 ;
-(id)newDateFormatterWithLocale:(id)arg1 ;
-(NSTimeZone *)referenceTimeZone;
-(id)_stringForDateInterval:(id)arg1 startComponents:(id)arg2 endComponents:(id)arg3 ;
-(NSDateIntervalFormatter *)briefFormatter;
-(BOOL)coalescesAMPMSymbols;
-(NSDateFormatter *)shortFormatter;
-(id)_shortIntervalFormat;
-(id)_stringForCoalescedAMPMSymbolsWithDateInterval:(id)arg1 locale:(id)arg2 startTimeComponents:(id)arg3 endTimeComponents:(id)arg4 ;
-(void)setShortFormatter:(NSDateFormatter *)arg1 ;
-(void)setBriefFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setReferenceCalendar:(NSCalendar *)arg1 ;
-(void)setReferenceTimeZone:(NSTimeZone *)arg1 ;
@end

