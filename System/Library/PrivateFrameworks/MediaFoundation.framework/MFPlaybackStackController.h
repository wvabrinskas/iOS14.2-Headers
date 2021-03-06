/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFPlaybackStackController <MFPlaybackInformationProviding,MFAudioSessionControlling,MFStateDumpable,MFResettable>
@property (assign,nonatomic) long long maximumPlayerQueueLength; 
@property (assign,__weak,nonatomic) id<MFPlaybackStackControllerDelegate> delegate; 
@required
-(id<MFPlaybackStackControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setQueueWithInitialItem:(id)arg1 andPlay:(BOOL)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)jumpTo:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pauseWithFadeOut:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pauseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)shouldSkipJumpToItemStart:(long long)arg1;
-(void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endScanningWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setMaximumPlayerQueueLength:(long long)arg1;
-(long long)maximumPlayerQueueLength;
-(void)beginSeekingWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)seekTo:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endSeekingWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

