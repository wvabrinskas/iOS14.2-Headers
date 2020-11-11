/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CADNotificationMonitorInterface
@required
-(void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(/*^block*/id)arg2;
-(void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg1 excludingDelegateSources:(BOOL)arg2 filteredByShowsNotificationsFlag:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)CADCalendar:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(/*^block*/id)arg1;
-(void)CADResourceChange:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADDatabaseGetEventNotificationItemsFilteredByShowsNotificationsFlag:(BOOL)arg1 calculateEarliestExpirationDate:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)CADEventSetInvitationStatus:(int)arg1 forEvent:(id)arg2 error:(/*^block*/id)arg3;
-(void)CADDatabaseGetInviteReplyNotifications:(/*^block*/id)arg1;
-(void)CADInviteReplyNotification:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADDatabaseGetInboxRepliedSectionItems:(/*^block*/id)arg1;
-(void)CADEvent:(id)arg1 setAlertedWithError:(/*^block*/id)arg2;
-(void)CADDatabaseGetResourceChanges:(/*^block*/id)arg1;

@end
