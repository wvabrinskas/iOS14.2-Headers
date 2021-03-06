/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class ISAVPlayerUIView, ISWrappedAVPlayer;

@interface ISVideoPlayerUIView : UIView {

	ISAVPlayerUIView* _playerView;
	BOOL _videoLayerReadyForDisplay;
	ISWrappedAVPlayer* _videoPlayer;
	CGRect _contentsRect;

}

@property (nonatomic,retain) ISWrappedAVPlayer * videoPlayer;                      //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                                  //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler; 
@property (nonatomic,readonly) BOOL videoLayerReadyForDisplay;                     //@synthesize videoLayerReadyForDisplay=_videoLayerReadyForDisplay - In the implementation block
-(void)setContentMode:(long long)arg1 ;
-(id)playerLayer;
-(void)setContentsRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateVideoGravity;
-(void)_ISVideoPlayerUIView_commonInitialization;
-(void)setVideoPlayer:(ISWrappedAVPlayer *)arg1 ;
-(CGRect)contentsRect;
-(id)videoLayerReadyForDisplayChangeHandler;
-(id)initWithCoder:(id)arg1 ;
-(void)setVideoLayerReadyForDisplayChangeHandler:(id)arg1 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(BOOL)videoLayerReadyForDisplay;
@end

