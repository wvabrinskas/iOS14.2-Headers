/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsKit/MTDictionaryDiff.h>

@class NSUserDefaults;

@interface MTDefaultsChangeNotifier : MTDictionaryDiff {

	BOOL _running;
	NSUserDefaults* _defaults;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;              //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                  //@synthesize defaults=_defaults - In the implementation block
-(NSUserDefaults *)defaults;
-(void)setRunning:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)start;
-(BOOL)isRunning;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)stop;
-(void)dealloc;
-(id)initWithProperties:(id)arg1 defaults:(id)arg2 ;
-(void)_defaultsChanged;
@end
