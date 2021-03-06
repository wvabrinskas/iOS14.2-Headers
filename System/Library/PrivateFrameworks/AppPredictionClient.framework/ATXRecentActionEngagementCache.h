/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface ATXRecentActionEngagementCache : NSObject {

	NSString* _recentMLEngagementCachePath;
	NSString* _recentHeuristicEngagementCachePath;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(id)_getAllCachedActionsNoSync;
-(void)_addEngagedActionNoSync:(id)arg1 toCacheAtPath:(id)arg2 ;
-(void)_serializeAndWriteNoSyncActionSet:(id)arg1 toCacheAtPath:(id)arg2 ;
-(void)_addEngagedActionSetNoSync:(id)arg1 toCacheAtPath:(id)arg2 ;
-(id)_recentActionsNoSyncForCacheAtPath:(id)arg1 ;
-(void)clearRecentMLEngagementsExceptForActions:(id)arg1 ;
-(void)clearRecentEngagementsFromCacheAtPath:(id)arg1 withExceptionActions:(id)arg2 ;
-(void)addEngagedAction:(id)arg1 ;
-(id)exceptionsFoundInCacheAtPath:(id)arg1 forCandidateExceptions:(id)arg2 ;
-(void)clearRecentEngagements;
-(void)clearRecentHeuristicEngagementsExceptForActions:(id)arg1 ;
-(id)recentActions;
-(id)initWithCacheDirectory:(id)arg1 ;
@end

