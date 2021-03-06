/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CALNTriggeredEventNotificationBodyDescriptionProvider.h>

@protocol CALNTravelAdvisoryDescriptionGenerator, CalDateProvider;
@class NSString;

@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject <CALNTriggeredEventNotificationBodyDescriptionProvider> {

	id<CALNTravelAdvisoryDescriptionGenerator> _travelAdvisoryDescriptionGenerator;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNTravelAdvisoryDescriptionGenerator> travelAdvisoryDescriptionGenerator;              //@synthesize travelAdvisoryDescriptionGenerator=_travelAdvisoryDescriptionGenerator - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                                           //@synthesize dateProvider=_dateProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CalDateProvider>)dateProvider;
-(id)bodyForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 bodyContainsTravelAdvice:(BOOL*)arg3 ;
-(id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
-(id)initWithTravelAdvisoryDescriptionGenerator:(id)arg1 dateProvider:(id)arg2 ;
-(id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 ;
-(id<CALNTravelAdvisoryDescriptionGenerator>)travelAdvisoryDescriptionGenerator;
-(id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 ;
@end

