/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKLeaderboardSummaryInternal : GKInternalRepresentation {

	NSString* _baseLeaderboardID;
	NSString* _leaderboardID;
	NSString* _timeScope;
	NSString* _groupID;
	NSString* _title;
	NSString* _type;
	NSString* _formattedScoreValue;
	unsigned long long _context;
	unsigned long long _status;
	unsigned long long _startDate;
	unsigned long long _duration;
	unsigned long long _nextStartDate;
	unsigned long long _scoreValue;
	unsigned long long _rank;
	unsigned long long _totalEntries;
	unsigned long long _friendRank;
	unsigned long long _totalFriendEntries;

}

@property (nonatomic,retain) NSString * baseLeaderboardID;                       //@synthesize baseLeaderboardID=_baseLeaderboardID - In the implementation block
@property (nonatomic,retain) NSString * leaderboardID;                           //@synthesize leaderboardID=_leaderboardID - In the implementation block
@property (nonatomic,retain) NSString * timeScope;                               //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,retain) NSString * groupID;                                 //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * formattedScoreValue;                     //@synthesize formattedScoreValue=_formattedScoreValue - In the implementation block
@property (assign,nonatomic) unsigned long long context;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long nextStartDate;                   //@synthesize nextStartDate=_nextStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long scoreValue;                      //@synthesize scoreValue=_scoreValue - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                            //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned long long totalEntries;                    //@synthesize totalEntries=_totalEntries - In the implementation block
@property (assign,nonatomic) unsigned long long friendRank;                      //@synthesize friendRank=_friendRank - In the implementation block
@property (assign,nonatomic) unsigned long long totalFriendEntries;              //@synthesize totalFriendEntries=_totalFriendEntries - In the implementation block
+(id)secureCodedPropertyKeys;
-(unsigned long long)rank;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(unsigned long long)friendRank;
-(unsigned long long)startDate;
-(void)setTimeScope:(NSString *)arg1 ;
-(NSString *)timeScope;
-(unsigned long long)context;
-(NSString *)title;
-(NSString *)type;
-(void)setRank:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)duration;
-(unsigned long long)totalEntries;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setTotalEntries:(unsigned long long)arg1 ;
-(unsigned long long)nextStartDate;
-(NSString *)baseLeaderboardID;
-(NSString *)groupID;
-(void)setStartDate:(unsigned long long)arg1 ;
-(void)setFriendRank:(unsigned long long)arg1 ;
-(NSString *)leaderboardID;
-(void)setLeaderboardID:(NSString *)arg1 ;
-(void)setBaseLeaderboardID:(NSString *)arg1 ;
-(void)setNextStartDate:(unsigned long long)arg1 ;
-(NSString *)formattedScoreValue;
-(void)setFormattedScoreValue:(NSString *)arg1 ;
-(unsigned long long)scoreValue;
-(void)setScoreValue:(unsigned long long)arg1 ;
-(unsigned long long)totalFriendEntries;
-(void)setTotalFriendEntries:(unsigned long long)arg1 ;
@end

