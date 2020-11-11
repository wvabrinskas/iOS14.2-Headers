/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityAchievementsUI/AAUIAchievementsDataProvider.h>

@class NSArray;

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider {

	NSArray* _achievements;

}
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)init;
-(long long)numberOfSections;
-(id)_monthStringFromTemplateName:(id)arg1 ;
-(void)startFetching;
-(void)addInitialLoadObserver:(id)arg1 ;
-(void)removeInitialLoadObserver:(id)arg1 ;
-(void)addRecentAndRelevantSectionObserver:(id)arg1 ;
-(void)removeRecentAndRelevantSectionObserver:(id)arg1 ;
-(void)addMainSectionObserver:(id)arg1 ;
-(void)removeMainSectionObserver:(id)arg1 ;
-(void)stopFetching;
-(id)headerStringForSection:(long long)arg1 isRecentAndRelevant:(BOOL)arg2 ;
-(id)recentAndRelevantAchievementAtIndexPath:(id)arg1 ;
-(id)achievementAtIndexPath:(id)arg1 ;
-(id)_achievementForTemplate:(id)arg1 earnedInstanceCount:(long long)arg2 earnedInstanceOffset:(long long)arg3 earnedInstanceValue:(long long)arg4 goalValue:(long long)arg5 progressValue:(long long)arg6 ;
-(id)_ACHDateComponentIntervalWithMonthOffset:(unsigned long long)arg1 ;
-(id)_currentMonthlyChallengeAchievementForTemplate:(id)arg1 localizableSuffix:(id)arg2 goalValue:(long long)arg3 progressValue:(long long)arg4 isEarned:(BOOL)arg5 ;
-(id)_dateComponentsWithDayOffset:(long long)arg1 ;
-(id)_fitnessUIAssetsURLWithKey:(id)arg1 value:(id)arg2 ;
@end
