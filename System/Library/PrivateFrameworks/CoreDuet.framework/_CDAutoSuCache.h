/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSDate;

@interface _CDAutoSuCache : NSObject {

	NSDictionary* _predictedSleep;
	NSDate* _predictedSleepValidityStartDate;
	NSDate* _predictedSleepValidityEndDate;

}

@property (retain) NSDictionary * predictedSleep;                         //@synthesize predictedSleep=_predictedSleep - In the implementation block
@property (retain) NSDate * predictedSleepValidityStartDate;              //@synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate - In the implementation block
@property (retain) NSDate * predictedSleepValidityEndDate;                //@synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate - In the implementation block
+(id)sharedCache;
-(void)clear;
-(void)setPredictedSleepValidityEndDate:(NSDate *)arg1 ;
-(void)setPredictedSleep:(NSDictionary *)arg1 ;
-(void)setPredictedSleepValidityStartDate:(NSDate *)arg1 ;
-(NSDictionary *)predictedSleep;
-(id)cachedPredictedSleepDictionaryForDate:(id)arg1 ;
-(NSDate *)predictedSleepValidityEndDate;
-(NSDate *)predictedSleepValidityStartDate;
-(void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3 ;
@end
