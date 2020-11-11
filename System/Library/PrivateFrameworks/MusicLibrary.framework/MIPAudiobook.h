/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPAlbum, MIPArtist, MIPGenre, NSString, MIPPlaybackInfo;

@interface MIPAudiobook : PBCodable <NSCopying> {

	MIPAlbum* _album;
	MIPArtist* _artist;
	int _audioFormat;
	MIPArtist* _composer;
	int _discNumber;
	MIPGenre* _genre;
	NSString* _hlsPlaylistURL;
	MIPPlaybackInfo* _playbackInfo;
	int _trackNumber;
	int _userRating;
	BOOL _excludeFromShuffle;
	BOOL _hasVideo;
	SCD_Struct_MI15 _has;

}

@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) MIPAlbum * album;                            //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                          //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasComposer; 
@property (nonatomic,retain) MIPArtist * composer;                        //@synthesize composer=_composer - In the implementation block
@property (nonatomic,readonly) BOOL hasGenre; 
@property (nonatomic,retain) MIPGenre * genre;                            //@synthesize genre=_genre - In the implementation block
@property (assign,nonatomic) BOOL hasDiscNumber; 
@property (assign,nonatomic) int discNumber;                              //@synthesize discNumber=_discNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTrackNumber; 
@property (assign,nonatomic) int trackNumber;                             //@synthesize trackNumber=_trackNumber - In the implementation block
@property (assign,nonatomic) BOOL hasUserRating; 
@property (assign,nonatomic) int userRating;                              //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) BOOL hasExcludeFromShuffle; 
@property (assign,nonatomic) BOOL excludeFromShuffle;                     //@synthesize excludeFromShuffle=_excludeFromShuffle - In the implementation block
@property (assign,nonatomic) BOOL hasAudioFormat; 
@property (assign,nonatomic) int audioFormat;                             //@synthesize audioFormat=_audioFormat - In the implementation block
@property (assign,nonatomic) BOOL hasHasVideo; 
@property (assign,nonatomic) BOOL hasVideo;                               //@synthesize hasVideo=_hasVideo - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackInfo; 
@property (nonatomic,retain) MIPPlaybackInfo * playbackInfo;              //@synthesize playbackInfo=_playbackInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasHlsPlaylistURL; 
@property (nonatomic,retain) NSString * hlsPlaylistURL;                   //@synthesize hlsPlaylistURL=_hlsPlaylistURL - In the implementation block
-(MIPArtist *)composer;
-(void)mergeFrom:(id)arg1 ;
-(void)setDiscNumber:(int)arg1 ;
-(int)discNumber;
-(void)setComposer:(MIPArtist *)arg1 ;
-(BOOL)hasVideo;
-(MIPGenre *)genre;
-(void)setHlsPlaylistURL:(NSString *)arg1 ;
-(void)setHasVideo:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)audioFormat;
-(void)setTrackNumber:(int)arg1 ;
-(void)setGenre:(MIPGenre *)arg1 ;
-(MIPPlaybackInfo *)playbackInfo;
-(MIPAlbum *)album;
-(void)setAlbum:(MIPAlbum *)arg1 ;
-(int)trackNumber;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasArtist;
-(id)description;
-(BOOL)hasDiscNumber;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTrackNumber;
-(void)copyTo:(id)arg1 ;
-(void)setHasHasVideo:(BOOL)arg1 ;
-(BOOL)hasAlbum;
-(void)setHasTrackNumber:(BOOL)arg1 ;
-(void)setUserRating:(int)arg1 ;
-(MIPArtist *)artist;
-(void)writeTo:(id)arg1 ;
-(int)userRating;
-(BOOL)hasGenre;
-(void)setPlaybackInfo:(MIPPlaybackInfo *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasHasVideo;
-(void)setHasDiscNumber:(BOOL)arg1 ;
-(NSString *)hlsPlaylistURL;
-(void)setArtist:(MIPArtist *)arg1 ;
-(BOOL)hasComposer;
-(void)setHasUserRating:(BOOL)arg1 ;
-(BOOL)hasUserRating;
-(void)setExcludeFromShuffle:(BOOL)arg1 ;
-(void)setHasExcludeFromShuffle:(BOOL)arg1 ;
-(BOOL)hasExcludeFromShuffle;
-(void)setAudioFormat:(int)arg1 ;
-(void)setHasAudioFormat:(BOOL)arg1 ;
-(BOOL)hasAudioFormat;
-(BOOL)hasPlaybackInfo;
-(BOOL)hasHlsPlaylistURL;
-(BOOL)excludeFromShuffle;
@end
