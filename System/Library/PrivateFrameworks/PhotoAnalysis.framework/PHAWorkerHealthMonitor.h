/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
@class NSMutableDictionary;

@interface PHAWorkerHealthMonitor : NSObject {

	os_unfair_lock_s _lock;
	double _maxScoreRecentnessInterval;
	NSMutableDictionary* _scoresByWorkerType;
	NSMutableDictionary* _cachedAverageScoresByWorkerType;
	NSMutableDictionary* _lastTrimDateByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * scoresByWorkerType;                           //@synthesize scoresByWorkerType=_scoresByWorkerType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedAverageScoresByWorkerType;              //@synthesize cachedAverageScoresByWorkerType=_cachedAverageScoresByWorkerType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * lastTrimDateByWorkerType;                     //@synthesize lastTrimDateByWorkerType=_lastTrimDateByWorkerType - In the implementation block
@property (assign,nonatomic) double maxScoreRecentnessInterval;                                    //@synthesize maxScoreRecentnessInterval=_maxScoreRecentnessInterval - In the implementation block
-(id)statusAsDictionary;
-(BOOL)_isHealthyForWorkerType:(short)arg1 ;
-(void)_trimScoresForWorkerType:(short)arg1 ;
-(float)_averageScoreForWorkerType:(short)arg1 ;
-(id)init;
-(NSMutableDictionary *)lastTrimDateByWorkerType;
-(BOOL)_needsTrimScoresForWorkerType:(short)arg1 ;
-(void)setMaxScoreRecentnessInterval:(double)arg1 ;
-(float)averageScoreForWorkerType:(short)arg1 ;
-(void)recordResultsFromWorkerJob:(id)arg1 ;
-(BOOL)isHealthyForWorkerType:(short)arg1 ;
-(void)reset;
-(float)_calculateAverageScoreForWorkerType:(short)arg1 ;
-(NSMutableDictionary *)scoresByWorkerType;
-(NSMutableDictionary *)cachedAverageScoresByWorkerType;
-(id)_scoresForWorkerType:(short)arg1 ;
-(double)maxScoreRecentnessInterval;
@end

