/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSDateInterval, NSArray;

@interface BMBehaviorDatabaseMetadata : NSObject {

	NSDate* _miningDate;
	NSDateInterval* _eventInterval;
	unsigned long long _minimumAbsoluteSupport;
	double _minimumConfidence;
	double _samplingInterval;
	NSArray* _itemTypeIdentifiers;
	NSArray* _targetTypeIdentifiers;
	unsigned long long _numberOfBaskets;

}

@property (nonatomic,copy,readonly) NSDate * miningDate;                               //@synthesize miningDate=_miningDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * eventInterval;                    //@synthesize eventInterval=_eventInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumAbsoluteSupport;              //@synthesize minimumAbsoluteSupport=_minimumAbsoluteSupport - In the implementation block
@property (nonatomic,readonly) double minimumConfidence;                               //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
@property (nonatomic,readonly) double samplingInterval;                                //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (nonatomic,readonly) NSArray * itemTypeIdentifiers;                          //@synthesize itemTypeIdentifiers=_itemTypeIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * targetTypeIdentifiers;                        //@synthesize targetTypeIdentifiers=_targetTypeIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfBaskets;                     //@synthesize numberOfBaskets=_numberOfBaskets - In the implementation block
-(double)samplingInterval;
-(unsigned long long)hash;
-(unsigned long long)minimumAbsoluteSupport;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithMiningDate:(id)arg1 eventInterval:(id)arg2 minimumAbsoluteSupport:(unsigned long long)arg3 minimumConfidence:(double)arg4 samplingInterval:(double)arg5 itemTypeIdentifiers:(id)arg6 targetTypeIdentifiers:(id)arg7 numberOfBaskets:(unsigned long long)arg8 ;
-(NSDateInterval *)eventInterval;
-(double)minimumConfidence;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresntation;
-(NSArray *)itemTypeIdentifiers;
-(unsigned long long)numberOfBaskets;
-(NSDate *)miningDate;
-(NSArray *)targetTypeIdentifiers;
@end
