/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {

	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;

}
-(id)init;
-(void)_playbackStateChanged:(id)arg1 ;
-(BOOL)setVideoView:(id)arg1 ;
-(id)videoView;
-(BOOL)_setupTargetScreen:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg1 ;
-(void)dealloc;
@end
