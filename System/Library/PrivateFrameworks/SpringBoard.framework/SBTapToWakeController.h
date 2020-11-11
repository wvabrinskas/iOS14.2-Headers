/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBTapToWakeDelegate;
@class SBFTapToWakeGestureRecognizer, SBIdleTimerDefaults, NSString;

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate> {

	BOOL _screenOff;
	BOOL _shouldTapToWake;
	id<SBTapToWakeDelegate> _delegate;
	SBFTapToWakeGestureRecognizer* _tapToWakeGestureRecognizer;
	SBFTapToWakeGestureRecognizer* _pencilToWakeGestureRecognizer;
	SBIdleTimerDefaults* _idleTimerDefaults;

}

@property (nonatomic,retain) SBFTapToWakeGestureRecognizer * tapToWakeGestureRecognizer;                 //@synthesize tapToWakeGestureRecognizer=_tapToWakeGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFTapToWakeGestureRecognizer * pencilToWakeGestureRecognizer;              //@synthesize pencilToWakeGestureRecognizer=_pencilToWakeGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIdleTimerDefaults * idleTimerDefaults;                                    //@synthesize idleTimerDefaults=_idleTimerDefaults - In the implementation block
@property (assign,nonatomic,__weak) id<SBTapToWakeDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isScreenOff,nonatomic) BOOL screenOff;                                          //@synthesize screenOff=_screenOff - In the implementation block
@property (nonatomic,readonly) BOOL shouldTapToWake;                                                     //@synthesize shouldTapToWake=_shouldTapToWake - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTapToWakeSupported;
-(id)init;
-(id<SBTapToWakeDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_evaluateEnablement;
-(BOOL)shouldTapToWake;
-(void)setDelegate:(id<SBTapToWakeDelegate>)arg1 ;
-(SBIdleTimerDefaults *)idleTimerDefaults;
-(void)setScreenOff:(BOOL)arg1 ;
-(void)tapToWakeDidRecognize:(id)arg1 ;
-(void)pencilToWakeDidRecognize:(id)arg1 ;
-(BOOL)isScreenOff;
-(SBFTapToWakeGestureRecognizer *)tapToWakeGestureRecognizer;
-(void)setTapToWakeGestureRecognizer:(SBFTapToWakeGestureRecognizer *)arg1 ;
-(SBFTapToWakeGestureRecognizer *)pencilToWakeGestureRecognizer;
-(void)setPencilToWakeGestureRecognizer:(SBFTapToWakeGestureRecognizer *)arg1 ;
-(void)setIdleTimerDefaults:(SBIdleTimerDefaults *)arg1 ;
@end
