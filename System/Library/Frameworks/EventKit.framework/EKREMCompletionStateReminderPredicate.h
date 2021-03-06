/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKREMReminderPredicate.h>

@class NSDate;

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {

	NSDate* _start;
	NSDate* _end;
	BOOL _completed;

}
-(id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id*)arg3 ;
-(id)initForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
@end

