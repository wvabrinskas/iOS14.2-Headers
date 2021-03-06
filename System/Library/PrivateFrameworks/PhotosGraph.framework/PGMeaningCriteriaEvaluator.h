/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, PGMeaningCriteriaInfo, NSArray;

@interface PGMeaningCriteriaEvaluator : NSObject {

	NSString* _meaningLabel;
	PGMeaningCriteriaInfo* _meaningCriteriaInfo;
	NSArray* _allMeaningCriteriaArray;

}

@property (nonatomic,retain) PGMeaningCriteriaInfo * meaningCriteriaInfo;              //@synthesize meaningCriteriaInfo=_meaningCriteriaInfo - In the implementation block
@property (nonatomic,retain) NSArray * allMeaningCriteriaArray;                        //@synthesize allMeaningCriteriaArray=_allMeaningCriteriaArray - In the implementation block
@property (nonatomic,readonly) NSString * meaningLabel;                                //@synthesize meaningLabel=_meaningLabel - In the implementation block
+(id)_allMeaningCriteriaClassArray;
+(id)meaningCriteriaEvaluatorsForMeaningLabel:(id)arg1 withDictionary:(id)arg2 ;
-(id)description;
-(NSString *)meaningLabel;
-(id)initWithDictionary:(id)arg1 meaningCriteriaInfo:(id)arg2 ;
-(BOOL)allCriteriaPassesForMomentNode:(id)arg1 ;
-(BOOL)allCriteriaIsValid;
-(PGMeaningCriteriaInfo *)meaningCriteriaInfo;
-(void)setMeaningCriteriaInfo:(PGMeaningCriteriaInfo *)arg1 ;
-(NSArray *)allMeaningCriteriaArray;
-(void)setAllMeaningCriteriaArray:(NSArray *)arg1 ;
@end

