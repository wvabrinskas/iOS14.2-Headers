/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRadioPlaybackHistory.h>

@class ICRadioPlaybackHistoryItem, NSArray;

@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory

@property (nonatomic,copy) ICRadioPlaybackHistoryItem * currentTrack; 
@property (assign,nonatomic) long long numberOfSkips; 
@property (nonatomic,copy) NSArray * tracks; 
-(void)setTracks:(NSArray *)arg1 ;
-(void)_updateTracksUsingBlock:(/*^block*/id)arg1 ;
-(void)_checkCurrentTrackIsPresent;
-(void)addTrack:(id)arg1 ;
-(void)addTracks:(id)arg1 ;
-(void)removeExpiredTracks;
-(void)removeTracksAtIndexes:(id)arg1 ;
-(void)replaceTrackAtIndex:(long long)arg1 withTrack:(id)arg2 ;
-(void)setCurrentTrack:(ICRadioPlaybackHistoryItem *)arg1 ;
-(void)setNumberOfSkips:(long long)arg1 ;
@end
