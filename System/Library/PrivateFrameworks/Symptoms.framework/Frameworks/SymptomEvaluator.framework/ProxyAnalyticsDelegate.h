/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ProxyAnalyticsDelegate <NSObject>
@optional
-(void)performAppPeriodicTasksComplete:(id)arg1 error:(id)arg2;
-(void)proxyAnalyticsTrainAndScoreInterrupted;
-(void)proxyAnalyticsTrainAndScoreComplete:(id)arg1 error:(id)arg2;
-(void)performAppExperiencePeriodicTasksComplete:(id)arg1 error:(id)arg2;
-(void)performPersistentStoreHealthCheckComplete:(id)arg1 error:(id)arg2;
-(void)performAppTrackingPeriodicTasksComplete:(id)arg1 error:(id)arg2;

@end

