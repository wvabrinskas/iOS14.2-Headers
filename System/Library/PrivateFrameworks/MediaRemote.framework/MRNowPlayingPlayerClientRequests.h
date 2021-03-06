/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class MRPlaybackQueue, NSArray, NSObject, NSMutableDictionary, NSMutableArray, NSOperationQueue, MRPlayerPath, MRPlaybackQueueSubscriptionController;

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {

	MRPlaybackQueue* _playbackQueue;
	unsigned _playbackState;
	NSArray* _supportedCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NSMutableDictionary* _playbackQueueCompletions;
	NSMutableArray* _supportedCommandsCompletions;
	NSMutableArray* _playbackStateCompletions;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableDictionary* _transactions;
	NSOperationQueue* _enquedNowPlayingInfoRequests;
	NSOperationQueue* _enquedNowPlayingInfoAssetRequests;
	MRPlayerPath* _playerPath;
	MRPlaybackQueueSubscriptionController* _subscriptionController;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;                                                   //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) MRPlaybackQueueSubscriptionController * subscriptionController;              //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,copy) MRPlaybackQueue * playbackQueue; 
@property (nonatomic,retain) NSArray * supportedCommands; 
-(void)setPlaybackState:(unsigned)arg1 ;
-(unsigned)playbackState;
-(void)restoreNowPlayingClientState;
-(id)initWithPlayerPath:(id)arg1 ;
-(id)transactionCallbacksForName:(unsigned long long)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)updateContentItems:(id)arg1 ;
-(void)handlePlaybackStateRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2 ;
-(id)debugDescription;
-(void)updateContentItemArtwork:(id)arg1 ;
-(void)addPlaybackQueueCompletion:(/*^block*/id)arg1 forRequest:(id)arg2 ;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(void)handleSupportedCommandsRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)removePlaybackQueueCompletionForRequest:(id)arg1 ;
-(void)addTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(NSArray *)supportedCommands;
-(MRPlaybackQueue *)playbackQueue;
-(MRPlaybackQueueSubscriptionController *)subscriptionController;
-(void)enqueuePlaybackQueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

