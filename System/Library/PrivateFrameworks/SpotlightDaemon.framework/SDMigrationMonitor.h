/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SDEventHandlerProvider.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider> {

	BOOL _unlocked;
	BOOL _foundExtensions;
	BOOL _finishedDataMigration;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionBlock;
	/*^block*/id _eventHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL unlocked;                                   //@synthesize unlocked=_unlocked - In the implementation block
@property (assign,nonatomic) BOOL foundExtensions;                            //@synthesize foundExtensions=_foundExtensions - In the implementation block
@property (assign,nonatomic) BOOL finishedDataMigration;                      //@synthesize finishedDataMigration=_finishedDataMigration - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id eventHandler;                                   //@synthesize eventHandler=_eventHandler - In the implementation block
+(id)sharedInstance;
-(void)setEventHandler:(id)arg1 ;
-(id)completionBlock;
-(BOOL)unlocked;
-(void)_finishMigration;
-(void)unlock;
-(id)init;
-(void)monitorDataMigrationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setUnlocked:(BOOL)arg1 ;
-(void)resumeMigrationQueue;
-(void)registerHandlerWithEventMonitor:(id)arg1 ;
-(void)setFoundExtensions:(BOOL)arg1 ;
-(id)eventHandler;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setFinishedDataMigration:(BOOL)arg1 ;
-(BOOL)foundExtensions;
-(void)_didFindExtensions:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)finishedDataMigration;
-(void)suspendMigrationQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end
