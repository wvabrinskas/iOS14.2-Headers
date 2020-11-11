/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLeaderboardCollectionDataSource.h>

@class NSDictionary, GKLeaderboardSet, NSMutableArray, NSTimer, UICollectionView;

@interface GKLeaderboardListDataSource : GKLeaderboardCollectionDataSource {

	NSDictionary* _assetNames;
	GKLeaderboardSet* _leaderboardSet;
	NSMutableArray* _leaderboards;
	NSTimer* _timer;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;                     //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * leaderboards;                         //@synthesize leaderboards=_leaderboards - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                       //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSDictionary * assetNames;                             //@synthesize assetNames=_assetNames - In the implementation block
-(GKLeaderboardSet *)leaderboardSet;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(NSTimer *)timer;
-(void)setupCollectionView:(id)arg1 ;
-(NSMutableArray *)leaderboards;
-(void)setLeaderboards:(NSMutableArray *)arg1 ;
-(void)removeLeaderboardsWithoutImages;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2 ;
-(NSDictionary *)assetNames;
-(void)setAssetNames:(NSDictionary *)arg1 ;
-(id)title;
-(CGSize)standardCellSizeForCollectionView:(id)arg1 ;
-(void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(void)setTimer:(NSTimer *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setupTimer;
-(void)updateHighlightsInSectionHeader:(id)arg1 ;
-(void)dealloc;
@end
