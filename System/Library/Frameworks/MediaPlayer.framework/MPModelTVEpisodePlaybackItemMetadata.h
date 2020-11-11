/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelTVEpisode;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelTVEpisode* _episode;

}

@property (nonatomic,retain) MPModelTVEpisode * episode;              //@synthesize episode=_episode - In the implementation block
+(id)requiredProperties;
-(id)albumArtistName;
-(id)artistName;
-(unsigned long long)hash;
-(BOOL)isExplicitTrack;
-(MPModelTVEpisode *)episode;
-(id)modelGenericObject;
-(unsigned long long)storeSagaID;
-(id)albumTitle;
-(id)contentTitle;
-(long long)albumStoreAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(double)expectedDuration;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setEpisode:(MPModelTVEpisode *)arg1 ;
-(long long)storeSubscriptionAdamID;
-(long long)artistStoreAdamID;
-(unsigned long long)contentType;
-(BOOL)isEqual:(id)arg1 ;
-(long long)storeAdamID;
-(id)mediaItem;
@end
