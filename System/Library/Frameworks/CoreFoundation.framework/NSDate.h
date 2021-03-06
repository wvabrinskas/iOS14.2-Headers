/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double timeIntervalSinceReferenceDate; 
+(id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2 ;
+(id)dateWithNaturalLanguageString:(id)arg1 ;
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)now;
+(id)dateWithDate:(id)arg1 ;
+(id)dateWithString:(id)arg1 ;
+(id)dateWithTimeIntervalSince1970:(double)arg1 ;
+(id)dateWithTimeIntervalSinceReferenceDate:(double)arg1 ;
+(id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)date;
+(double)timeIntervalSinceReferenceDate;
+(id)distantFuture;
+(id)distantPast;
-(id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3 ;
-(id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)_web_isToday;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_web_compareDay:(id)arg1 ;
-(id)_web_RFC1123DateString;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(double)bucketToRoundingFactor:(unsigned)arg1 ;
-(double)timeIntervalSince1970WithBucket:(unsigned)arg1 ;
-(BOOL)isInToday;
-(BOOL)isNSDate__;
-(BOOL)isInTomorrow;
-(BOOL)isInYesterday;
-(BOOL)isEqualToDate:(id)arg1 ;
-(id)addTimeInterval:(double)arg1 ;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(BOOL)isInSameDayAsDate:(id)arg1 ;
-(double)timeIntervalSinceDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(id)dateByAddingTimeInterval:(double)arg1 ;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(unsigned long long)hash;
-(double)timeIntervalSinceNow;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(double)timeIntervalSince1970;
-(id)description;
-(double)timeIntervalSinceReferenceDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)earlierDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)laterDate:(id)arg1 ;
@end

