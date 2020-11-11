/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface HDMCSymptomHistoryBuilder : NSObject {

	NSMutableDictionary* _mostRecentDayBySymptom;
	unsigned long long _recentSymptoms;

}

@property (assign,nonatomic) unsigned long long recentSymptoms;              //@synthesize recentSymptoms=_recentSymptoms - In the implementation block
-(unsigned long long)recentSymptoms;
-(id)initWithCurrentDayIndex:(long long)arg1 ;
-(void)addSymptoms:(unsigned long long)arg1 forDayIndex:(long long)arg2 ;
-(void)setRecentSymptoms:(unsigned long long)arg1 ;
@end
