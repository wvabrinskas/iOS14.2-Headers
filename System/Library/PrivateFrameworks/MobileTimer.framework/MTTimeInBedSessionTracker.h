/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileTimer/MTSleepSessionTracker.h>

@interface MTTimeInBedSessionTracker : MTSleepSessionTracker
+(BOOL)_shouldUseBedtimeDismissedDateForAlarm:(id)arg1 ;
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1 ;
-(Class)sessionClass;
-(id)_createSleepSessionWithUserWakeTime:(id)arg1 endReason:(unsigned long long)arg2 ;
-(id)processedSessionForSession:(id)arg1 ;
-(void)sleepCoordinator:(id)arg1 sleepModeManuallyExited:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)startSession;
@end

