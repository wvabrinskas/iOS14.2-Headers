/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/AMSAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSLogoutTask : AMSTask {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(id)logout;
@end
