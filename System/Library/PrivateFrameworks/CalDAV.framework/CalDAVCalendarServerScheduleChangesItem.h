/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CalDAVCalendarServerActionItem* _action;

}

@property (nonatomic,retain) CoreDAVLeafItem * dtstamp;                            //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerActionItem * action;              //@synthesize action=_action - In the implementation block
-(id)init;
-(CoreDAVLeafItem *)dtstamp;
-(void)setAction:(CalDAVCalendarServerActionItem *)arg1 ;
-(CalDAVCalendarServerActionItem *)action;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
@end
