/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue;

@interface LKLoginSupport : NSObject {

	NSOperationQueue* _listenerQueue;
	NSOperationQueue* _completionQueue;

}

@property (nonatomic,retain) NSOperationQueue * listenerQueue;                //@synthesize listenerQueue=_listenerQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
+(BOOL)hasCleanUser;
+(id)findLeastRecentlyUsedCleanUser;
+(BOOL)isNewUserAbleToLogin;
-(void)setCompletionQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(NSOperationQueue *)completionQueue;
-(NSOperationQueue *)listenerQueue;
-(void)setListenerQueue:(NSOperationQueue *)arg1 ;
-(id)_errorForNotificationType:(unsigned long long)arg1 ;
-(id)_notificationForNotificationType:(unsigned long long)arg1 ;
-(void)_timeOutAfterTimePeriod:(double)arg1 withError:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_runWithTimeOutPeriod:(double)arg1 notificationType:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_runWhenDarwinNotificationPosted:(unsigned long long)arg1 timeOutPeriod:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)runWithTimeOutPeriod:(double)arg1 loggedInBlock:(/*^block*/id)arg2 ;
-(void)runWithTimeOutPeriod:(double)arg1 readyToLoginBlock:(/*^block*/id)arg2 ;
@end

