/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPMusicPlayerControllerSystemServer.h>
#import <libobjc.A.dylib/MPMusicPlayerControllerApplicationServer.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPMusicPlayerQueueDescriptor, MPCPlaybackEngine, MPMusicPlayerControllerSystemCache, NSXPCListener, NSMutableArray, NSXPCListenerEndpoint, NSString;

@interface _MPCMusicPlayerControllerServer : NSObject <MPMusicPlayerControllerSystemServer, MPMusicPlayerControllerApplicationServer, NSXPCListenerDelegate, MPCPlaybackEngineEventObserving> {

	MPMusicPlayerQueueDescriptor* _queueDescriptor;
	MPMusicPlayerQueueDescriptor* _preparingDescriptor;
	/*^block*/id _prepareCompletionHandler;
	BOOL _skipWaitingForLikelyToKeepUp;
	MPCPlaybackEngine* _playbackEngine;
	MPMusicPlayerControllerSystemCache* _systemCache;
	NSXPCListener* _listener;
	NSMutableArray* _activeConnections;

}

@property (nonatomic,readonly) MPMusicPlayerControllerSystemCache * systemCache;              //@synthesize systemCache=_systemCache - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSMutableArray * activeConnections;                            //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                     //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPCPlaybackEngine *)playbackEngine;
-(void)beginSeekWithDirection:(long long)arg1 ;
-(void)pauseWithFadeDuration:(long long)arg1 ;
-(NSMutableArray *)activeConnections;
-(id)_timeSnapshotWithElapsedTime:(double)arg1 rate:(float)arg2 ;
-(void)getTimeSnapshotWithReply:(/*^block*/id)arg1 ;
-(void)reshuffle;
-(NSXPCListener *)listener;
-(id)_nowPlayingWithItem:(id)arg1 ;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2 ;
-(void)play;
-(void)getUserQueueModificationsDisabledWithReply:(/*^block*/id)arg1 ;
-(void)getShuffleModeWithReply:(/*^block*/id)arg1 ;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2 ;
-(void)setNowPlayingItem:(id)arg1 itemIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setElapsedTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)isRunning;
-(void)setShuffleMode:(long long)arg1 ;
-(void)getNowPlayingWithReply:(/*^block*/id)arg1 ;
-(void)endSeek;
-(MPMusicPlayerControllerSystemCache *)systemCache;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2 ;
-(void)beginPlaybackAtHostTime:(id)arg1 ;
-(void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)performQueueModifications:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getNowPlayingAtIndex:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)appendDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startServer;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2 ;
-(void)setPlaybackRate:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRepeatModeWithReply:(/*^block*/id)arg1 ;
-(void)getImageForArtworkIdentifier:(id)arg1 itemIdentifier:(id)arg2 atSize:(CGSize)arg3 reply:(/*^block*/id)arg4 ;
-(void)stop;
-(void)getDescriptorWithReply:(/*^block*/id)arg1 ;
-(void)setRepeatMode:(long long)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)skipWithBehavior:(long long)arg1 ;
-(void)prerollWithCompletion:(/*^block*/id)arg1 ;
-(void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2 ;
-(void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3 ;
-(void)prependDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopServer;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(void)setDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserQueueModificationsDisabled:(BOOL)arg1 ;
-(void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2 ;
@end

