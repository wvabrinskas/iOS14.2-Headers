/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionAnalyzer.h>
#import <UIKitCore/_UISettingsKeyObserver.h>

@class UIWindow, UILabel, UIView, NSString;

@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver> {

	double _smoothingDegree;
	double _referenceShiftSpeed;
	double _distanceMultiplier;
	BOOL _hasReferenceQuaternion;
	GLKQuaternion _referenceQuaternion;
	GLKQuaternion _absoluteQuaternion;
	double _lastUpdate;
	double _idleStartTime;
	UIOffset _idleStartOffset;
	double _jumpThreshold;
	double _idleLeeway;
	double _secondsBeforeIdle;
	double _lockValue;
	double _lockStrength;
	UIWindow* _diagnosticsWindow;
	UILabel* _idleIndicator;
	UIView* _horizontalLockIndicator;
	UIView* _verticalLockIndicator;
	BOOL _hasHistory;
	UIOffset _lastAppliedViewerOffset;
	GLKQuaternion _lastAppliedRelativeQuaternion;
	BOOL _isApplyingHysteresis;
	GLKQuaternion _relativeQuaternionOnHysteresisEntry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSettings:(id)arg1 ;
-(void)updateHistory;
-(void)_updateReferenceAttitude:(_GLKQuaternion)arg1 timestamp:(double)arg2 ;
-(void)_updateDirectionalLockIndicators;
-(UIOffset)_currentRawOffset:(_GLKQuaternion)arg1 ;
-(BOOL)_isIdleGivenTimestamp:(double)arg1 ;
-(void)_resetDirectionalLockWithViewerOffset:(UIOffset)arg1 ;
-(void)reset;
-(void)_createDiagnosticsWindow;
-(void)_createDirectionLockIndicators;
-(void)_createIdleIndicator;
-(BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(UIOffset)arg1 wasSuspendingApplicationForHysteresis:(BOOL)arg2 ;
-(void)_tearDownIdleIndicator;
-(void)_tearDownDirectionLockIndicators;
-(long long)_directionLockStatus;
-(void)_updateIdleStateForRawOffset:(UIOffset)arg1 timestamp:(double)arg2 ;
-(void)_showIdleUI:(BOOL)arg1 ;
-(void)_updateSmoothedOffsetForRawOffset:(UIOffset)arg1 ;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg1 ;
-(void)_shiftReferenceToYieldRelativeQuaternion:(_GLKQuaternion)arg1 ;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5 ;
-(void)_updateSettings;
-(void)resetHysteresis;
-(void)_tearDownDiagnosticsWindow;
-(void)updateWithEvent:(id)arg1 ;
-(void)_updateAcceleratedOutputRangeFixingOffset:(UIOffset)arg1 ;
-(_GLKQuaternion)_relativeQuaternion;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(double)_directionLockStrength;
-(void)dealloc;
@end

