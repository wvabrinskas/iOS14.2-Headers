/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVPropFindTask.h>

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {

	BOOL _syncEvents;
	BOOL _syncTodos;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;

}

@property (assign,nonatomic) BOOL syncEvents;                                      //@synthesize syncEvents=_syncEvents - In the implementation block
@property (assign,nonatomic) BOOL syncTodos;                                       //@synthesize syncTodos=_syncTodos - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterStartDate;              //@synthesize eventFilterStartDate=_eventFilterStartDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterEndDate;                //@synthesize eventFilterEndDate=_eventFilterEndDate - In the implementation block
-(id)requestBody;
-(id)description;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(id)httpMethod;
-(void)setSyncEvents:(BOOL)arg1 ;
-(void)setSyncTodos:(BOOL)arg1 ;
-(BOOL)syncTodos;
-(BOOL)syncEvents;
-(void)setEventFilterStartDate:(NSDateComponents *)arg1 ;
-(void)setEventFilterEndDate:(NSDateComponents *)arg1 ;
-(id)_icsDateStringForNSDateComponents:(id)arg1 ;
-(void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_appendComponentFiltersToXMLData:(id)arg1 ;
@end

