/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol EMSearchableIndexQueryBuilder <NSObject>
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) id resultsBlock; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,copy) id failureBlock; 
@property (nonatomic,copy) id gatheredBlock; 
@property (nonatomic,copy) id changedItemsBlock; 
@property (nonatomic,copy) id removedItemsBlock; 
@property (nonatomic,copy) id countChangedBlock; 
@property (nonatomic,copy) NSArray * fetchAttributes; 
@property (nonatomic,copy) NSArray * protectionClasses; 
@property (nonatomic,copy) NSArray * rankingQueries; 
@property (assign,nonatomic) long long maxCount; 
@property (assign,nonatomic) BOOL live; 
@property (assign,nonatomic) BOOL counting; 
@property (nonatomic,copy) NSString * logIdentifier; 
@required
-(long long)maxCount;
-(id)completionBlock;
-(void)setFailureBlock:(/*^block*/id)arg1;
-(void)setMaxCount:(long long)arg1;
-(void)setProtectionClasses:(id)arg1;
-(BOOL)counting;
-(NSArray *)protectionClasses;
-(BOOL)live;
-(NSString *)bundleIdentifier;
-(NSArray *)fetchAttributes;
-(id)resultsBlock;
-(void)setResultsBlock:(/*^block*/id)arg1;
-(void)setRankingQueries:(id)arg1;
-(id)gatheredBlock;
-(id)removedItemsBlock;
-(id)changedItemsBlock;
-(id)countChangedBlock;
-(void)setGatheredBlock:(/*^block*/id)arg1;
-(void)setChangedItemsBlock:(/*^block*/id)arg1;
-(void)setCountChangedBlock:(/*^block*/id)arg1;
-(void)setRemovedItemsBlock:(/*^block*/id)arg1;
-(void)setLogIdentifier:(id)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(void)setFetchAttributes:(id)arg1;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(id)failureBlock;
-(void)setLive:(BOOL)arg1;
-(void)setCounting:(BOOL)arg1;
-(NSString *)logIdentifier;
-(NSArray *)rankingQueries;

@end
