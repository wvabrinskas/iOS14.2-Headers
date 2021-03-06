/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIViewController, AVPlayerViewController, NSString;


@protocol MPCVideoOutput <NSObject>
@property (assign,nonatomic,__weak) id<MPCVideoOutputDelegate> videoOutputDelegate; 
@property (nonatomic,readonly) UIViewController * playerViewController; 
@property (nonatomic,readonly) AVPlayerViewController * avPlayerViewController; 
@property (assign,nonatomic) BOOL showsPlaybackControls; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@required
-(void)setVideoGravity:(id)arg1;
-(BOOL)isReadyForDisplay;
-(void)exitFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)enterFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)setShowsPlaybackControls:(BOOL)arg1;
-(BOOL)showsPlaybackControls;
-(AVPlayerViewController *)avPlayerViewController;
-(NSString *)videoGravity;
-(CGRect)videoBounds;
-(void)showFullScreenPresentationFromView:(id)arg1 completion:(/*^block*/id)arg2;
-(UIViewController *)playerViewController;
-(id<MPCVideoOutputDelegate>)videoOutputDelegate;
-(void)setVideoOutputDelegate:(id)arg1;

@end

