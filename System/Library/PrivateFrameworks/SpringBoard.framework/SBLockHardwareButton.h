/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>
#import <libobjc.A.dylib/SBPressPrecedenceArbiter.h>

@class BSMonotonicReferenceTime, SBLockHardwareButtonActions, SBHardwareButtonGestureParameters, SBPressGestureRecognizer, SBClickGestureRecognizer, SBLongPressGestureRecognizer, UIGestureRecognizer, SBHomeHardwareButton, SBVolumeHardwareButton, NSString;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter> {

	unsigned long long _aggdStartTime;
	BSMonotonicReferenceTime* _lastPressDownReferenceTime;
	int _sysdiagnoseDidBeginNotificationToken;
	SBLockHardwareButtonActions* _buttonActions;
	SBHardwareButtonGestureParameters* _buttonGestureParameters;
	SBPressGestureRecognizer* _buttonDownGestureRecognizer;
	SBClickGestureRecognizer* _singlePressGestureRecognizer;
	SBLongPressGestureRecognizer* _longPressGestureRecognizer;
	SBClickGestureRecognizer* _doublePressGestureRecognizer;
	SBClickGestureRecognizer* _triplePressGestureRecognizer;
	SBClickGestureRecognizer* _quadruplePressGestureRecognizer;
	UIGestureRecognizer* _screenshotGestureRecognizer;
	SBLongPressGestureRecognizer* _shutdownGestureRecognizer;
	SBHomeHardwareButton* _homeHardwareButton;
	SBVolumeHardwareButton* _volumeHardwareButton;
	long long _homeButtonType;
	unsigned long long _configuredMaximumPressCount;
	unsigned long long _currentPressCount;

}

@property (nonatomic,retain) SBLockHardwareButtonActions * buttonActions;                                  //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) SBHardwareButtonGestureParameters * buttonGestureParameters;                  //@synthesize buttonGestureParameters=_buttonGestureParameters - In the implementation block
@property (nonatomic,retain) SBPressGestureRecognizer * buttonDownGestureRecognizer;                       //@synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * singlePressGestureRecognizer;                      //@synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBLongPressGestureRecognizer * longPressGestureRecognizer;                    //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * doublePressGestureRecognizer;                      //@synthesize doublePressGestureRecognizer=_doublePressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * triplePressGestureRecognizer;                      //@synthesize triplePressGestureRecognizer=_triplePressGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBClickGestureRecognizer * quadruplePressGestureRecognizer;                   //@synthesize quadruplePressGestureRecognizer=_quadruplePressGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * screenshotGestureRecognizer;                     //@synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) SBLongPressGestureRecognizer * shutdownGestureRecognizer;              //@synthesize shutdownGestureRecognizer=_shutdownGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) SBHomeHardwareButton * homeHardwareButton;                             //@synthesize homeHardwareButton=_homeHardwareButton - In the implementation block
@property (assign,nonatomic,__weak) SBVolumeHardwareButton * volumeHardwareButton;                         //@synthesize volumeHardwareButton=_volumeHardwareButton - In the implementation block
@property (assign,nonatomic) long long homeButtonType;                                                     //@synthesize homeButtonType=_homeButtonType - In the implementation block
@property (assign,nonatomic) unsigned long long configuredMaximumPressCount;                               //@synthesize configuredMaximumPressCount=_configuredMaximumPressCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentPressCount;                                         //@synthesize currentPressCount=_currentPressCount - In the implementation block
@property (nonatomic,readonly) BOOL isButtonDown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScreenshotGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(SBHardwareButtonGestureParameters *)buttonGestureParameters;
-(void)longPress:(id)arg1 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(SBLockHardwareButtonActions *)buttonActions;
-(SBHomeHardwareButton *)homeHardwareButton;
-(BOOL)isButtonDown;
-(void)_updatePressCountForDownEvent;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setTriplePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(void)setButtonGestureParameters:(SBHardwareButtonGestureParameters *)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 homeButtonType:(long long)arg6 ;
-(void)forceResetSequenceDidBegin;
-(void)SOSTriggerMechanismDidChange;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)arg1 ;
-(unsigned long long)currentPressCount;
-(void)buttonDown:(id)arg1 ;
-(void)singlePress:(id)arg1 ;
-(void)_createGestureRecognizers;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 buttonActions:(id)arg6 homeButtonType:(long long)arg7 createGestures:(BOOL)arg8 ;
-(void)setLongPressGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(void)setHomeButtonType:(long long)arg1 ;
-(void)screenshotRecognizerDidRecognize:(id)arg1 ;
-(SBClickGestureRecognizer *)singlePressGestureRecognizer;
-(id)preemptablePressGestureRecognizers;
-(unsigned long long)configuredMaximumPressCount;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)triplePress:(id)arg1 ;
-(void)_reconfigureButtonGestureRecognizers;
-(BOOL)reverseFadeOutIfNeeded;
-(SBLongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setHomeHardwareButton:(SBHomeHardwareButton *)arg1 ;
-(void)setButtonActions:(SBLockHardwareButtonActions *)arg1 ;
-(SBLongPressGestureRecognizer *)shutdownGestureRecognizer;
-(void)setSinglePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(SBClickGestureRecognizer *)triplePressGestureRecognizer;
-(void)setConfiguredMaximumPressCount:(unsigned long long)arg1 ;
-(void)setQuadruplePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(void)setVolumeHardwareButton:(SBVolumeHardwareButton *)arg1 ;
-(void)setButtonDownGestureRecognizer:(SBPressGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)screenshotGestureRecognizer;
-(void)setCurrentPressCount:(unsigned long long)arg1 ;
-(SBPressGestureRecognizer *)buttonDownGestureRecognizer;
-(void)setShutdownGestureRecognizer:(SBLongPressGestureRecognizer *)arg1 ;
-(SBClickGestureRecognizer *)doublePressGestureRecognizer;
-(SBClickGestureRecognizer *)quadruplePressGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)hardwareButtonGestureParameters;
-(long long)homeButtonType;
-(SBVolumeHardwareButton *)volumeHardwareButton;
-(void)quadruplePress:(id)arg1 ;
-(void)setDoublePressGestureRecognizer:(SBClickGestureRecognizer *)arg1 ;
-(void)dealloc;
-(void)cancelLongPress;
-(void)doublePress:(id)arg1 ;
@end

