/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject {

	NSString* _heuristicName;
	ATXHeuristicResultCache* _cache;

}

@property (nonatomic,retain) NSString * heuristicName;                            //@synthesize heuristicName=_heuristicName - In the implementation block
@property (assign,nonatomic,__weak) ATXHeuristicResultCache * cache;              //@synthesize cache=_cache - In the implementation block
-(NSString *)heuristicName;
-(ATXHeuristicResultCache *)cache;
-(void)setCache:(ATXHeuristicResultCache *)arg1 ;
-(unsigned long long)hash;
-(void)setHeuristicName:(NSString *)arg1 ;
-(id)initWithHeuristic:(id)arg1 cache:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

