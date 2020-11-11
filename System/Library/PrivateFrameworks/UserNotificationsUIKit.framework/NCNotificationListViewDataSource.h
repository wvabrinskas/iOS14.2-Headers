/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NCNotificationListViewDataSource <NSObject>
@optional
-(void)recycleView:(id)arg1;
-(id)headerViewForNotificationList:(id)arg1;
-(double)headerViewHeightForNotificationList:(id)arg1;
-(id)footerViewForNotificationList:(id)arg1;
-(double)footerViewHeightForNotificationList:(id)arg1;

@required
-(double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)notificationListViewNumberOfItems:(id)arg1;
-(BOOL)notificationListViewIsGroup:(id)arg1;
-(id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;

@end
