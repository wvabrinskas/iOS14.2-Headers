/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISUserInterfaceStyleModeDelegate.h>

@class UISUserInterfaceStyleMode, _UISunScheduleController, _UICustomScheduleController, NSDate, NSBackgroundActivityScheduler, NSString;

@interface UIUserInterfaceStyleArbiter : NSObject <UISUserInterfaceStyleModeDelegate> {

	UISUserInterfaceStyleMode* _styleMode;
	long long _currentModeValue;
	long long _currentStyle;
	long long _lastProposedAutomaticStyle;
	SCD_Struct_UI9 _lastOverride;
	int _screenDimmingNotificationToken;
	BOOL _isDim;
	_UISunScheduleController* _sunScheduleController;
	_UICustomScheduleController* _customScheduleController;
	NSDate* _lastUpdateDate;
	NSBackgroundActivityScheduler* _backgroundActivityScheduler;
	int _notificationToken;

}

@property (nonatomic,readonly) long long currentStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_updateCurrentStyleForReason:(long long)arg1 ;
-(void)userInterfaceStyleModeDidChange:(id)arg1 ;
-(id)nextTransition;
-(void)toggleCurrentStyleWithOverrideTiming:(long long)arg1 ;
-(void)_setWatchesScreenDim:(BOOL)arg1 ;
-(void)_updateCurrentStyleAndNotify:(BOOL)arg1 forReason:(long long)arg2 ;
-(long long)currentStyle;
-(long long)_proposedStyleForCurrentMode;
-(BOOL)_updateControllersWithOldModeValue:(long long)arg1 newModeValue:(long long)arg2 ;
-(void)_logChangeEventWithNewMode:(long long)arg1 oldMode:(long long)arg2 newStyle:(long long)arg3 oldStyle:(long long)arg4 reason:(long long)arg5 ;
-(id)_init;
-(void)_updateScreenDimUpdatingStyle:(BOOL)arg1 ;
-(void)_logPeriodicEvent;
-(void)toggleCurrentStyle;
@end
