/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSDictionary;

@interface MPSetPriorityForPlaybackSessionCommand : MPRemoteCommand {

	NSDictionary* _preloadedSessions;

}

@property (nonatomic,copy) NSDictionary * preloadedSessions;              //@synthesize preloadedSessions=_preloadedSessions - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreloadedSessions:(NSDictionary *)arg1 ;
-(NSDictionary *)preloadedSessions;
@end

