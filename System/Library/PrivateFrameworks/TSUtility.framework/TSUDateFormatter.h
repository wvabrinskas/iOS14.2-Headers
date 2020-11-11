/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSUtility/TSUtility-Structs.h>
@class NSString;

@interface TSUDateFormatter : NSObject {

	NSString* mDateOnlyFormatString;
	NSString* mTimeOnlyFormatString;
	CFDateFormatterRef mFullDateFormatter;

}
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
+(id)defaultDateTimeFormat;
+(id)supportedDateFormats;
+(id)supportedTimeFormats;
+(id)shortMonthNamesForNonCachedCurrentLocale;
-(id)init;
-(void)dealloc;
-(id)fullDateString:(id)arg1 ;
-(id)appropriateOutputFormatStringForInputFormatString:(id)arg1 ;
-(id)stringFromDate:(id)arg1 format:(id)arg2 ;
@end
