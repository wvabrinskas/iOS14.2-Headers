/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue, NSNumber;

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	MPRemotePlaybackQueue* _playbackQueue;
	NSNumber* _privateListeningOverride;

}

@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) NSNumber * privateListeningOverride;                //@synthesize privateListeningOverride=_privateListeningOverride - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSNumber *)privateListeningOverride;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 ;
-(MPRemotePlaybackQueue *)playbackQueue;
@end

