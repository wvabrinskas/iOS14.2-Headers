/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLMarsSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation
+(BOOL)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(SCD_Struct_NF1)arg2 ;
+(unsigned long long)tileInfosUsedCount;
-(id)rankedLayoutRequests;
-(BOOL)isReliable;
-(id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1 ;
@end
