/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PRSCoreDuet, NSMutableDictionary, NSArray;

@interface PRSMLManager : NSObject {

	PRSCoreDuet* _coreDuet;
	NSMutableDictionary* _mapPredictionEnginesToClasses;
	NSMutableDictionary* _mapPredictionEnginesToCounts;
	NSMutableDictionary* _mapPredictionEnginesToCountFiles;
	NSMutableDictionary* _mapPredictionEnginesToPredictedTopHit;
	NSMutableDictionary* _dictCoreDuetInfo;
	NSArray* _categoryList;
	NSMutableDictionary* _combinedTopScoreOrder;
	NSMutableDictionary* _combinedBottomScoreOrder;

}

@property (retain) PRSCoreDuet * coreDuet;                                                   //@synthesize coreDuet=_coreDuet - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToClasses;                      //@synthesize mapPredictionEnginesToClasses=_mapPredictionEnginesToClasses - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToCounts;                       //@synthesize mapPredictionEnginesToCounts=_mapPredictionEnginesToCounts - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToCountFiles;                   //@synthesize mapPredictionEnginesToCountFiles=_mapPredictionEnginesToCountFiles - In the implementation block
@property (retain) NSMutableDictionary * mapPredictionEnginesToPredictedTopHit;              //@synthesize mapPredictionEnginesToPredictedTopHit=_mapPredictionEnginesToPredictedTopHit - In the implementation block
@property (retain) NSMutableDictionary * dictCoreDuetInfo;                                   //@synthesize dictCoreDuetInfo=_dictCoreDuetInfo - In the implementation block
@property (retain) NSArray * categoryList;                                                   //@synthesize categoryList=_categoryList - In the implementation block
@property (retain) NSMutableDictionary * combinedTopScoreOrder;                              //@synthesize combinedTopScoreOrder=_combinedTopScoreOrder - In the implementation block
@property (retain) NSMutableDictionary * combinedBottomScoreOrder;                           //@synthesize combinedBottomScoreOrder=_combinedBottomScoreOrder - In the implementation block
+(id)getSPMLSharedInstance;
+(id)createPathToSpotlightPrefFile;
-(void)dumpPredictionStatsToFlatFiles;
-(void)setMapPredictionEnginesToPredictedTopHit:(NSMutableDictionary *)arg1 ;
-(void)setCombinedTopScoreOrder:(NSMutableDictionary *)arg1 ;
-(void)saveLastRankingForCategories:(id)arg1 ;
-(void)addCategoryAndGroupNameToTrainCategories:(id)arg1 groupName:(id)arg2 ;
-(id)getLastSavedCategoryRankings;
-(void)setCategoryList:(NSArray *)arg1 ;
-(PRSCoreDuet *)coreDuet;
-(id)initManager;
-(unsigned long long)getCountForCategory:(id)arg1 ;
-(void)setMapPredictionEnginesToClasses:(NSMutableDictionary *)arg1 ;
-(unsigned long long)getTotalResultsUsedCountForDuet;
-(NSMutableDictionary *)combinedBottomScoreOrder;
-(void)setCoreDuet:(PRSCoreDuet *)arg1 ;
-(NSMutableDictionary *)mapPredictionEnginesToCounts;
-(void)setDictCoreDuetInfo:(NSMutableDictionary *)arg1 ;
-(id)getRankedCategoriesAsDictionaryForDays:(long long)arg1 ;
-(NSMutableDictionary *)dictCoreDuetInfo;
-(NSMutableDictionary *)mapPredictionEnginesToPredictedTopHit;
-(NSMutableDictionary *)mapPredictionEnginesToCountFiles;
-(void)setMapPredictionEnginesToCounts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)combinedTopScoreOrder;
-(NSArray *)categoryList;
-(void)setCombinedBottomScoreOrder:(NSMutableDictionary *)arg1 ;
-(void)setMapPredictionEnginesToCountFiles:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mapPredictionEnginesToClasses;
@end

