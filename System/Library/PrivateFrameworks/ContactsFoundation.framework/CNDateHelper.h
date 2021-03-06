/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNDateHelper : NSObject
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
+(id)dateComponentsFromDateComponents:(id)arg1 preservingUnits:(unsigned long long)arg2 ;
+(long long)gregorianYearInGMTFromDate:(id)arg1 ;
+(BOOL)isComponentsEmpty:(id)arg1 ;
+(id)gregorianCalendarInGMT;
+(id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)arg1 timeZone:(id)arg2 ;
+(long long)currentGregorianYearInGMT;
+(long long)gregorianYearFromDate:(id)arg1 ;
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
+(id)componentsFromDate:(id)arg1 ;
+(id)componentsForJanuary1WithYear:(long long)arg1 ;
+(id)dateComponentsInCalendar:(id)arg1 fromGregorianDateComponents:(id)arg2 ;
+(id)gregorianCalendar;
+(BOOL)isGregorianDerivedCalendarIdentifier:(id)arg1 ;
+(id)gregorianDateComponentsFromDateComponents:(id)arg1 ;
+(BOOL)isGregorianDerivedCalendar:(id)arg1 ;
@end

