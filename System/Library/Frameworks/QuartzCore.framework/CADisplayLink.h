/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay;

@interface CADisplayLink : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) CADisplay * display; 
@property (nonatomic,retain) id userInfo; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) double maximumRefreshRate; 
@property (nonatomic,readonly) double heartbeatRate; 
@property (nonatomic,readonly) long long minimumFrameDuration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double targetTimestamp; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setPaused:(BOOL)arg1 ;
-(long long)minimumFrameDuration;
-(void)setFrameInterval:(long long)arg1 ;
-(id)userInfo;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)heartbeatRate;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)targetTimestamp;
-(long long)frameInterval;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(long long)preferredFramesPerSecond;
-(CADisplay *)display;
-(long long)actualFramesPerSecond;
-(BOOL)isPaused;
-(double)maximumRefreshRate;
-(long long)priority;
-(id)_initWithDisplayLinkItem:(DisplayLinkItem*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(double)duration;
-(double)timestamp;
-(void)invalidate;
-(void)dealloc;
@end

