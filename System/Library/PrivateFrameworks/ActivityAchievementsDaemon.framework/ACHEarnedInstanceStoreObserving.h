/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACHEarnedInstanceStoreObserving <NSObject>
@optional
-(void)earnedInstanceStoreDidFinishInitialFetch:(id)arg1;

@required
-(void)earnedInstanceStore:(id)arg1 didAddNewEarnedInstances:(id)arg2;
-(void)earnedInstanceStore:(id)arg1 didRemoveEarnedInstances:(id)arg2;

@end
