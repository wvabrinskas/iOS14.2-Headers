/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LAUIRenderLoopDelegate;
@class CADisplayLink;

@interface LAUIRenderLoop : NSObject {

	CADisplayLink* _display_link;
	BOOL _effective_paused;
	BOOL _background;
	BOOL _in_application_context;
	BOOL _invalidated;
	BOOL _drawing;
	BOOL _paused;
	long long _preferred_fps;
	id<LAUIRenderLoopDelegate> _delegate;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                              //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=isDrawing,nonatomic,readonly) BOOL drawing;                                      //@synthesize drawing=_drawing - In the implementation block
@property (assign,getter=isInApplicationContext,nonatomic) BOOL inApplicationContext;              //@synthesize in_application_context=_in_application_context - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                                   //@synthesize preferred_fps=_preferred_fps - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIRenderLoopDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)init;
-(id<LAUIRenderLoopDelegate>)delegate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setInApplicationContext:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(BOOL)isDrawing;
-(long long)preferredFramesPerSecond;
-(void)attachToScreen:(id)arg1 ;
-(void)setDelegate:(id<LAUIRenderLoopDelegate>)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isPaused;
-(void)_drawAtTime:(double)arg1 ;
-(BOOL)isInvalidated;
-(void)_didInvalidate;
-(void)_didDraw;
-(void)invalidate;
-(void)dealloc;
-(void)_drawWithDisplayLink:(id)arg1 ;
-(void)_updateEffectivePausedState;
-(void)_willDraw;
-(BOOL)_preferredPauseState;
-(BOOL)isInApplicationContext;
@end
